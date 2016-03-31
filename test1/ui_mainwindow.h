/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *LoginWidget;
    QPushButton *print;
    QLineEdit *username;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *pushButton;
    QWidget *Createwidget;
    QPushButton *Add;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nuser;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *npass;
    QLineEdit *ncpass;
    QLabel *error;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(999, 573);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LoginWidget = new QWidget(centralWidget);
        LoginWidget->setObjectName(QStringLiteral("LoginWidget"));
        LoginWidget->setGeometry(QRect(100, 30, 331, 321));
        print = new QPushButton(LoginWidget);
        print->setObjectName(QStringLiteral("print"));
        print->setGeometry(QRect(0, 210, 99, 27));
        username = new QLineEdit(LoginWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(160, 30, 113, 27));
        label = new QLabel(LoginWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 0, 81, 17));
        label_2 = new QLabel(LoginWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 100, 71, 17));
        password = new QLineEdit(LoginWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(160, 130, 113, 27));
        password->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(LoginWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 210, 99, 27));
        Createwidget = new QWidget(centralWidget);
        Createwidget->setObjectName(QStringLiteral("Createwidget"));
        Createwidget->setEnabled(true);
        Createwidget->setGeometry(QRect(490, 30, 391, 361));
        Add = new QPushButton(Createwidget);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(40, 230, 99, 27));
        label_3 = new QLabel(Createwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 40, 81, 17));
        label_4 = new QLabel(Createwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 10, 201, 17));
        nuser = new QLineEdit(Createwidget);
        nuser->setObjectName(QStringLiteral("nuser"));
        nuser->setGeometry(QRect(30, 60, 113, 27));
        label_5 = new QLabel(Createwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 100, 67, 17));
        label_6 = new QLabel(Createwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 160, 131, 17));
        npass = new QLineEdit(Createwidget);
        npass->setObjectName(QStringLiteral("npass"));
        npass->setGeometry(QRect(30, 120, 113, 27));
        ncpass = new QLineEdit(Createwidget);
        ncpass->setObjectName(QStringLiteral("ncpass"));
        ncpass->setGeometry(QRect(30, 180, 113, 27));
        error = new QLabel(Createwidget);
        error->setObjectName(QStringLiteral("error"));
        error->setGeometry(QRect(50, 270, 311, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 999, 25));
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
        print->setText(QApplication::translate("MainWindow", "print", 0));
        label->setText(QApplication::translate("MainWindow", "Username", 0));
        label_2->setText(QApplication::translate("MainWindow", "Password", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Log in", 0));
        Add->setText(QApplication::translate("MainWindow", "Add", 0));
        label_3->setText(QApplication::translate("MainWindow", "Username", 0));
        label_4->setText(QApplication::translate("MainWindow", "Create users", 0));
        label_5->setText(QApplication::translate("MainWindow", "Password", 0));
        label_6->setText(QApplication::translate("MainWindow", "Confirm password", 0));
        npass->setText(QString());
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
