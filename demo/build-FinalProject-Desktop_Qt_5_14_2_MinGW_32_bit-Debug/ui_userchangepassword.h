/********************************************************************************
** Form generated from reading UI file 'userchangepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCHANGEPASSWORD_H
#define UI_USERCHANGEPASSWORD_H

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

class Ui_UserChangePassword
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *newPassword;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *renewPassword;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *UserChangePassword)
    {
        if (UserChangePassword->objectName().isEmpty())
            UserChangePassword->setObjectName(QString::fromUtf8("UserChangePassword"));
        UserChangePassword->resize(331, 270);
        gridLayout_4 = new QGridLayout(UserChangePassword);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget_2 = new QWidget(UserChangePassword);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        newPassword = new QLineEdit(widget_2);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));
        newPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(newPassword, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        renewPassword = new QLineEdit(widget_2);
        renewPassword->setObjectName(QString::fromUtf8("renewPassword"));
        renewPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(renewPassword, 1, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 3, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(UserChangePassword);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        widget_3 = new QWidget(UserChangePassword);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 3, 1, 1);


        gridLayout_4->addWidget(widget_3, 2, 0, 1, 1);


        retranslateUi(UserChangePassword);

        QMetaObject::connectSlotsByName(UserChangePassword);
    } // setupUi

    void retranslateUi(QDialog *UserChangePassword)
    {
        UserChangePassword->setWindowTitle(QCoreApplication::translate("UserChangePassword", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("UserChangePassword", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("UserChangePassword", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("UserChangePassword", "\347\224\250\346\210\267\344\277\256\346\224\271\345\257\206\347\240\201\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("UserChangePassword", "\345\217\226\346\266\210", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UserChangePassword", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserChangePassword: public Ui_UserChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCHANGEPASSWORD_H
