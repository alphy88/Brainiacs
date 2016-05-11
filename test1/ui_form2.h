/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QGridLayout *gridLayout;
    QWidget *Createwidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *nuser;
    QLabel *label_5;
    QLineEdit *npass;
    QLabel *label_6;
    QLineEdit *ncpass;
    QPushButton *Add;
    QLabel *error;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QStringLiteral("Form2"));
        Form2->resize(349, 364);
        gridLayout = new QGridLayout(Form2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Createwidget = new QWidget(Form2);
        Createwidget->setObjectName(QStringLiteral("Createwidget"));
        Createwidget->setEnabled(true);
        formLayout = new QFormLayout(Createwidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(Createwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(Createwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        nuser = new QLineEdit(Createwidget);
        nuser->setObjectName(QStringLiteral("nuser"));

        formLayout->setWidget(2, QFormLayout::LabelRole, nuser);

        label_5 = new QLabel(Createwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        npass = new QLineEdit(Createwidget);
        npass->setObjectName(QStringLiteral("npass"));

        formLayout->setWidget(4, QFormLayout::LabelRole, npass);

        label_6 = new QLabel(Createwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        ncpass = new QLineEdit(Createwidget);
        ncpass->setObjectName(QStringLiteral("ncpass"));

        formLayout->setWidget(6, QFormLayout::LabelRole, ncpass);

        Add = new QPushButton(Createwidget);
        Add->setObjectName(QStringLiteral("Add"));

        formLayout->setWidget(7, QFormLayout::LabelRole, Add);

        error = new QLabel(Createwidget);
        error->setObjectName(QStringLiteral("error"));

        formLayout->setWidget(8, QFormLayout::LabelRole, error);


        gridLayout->addWidget(Createwidget, 0, 0, 1, 1);


        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", 0));
        label_4->setText(QApplication::translate("Form2", "Create users", 0));
        label_3->setText(QApplication::translate("Form2", "Username", 0));
        label_5->setText(QApplication::translate("Form2", "Password", 0));
        npass->setText(QString());
        label_6->setText(QApplication::translate("Form2", "Confirm password", 0));
        Add->setText(QApplication::translate("Form2", "Add", 0));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
