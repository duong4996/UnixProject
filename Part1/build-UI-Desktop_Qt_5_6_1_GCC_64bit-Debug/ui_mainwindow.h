/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *DIR;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QLabel *label_8;
    QPushButton *pushButton_7;
    QTextEdit *list_video;
    QFrame *line_3;
    QLabel *label_9;
    QFrame *line_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QTextEdit *name;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_13;
    QTextEdit *searchResult;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QTextEdit *play;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1226, 656);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 631, 17));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 99, 31));
        DIR = new QTextEdit(centralWidget);
        DIR->setObjectName(QStringLiteral("DIR"));
        DIR->setGeometry(QRect(130, 30, 1051, 31));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 80, 271, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 80, 131, 17));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(410, 80, 561, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 100, 661, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 120, 361, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 151, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 180, 99, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 220, 101, 17));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 240, 99, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 280, 99, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 320, 99, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 360, 131, 17));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 380, 99, 31));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 420, 71, 17));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 440, 99, 31));
        list_video = new QTextEdit(centralWidget);
        list_video->setObjectName(QStringLiteral("list_video"));
        list_video->setGeometry(QRect(160, 150, 621, 391));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(790, 90, 20, 511));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(980, 80, 91, 17));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(1070, 80, 161, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(840, 100, 381, 20));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(890, 120, 251, 20));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(810, 160, 67, 17));
        name = new QTextEdit(centralWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(880, 150, 331, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(920, 190, 99, 31));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(1060, 190, 99, 31));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(810, 230, 61, 17));
        searchResult = new QTextEdit(centralWidget);
        searchResult->setObjectName(QStringLiteral("searchResult"));
        searchResult->setGeometry(QRect(880, 230, 331, 161));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(820, 400, 401, 17));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(820, 420, 401, 17));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(820, 440, 161, 17));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(810, 470, 101, 17));
        play = new QTextEdit(centralWidget);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(910, 460, 301, 31));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(940, 500, 99, 31));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(1080, 500, 99, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1226, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Firstly, click Directory button to access to the for search, or type the directory into box", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Directory", 0));
        label_2->setText(QApplication::translate("MainWindow", "List and sort video", 0));
        label_3->setText(QApplication::translate("MainWindow", "Press any button due to your purpose. If the folder doesn't have any video then the box is empty. ", 0));
        label_4->setText(QApplication::translate("MainWindow", "With sort by created time, list all videos before sort", 0));
        label_5->setText(QApplication::translate("MainWindow", "List all video in folder", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "List", 0));
        label_6->setText(QApplication::translate("MainWindow", "Sort video by:", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Name", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Size", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Created Time", 0));
        label_7->setText(QApplication::translate("MainWindow", "Check same name", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Check", 0));
        label_8->setText(QApplication::translate("MainWindow", "Clear box:", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_9->setText(QApplication::translate("MainWindow", "Search video", 0));
        label_10->setText(QApplication::translate("MainWindow", "Type the keyword in the box then press search button, ", 0));
        label_11->setText(QApplication::translate("MainWindow", "the result will show in the result box", 0));
        label_12->setText(QApplication::translate("MainWindow", "Keyword :", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "Search", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_13->setText(QApplication::translate("MainWindow", "Result :", 0));
        label_14->setText(QApplication::translate("MainWindow", "After search, for play any video, copy directory from result", 0));
        label_15->setText(QApplication::translate("MainWindow", "box to directory box below or type the directory in this box", 0));
        label_16->setText(QApplication::translate("MainWindow", "Then press play button", 0));
        label_17->setText(QApplication::translate("MainWindow", "Directory box:", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "Play", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
