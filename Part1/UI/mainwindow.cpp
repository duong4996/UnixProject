#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <QProcess>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QFileDialog>
#include <QStringList>
#include <QDateTime>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString directory = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
          "",
         QFileDialog::ShowDirsOnly
         | QFileDialog::DontResolveSymlinks);
    ui->DIR->setText(directory);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString text = " "+ui->DIR->toPlainText();
    string cmd = "./findVideo.sh "+text.toStdString();
    system("chmod +x findVideo.sh");
    system(cmd.c_str());

    ifstream fin { "Output.txt" };
    string s { istreambuf_iterator<char>(fin), istreambuf_iterator<char>() };
    QString str = s.c_str();
    ui->list_video->setText(str);
    ui->list_video->setReadOnly(true);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString text = " "+ui->DIR->toPlainText();
    string cmd = "./sortByName.sh "+text.toStdString();
    system("chmod +x sortByName.sh");
    system(cmd.c_str());

    ifstream fin { "sortByName.txt" };
    string s { istreambuf_iterator<char>(fin), istreambuf_iterator<char>() };
    QString str = s.c_str();
    ui->list_video->setText(str);
    ui->list_video->setReadOnly(true);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString text = " "+ui->DIR->toPlainText();
    string cmd = "./sortBySize.sh "+text.toStdString();
    system("chmod +x sortBySize.sh");
    system(cmd.c_str());

    ifstream fin { "sortBySize.txt" };
    string s { istreambuf_iterator<char>(fin), istreambuf_iterator<char>() };
    QString str = s.c_str();
    ui->list_video->setText(str);
    ui->list_video->setReadOnly(true);
}

void MainWindow::on_pushButton_5_clicked()
{
    system("chmod +x sortByCreatedTime.sh");
    system("./sortByCreatedTime.sh");

    ifstream fin { "sortByCreatedTime.txt" };
    string s { istreambuf_iterator<char>(fin), istreambuf_iterator<char>() };
    QString str = s.c_str();
    ui->list_video->setText(str);
    ui->list_video->setReadOnly(true);
}

void MainWindow::on_pushButton_6_clicked()
{
    QString text = " "+ui->DIR->toPlainText();
    string cmd = "./checkSameName.sh "+text.toStdString();
    system("chmod +x checkSameName.sh");
    system(cmd.c_str());

    ifstream fin { "checkSameName.txt" };
    string s { istreambuf_iterator<char>(fin), istreambuf_iterator<char>() };
    QString str = s.c_str();
    ui->list_video->setText(str);
    ui->list_video->setReadOnly(true);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->list_video->setText(" ");
}

void MainWindow::on_pushButton_8_clicked()
{
    QString name = ui->name->toPlainText();
    QString text = " "+ui->DIR->toPlainText();
    string cmd = "./searchVideo.sh"+text.toStdString()+" "+name.toStdString();
    system("chmod +x searchVideo.sh");
    system(cmd.c_str());

    ifstream fin { "searchResult.txt" };
    string s { istreambuf_iterator<char>(fin), istreambuf_iterator<char>() };
    QString str = s.c_str();
    ui->searchResult->setText(str);
    ui->searchResult->setReadOnly(true);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->searchResult->setText(" ");
    ui->name->setText(" ");
}

void MainWindow::on_pushButton_10_clicked()
{
    QString play = " "+ui->play->toPlainText();
    string cmd = "vlc"+play.toStdString();
    system(cmd.c_str());
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->play->setText(" ");
}
