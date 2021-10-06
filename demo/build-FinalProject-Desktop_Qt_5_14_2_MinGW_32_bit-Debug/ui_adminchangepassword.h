/********************************************************************************
** Form generated from reading UI file 'adminchangepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCHANGEPASSWORD_H
#define UI_ADMINCHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminChangePassword
{
public:
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *newPassword;
    QLineEdit *ID;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QDialog *adminChangePassword)
    {
        if (adminChangePassword->objectName().isEmpty())
            adminChangePassword->setObjectName(QString::fromUtf8("adminChangePassword"));
        adminChangePassword->resize(348, 273);
        gridLayout_5 = new QGridLayout(adminChangePassword);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget = new QWidget(adminChangePassword);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_5->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(adminChangePassword);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        newPassword = new QLineEdit(widget_2);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));
        newPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(newPassword, 2, 2, 1, 1);

        ID = new QLineEdit(widget_2);
        ID->setObjectName(QString::fromUtf8("ID"));

        gridLayout_2->addWidget(ID, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 2, 3, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 3, 1, 1);


        gridLayout_5->addWidget(widget_2, 1, 0, 1, 1);

        widget_4 = new QWidget(adminChangePassword);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_4->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_4->addWidget(pushButton_2, 0, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 0, 3, 1, 1);


        gridLayout_5->addWidget(widget_4, 2, 0, 1, 1);


        retranslateUi(adminChangePassword);

        QMetaObject::connectSlotsByName(adminChangePassword);
    } // setupUi

    void retranslateUi(QDialog *adminChangePassword)
    {
        adminChangePassword->setWindowTitle(QCoreApplication::translate("adminChangePassword", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminChangePassword", "\347\256\241\347\220\206\345\221\230\344\277\256\346\224\271\345\257\206\347\240\201\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("adminChangePassword", "\350\264\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("adminChangePassword", "\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("adminChangePassword", "\345\217\226\346\266\210", nullptr));
        pushButton_2->setText(QCoreApplication::translate("adminChangePassword", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminChangePassword: public Ui_adminChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCHANGEPASSWORD_H
