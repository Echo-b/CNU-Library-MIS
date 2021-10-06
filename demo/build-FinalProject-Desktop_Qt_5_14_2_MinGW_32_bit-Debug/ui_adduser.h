/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

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

class Ui_AddUser
{
public:
    QGridLayout *gridLayout_9;
    QWidget *widget_9;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_15;
    QWidget *widget_6;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QLineEdit *ID;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer_16;
    QWidget *widget_3;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_24;
    QLineEdit *classID;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label_2;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QLineEdit *gender;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_11;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *college;
    QSpacerItem *horizontalSpacer_18;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *telphoneNum;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_22;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName(QString::fromUtf8("AddUser"));
        AddUser->resize(452, 611);
        gridLayout_9 = new QGridLayout(AddUser);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        widget_9 = new QWidget(AddUser);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        gridLayout = new QGridLayout(widget_9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 0, 0, 1, 1);

        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setPointSize(14);
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 0, 2, 1, 1);


        gridLayout_9->addWidget(widget_9, 0, 0, 1, 1);

        widget_6 = new QWidget(AddUser);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_2 = new QGridLayout(widget_6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        ID = new QLineEdit(widget_6);
        ID->setObjectName(QString::fromUtf8("ID"));

        gridLayout_2->addWidget(ID, 0, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 4, 1, 1);


        gridLayout_9->addWidget(widget_6, 1, 0, 1, 1);

        widget = new QWidget(AddUser);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        name = new QLineEdit(widget);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout_3->addWidget(name, 0, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_16, 0, 4, 1, 1);


        gridLayout_9->addWidget(widget, 2, 0, 1, 1);

        widget_3 = new QWidget(AddUser);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_8 = new QGridLayout(widget_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_23, 0, 0, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_24, 0, 2, 1, 1);

        classID = new QLineEdit(widget_3);
        classID->setObjectName(QString::fromUtf8("classID"));

        gridLayout_8->addWidget(classID, 0, 3, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_25, 0, 4, 1, 1);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_8->addWidget(label_2, 0, 1, 1, 1);


        gridLayout_9->addWidget(widget_3, 3, 0, 1, 1);

        widget_7 = new QWidget(AddUser);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gender = new QLineEdit(widget_7);
        gender->setObjectName(QString::fromUtf8("gender"));

        gridLayout_4->addWidget(gender, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 1, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_17, 0, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_7, 4, 0, 1, 1);

        widget_8 = new QWidget(AddUser);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_12, 0, 0, 1, 1);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        college = new QLineEdit(widget_8);
        college->setObjectName(QString::fromUtf8("college"));

        gridLayout_5->addWidget(college, 0, 3, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_18, 0, 4, 1, 1);


        gridLayout_9->addWidget(widget_8, 5, 0, 1, 1);

        widget_5 = new QWidget(AddUser);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_13, 0, 0, 1, 1);

        telphoneNum = new QLineEdit(widget_5);
        telphoneNum->setObjectName(QString::fromUtf8("telphoneNum"));

        gridLayout_6->addWidget(telphoneNum, 0, 3, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_19, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 0, 1, 1, 1);


        gridLayout_9->addWidget(widget_5, 6, 0, 1, 1);

        widget_2 = new QWidget(AddUser);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_7 = new QGridLayout(widget_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_21, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 0, 6, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_20, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_7->addWidget(pushButton_2, 0, 5, 1, 1);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_7->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_22, 0, 4, 1, 1);


        gridLayout_9->addWidget(widget_2, 7, 0, 1, 1);


        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QDialog *AddUser)
    {
        AddUser->setWindowTitle(QCoreApplication::translate("AddUser", "\345\242\236\345\212\240\347\224\250\346\210\267", nullptr));
        label_9->setText(QCoreApplication::translate("AddUser", "\345\242\236\345\212\240\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        label_6->setText(QCoreApplication::translate("AddUser", "\345\242\236\345\212\240\347\224\250\346\210\267\345\255\246\345\217\267/\345\267\245\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("AddUser", "\345\242\236\345\212\240\347\224\250\346\210\267\345\247\223\345\220\215    ", nullptr));
        label_2->setText(QCoreApplication::translate("AddUser", "\345\242\236\345\212\240\347\224\250\346\210\267\347\217\255\347\272\247    ", nullptr));
        label_7->setText(QCoreApplication::translate("AddUser", "\345\242\236\345\212\240\347\224\250\346\210\267\346\200\247\345\210\253    ", nullptr));
        label_8->setText(QCoreApplication::translate("AddUser", "\345\242\236\345\212\240\347\224\250\346\210\267\345\255\246\351\231\242    ", nullptr));
        label_5->setText(QCoreApplication::translate("AddUser", "\345\242\236\345\212\240\347\224\250\346\210\267\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddUser", "\347\241\256\350\256\244", nullptr));
        pushButton->setText(QCoreApplication::translate("AddUser", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
