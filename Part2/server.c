#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sqlite3.h>
#define PORT 5000
#define BUFSIZE 1024
sqlite3 *db;

void send_to_all(int j, int i, int sockfd, int nbytes_recvd, char *recv_buf, fd_set *master)
{
	if (FD_ISSET(j, master)){
		if (j != sockfd && j != i) {
			if (send(j, recv_buf, nbytes_recvd, 0) == -1) {
				perror("send");
			}
		}
	}
}
static int callback(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}
//------------ Ket noi vao du lieu
int connect_database(){
   int rc;
   /* Open database */
   rc = sqlite3_open("my_database.db", &db);
   if( rc ){
      printf("Can't open database: %s\n", sqlite3_errmsg(db));
      return 0;
   }else{
      printf("Opened database successfully\n");
		return 1;
   }
	
}
void update_database(char *data, char *ip, int port){
	


   char *zErrMsg = 0;
   int rc;
   char sql[256];

	sprintf(sql,"%s'%s',%d,'%s'%s","INSERT INTO my_table (IP,PORT,DATA) VALUES (",ip,port,data,")");

   /* Open database */
	
	

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
      printf("SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      printf("Chat records saved in database successfully !!!\n");
   }
   
}
		
void send_recv(int i, fd_set *master, int sockfd, int fdmax,struct sockaddr_in *client_addr)
{
	int nbytes_recvd, j;
	char recv_buf[BUFSIZE], buf[BUFSIZE];
	//--- get ip and port
	socklen_t addrlen;
	int newsockfd;
	
	addrlen = sizeof(struct sockaddr_in);
	//printf("new connection from %s on port %d \n",inet_ntoa(client_addr->sin_addr), ntohs(client_addr-//>sin_port));
	//------------
	if ((nbytes_recvd = recv(i, recv_buf, BUFSIZE, 0)) <= 0) {
		if (nbytes_recvd == 0) {
			printf("socket %d hung up\n", i);
		}else {
			perror("recv");
		}
		close(i);
		FD_CLR(i, master);
	}else {
		for(j = 0; j <= fdmax; j++){
			send_to_all(j, i, sockfd, nbytes_recvd, recv_buf, master );
		}

		recv_buf[nbytes_recvd-1] = NULL;
		if (recv_buf != NULL && strlen(recv_buf) != 0){
			update_database(recv_buf,inet_ntoa(client_addr->sin_addr), ntohs(client_addr->sin_port));
		}
		
	}	
}
		
void connection_accept(fd_set *master, int *fdmax, int sockfd, struct sockaddr_in *client_addr)
{
	socklen_t addrlen;
	int newsockfd;
	
	addrlen = sizeof(struct sockaddr_in);
	if((newsockfd = accept(sockfd, (struct sockaddr *)client_addr, &addrlen)) == -1) {
		perror("accept");
		exit(1);
	}else {
		FD_SET(newsockfd, master);
		if(newsockfd > *fdmax){
			*fdmax = newsockfd;
		}
		printf("New connection from %s on port %d \n",inet_ntoa(client_addr->sin_addr), ntohs(client_addr->sin_port));
	}
}
	
void connect_request(int *sockfd, struct sockaddr_in *my_addr)
{
	int yes = 1;
    //create a master socket
	if ((*sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
		perror("Socket");
		exit(1);
	}
		
	my_addr->sin_family = AF_INET;
	my_addr->sin_port = htons(5000);
	my_addr->sin_addr.s_addr = INADDR_ANY;
	memset(my_addr->sin_zero, '\0', sizeof my_addr->sin_zero);
		
    //set master socket to allow multiple connections
	if (setsockopt(*sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1) {
		perror("setsockopt");
		exit(1);
	}
    
	//bind the socket to localhost port
	if (bind(*sockfd, (struct sockaddr *)my_addr, sizeof(struct sockaddr)) == -1) {
		perror("Unable to bind");
		exit(1);
	}
    //try to specify maximum of 10 pending connections for the master socket
	if (listen(*sockfd, 10) == -1) {
		perror("listen");
		exit(1);
	}
	printf("\nTCP server is waiting for client on port 5000\n");
	fflush(stdout);
}
int main()
{

   
    //set of socket descriptors
	fd_set master;
    //set of read socket descriptors
	fd_set read_fds;
	int fdmax, i;
	int sockfd= 0;
	struct sockaddr_in my_addr, client_addr;
	
    //Clear an fd_set master
	FD_ZERO(&master);
    //Clear an fd_set read_fds
	FD_ZERO(&read_fds);
	connect_request(&sockfd, &my_addr);
    //Add a descriptor sockfd to an fd_set (master)
	FD_SET(sockfd, &master);
	
	fdmax = sockfd;
	connect_database();
	while(1){
		read_fds = master;
        //wait for an activity on one of the sockets , timeout is NULL , so wait indefinitely
		if(select(fdmax+1, &read_fds, NULL, NULL, NULL) == -1){
			perror("select");
			exit(4);
		}
		
		for (i = 0; i <= fdmax; i++){
			if (FD_ISSET(i, &read_fds)){
                //If something happened on the master socket , then its an incoming connection
				if (i == sockfd)
					connection_accept(&master, &fdmax, sockfd, &client_addr);
                //else its some IO operation on some other socket :)
				else
					send_recv(i, &master, sockfd, fdmax,&client_addr);
			}
		}
	}
  sqlite3_close(db);
	return 0;
}
		
