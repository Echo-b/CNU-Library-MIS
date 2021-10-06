/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout_6;
    QWidget *widget_13;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_34;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_33;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QRadioButton *checkBoxAdmin;
    QRadioButton *checkBoxTea;
    QRadioButton *checkBoxStu;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *password;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *ID;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_15;
    QGridLayout *gridLayout_17;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_13;
    QWidget *widget_12;
    QGridLayout *gridLayout_15;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_30;
    QLineEdit *telphoneNum;
    QSpacerItem *horizontalSpacer_29;
    QWidget *widget_5;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_26;
    QWidget *widget_14;
    QGridLayout *gridLayout_16;
    QRadioButton *checkBoxStu_2;
    QSpacerItem *horizontalSpacer_32;
    QRadioButton *checkBoxTea_2;
    QSpacerItem *horizontalSpacer_31;
    QWidget *widget_8;
    QGridLayout *gridLayout_9;
    QLabel *label_5;
    QLineEdit *password_2;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_14;
    QWidget *widget_6;
    QGridLayout *gridLayout_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *ID_2;
    QSpacerItem *horizontalSpacer_12;
    QWidget *widget_11;
    QGridLayout *gridLayout_14;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_8;
    QLineEdit *classID;
    QSpacerItem *horizontalSpacer_28;
    QWidget *widget_7;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_17;
    QRadioButton *radioButtonmale;
    QRadioButton *radioButtonfemale;
    QSpacerItem *horizontalSpacer_18;
    QWidget *widget_9;
    QGridLayout *gridLayout_10;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_16;
    QWidget *widget_10;
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_20;
    QComboBox *comboBox;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(472, 669);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/CNUlibrary.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        gridLayout_6 = new QGridLayout(MainWindow);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget_13 = new QWidget(MainWindow);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));

        gridLayout_6->addWidget(widget_13, 2, 0, 1, 1);

        widget_3 = new QWidget(MainWindow);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_34, 1, 4, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(16);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_33, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        tabWidget = new QTabWidget(widget_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/image/blue.png);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget_2 = new QWidget(tab);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        checkBoxAdmin = new QRadioButton(widget_2);
        checkBoxAdmin->setObjectName(QString::fromUtf8("checkBoxAdmin"));

        gridLayout_3->addWidget(checkBoxAdmin, 0, 1, 1, 1);

        checkBoxTea = new QRadioButton(widget_2);
        checkBoxTea->setObjectName(QString::fromUtf8("checkBoxTea"));

        gridLayout_3->addWidget(checkBoxTea, 0, 2, 1, 1);

        checkBoxStu = new QRadioButton(widget_2);
        checkBoxStu->setObjectName(QString::fromUtf8("checkBoxStu"));

        gridLayout_3->addWidget(checkBoxStu, 0, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 4, 1, 1);


        gridLayout_5->addWidget(widget_2, 3, 0, 1, 1);

        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 0, 2, 1, 1);


        gridLayout_5->addWidget(widget, 4, 0, 1, 1);

        widget_4 = new QWidget(tab);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 4, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 2, 3, 1, 1);

        password = new QLineEdit(widget_4);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(password, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        ID = new QLineEdit(widget_4);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"gridline-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(ID, 2, 2, 1, 1);

        label = new QLabel(widget_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(label, 2, 1, 1, 1);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(label_2, 4, 1, 1, 1);


        gridLayout_5->addWidget(widget_4, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 5, 0, 1, 1);

        widget_15 = new QWidget(tab);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setAutoFillBackground(false);
        widget_15->setStyleSheet(QString::fromUtf8("background-image: url(:/image/slogan.png);\n"
"border-color: rgb(8, 79, 211);"));
        gridLayout_17 = new QGridLayout(widget_15);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(verticalSpacer_2, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget_15, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_13 = new QGridLayout(tab_2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        widget_12 = new QWidget(tab_2);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        gridLayout_15 = new QGridLayout(widget_12);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        label_9 = new QLabel(widget_12);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setPointSize(9);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_15->addWidget(label_9, 0, 1, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_30, 0, 3, 1, 1);

        telphoneNum = new QLineEdit(widget_12);
        telphoneNum->setObjectName(QString::fromUtf8("telphoneNum"));
        QFont font2;
        font2.setPointSize(7);
        telphoneNum->setFont(font2);
        telphoneNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_15->addWidget(telphoneNum, 0, 2, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_29, 0, 0, 1, 1);


        gridLayout_13->addWidget(widget_12, 6, 0, 1, 1);

        widget_5 = new QWidget(tab_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_7 = new QGridLayout(widget_5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_22, 0, 6, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_23, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(pushButton_2, 0, 3, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_25, 0, 2, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_24, 0, 5, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_21, 0, 0, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_26, 0, 4, 1, 1);


        gridLayout_13->addWidget(widget_5, 8, 0, 1, 1);

        widget_14 = new QWidget(tab_2);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout_16 = new QGridLayout(widget_14);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        checkBoxStu_2 = new QRadioButton(widget_14);
        checkBoxStu_2->setObjectName(QString::fromUtf8("checkBoxStu_2"));

        gridLayout_16->addWidget(checkBoxStu_2, 0, 2, 1, 1);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_32, 0, 0, 1, 1);

        checkBoxTea_2 = new QRadioButton(widget_14);
        checkBoxTea_2->setObjectName(QString::fromUtf8("checkBoxTea_2"));

        gridLayout_16->addWidget(checkBoxTea_2, 0, 1, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_31, 0, 3, 1, 1);


        gridLayout_13->addWidget(widget_14, 7, 0, 1, 1);

        widget_8 = new QWidget(tab_2);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_9 = new QGridLayout(widget_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_5 = new QLabel(widget_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_9->addWidget(label_5, 0, 1, 1, 1);

        password_2 = new QLineEdit(widget_8);
        password_2->setObjectName(QString::fromUtf8("password_2"));
        password_2->setFont(font2);
        password_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        password_2->setEchoMode(QLineEdit::Password);

        gridLayout_9->addWidget(password_2, 0, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_13, 0, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_14, 0, 3, 1, 1);


        gridLayout_13->addWidget(widget_8, 1, 0, 1, 1);

        widget_6 = new QWidget(tab_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_8 = new QGridLayout(widget_6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_8->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_11, 0, 0, 1, 1);

        ID_2 = new QLineEdit(widget_6);
        ID_2->setObjectName(QString::fromUtf8("ID_2"));
        ID_2->setFont(font2);
        ID_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_8->addWidget(ID_2, 0, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_12, 0, 3, 1, 1);


        gridLayout_13->addWidget(widget_6, 0, 0, 1, 1);

        widget_11 = new QWidget(tab_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        gridLayout_14 = new QGridLayout(widget_11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_27, 0, 0, 1, 1);

        label_8 = new QLabel(widget_11);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(label_8, 0, 1, 1, 1);

        classID = new QLineEdit(widget_11);
        classID->setObjectName(QString::fromUtf8("classID"));
        classID->setFont(font2);
        classID->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(classID, 0, 2, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_28, 0, 3, 1, 1);


        gridLayout_13->addWidget(widget_11, 5, 0, 1, 1);

        widget_7 = new QWidget(tab_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout_11 = new QGridLayout(widget_7);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_17, 0, 0, 1, 1);

        radioButtonmale = new QRadioButton(widget_7);
        radioButtonmale->setObjectName(QString::fromUtf8("radioButtonmale"));
        radioButtonmale->setFont(font2);
        radioButtonmale->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        radioButtonmale->setAutoRepeatDelay(300);

        gridLayout_11->addWidget(radioButtonmale, 0, 1, 1, 1);

        radioButtonfemale = new QRadioButton(widget_7);
        radioButtonfemale->setObjectName(QString::fromUtf8("radioButtonfemale"));
        radioButtonfemale->setFont(font2);
        radioButtonfemale->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_11->addWidget(radioButtonfemale, 0, 2, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_18, 0, 3, 1, 1);


        gridLayout_13->addWidget(widget_7, 3, 0, 1, 1);

        widget_9 = new QWidget(tab_2);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        gridLayout_10 = new QGridLayout(widget_9);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        name = new QLineEdit(widget_9);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font2);
        name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(name, 0, 2, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_15, 0, 0, 1, 1);

        label_6 = new QLabel(widget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(label_6, 0, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_16, 0, 3, 1, 1);


        gridLayout_13->addWidget(widget_9, 2, 0, 1, 1);

        widget_10 = new QWidget(tab_2);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        gridLayout_12 = new QGridLayout(widget_10);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_19, 0, 0, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_20, 0, 3, 1, 1);

        comboBox = new QComboBox(widget_10);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font1);

        gridLayout_12->addWidget(comboBox, 0, 2, 1, 1);

        label_7 = new QLabel(widget_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_7, 0, 1, 1, 1);


        gridLayout_13->addWidget(widget_10, 4, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 1, 1, 3);


        gridLayout_6->addWidget(widget_3, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 1, 0, 1, 1);


        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\347\225\214\351\235\242", nullptr));
        checkBoxAdmin->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        checkBoxTea->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\270\210", nullptr));
        checkBoxStu->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", " \347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", " \347\231\273\345\275\225", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        checkBoxStu_2->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237", nullptr));
        checkBoxTea_2->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\270\210", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201    ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267    ", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247    ", nullptr));
        radioButtonmale->setText(QCoreApplication::translate("MainWindow", "\347\224\267                ", nullptr));
        radioButtonfemale->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215    ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\255\246\351\231\242  ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
