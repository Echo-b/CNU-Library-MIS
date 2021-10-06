/********************************************************************************
** Form generated from reading UI file 'searchbook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBOOK_H
#define UI_SEARCHBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchBook
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_9;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_26;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QLineEdit *ISBN;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *bookName;
    QSpacerItem *horizontalSpacer_16;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *bookWriter;
    QSpacerItem *horizontalSpacer_17;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *bookPress;
    QSpacerItem *horizontalSpacer_18;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *bookType;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_21;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_24;
    QLineEdit *bookPublishDate;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_2;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SearchBook)
    {
        if (SearchBook->objectName().isEmpty())
            SearchBook->setObjectName(QString::fromUtf8("SearchBook"));
        SearchBook->resize(401, 611);
        gridLayout_2 = new QGridLayout(SearchBook);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_9 = new QWidget(SearchBook);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        gridLayout_4 = new QGridLayout(widget_9);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setPointSize(12);
        label_9->setFont(font);

        gridLayout_4->addWidget(label_9, 0, 1, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_25, 0, 0, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_26, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget_9, 0, 0, 1, 1);

        widget_6 = new QWidget(SearchBook);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        ISBN = new QLineEdit(widget_6);
        ISBN->setObjectName(QString::fromUtf8("ISBN"));

        horizontalLayout_6->addWidget(ISBN);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        gridLayout_2->addWidget(widget_6, 1, 0, 1, 2);

        widget = new QWidget(SearchBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bookName = new QLineEdit(widget);
        bookName->setObjectName(QString::fromUtf8("bookName"));

        horizontalLayout->addWidget(bookName);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_16);


        gridLayout_2->addWidget(widget, 2, 0, 1, 2);

        widget_7 = new QWidget(SearchBook);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        bookWriter = new QLineEdit(widget_7);
        bookWriter->setObjectName(QString::fromUtf8("bookWriter"));

        horizontalLayout_7->addWidget(bookWriter);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);


        gridLayout_2->addWidget(widget_7, 3, 0, 1, 2);

        widget_8 = new QWidget(SearchBook);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        bookPress = new QLineEdit(widget_8);
        bookPress->setObjectName(QString::fromUtf8("bookPress"));

        horizontalLayout_8->addWidget(bookPress);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_18);


        gridLayout_2->addWidget(widget_8, 4, 0, 1, 2);

        widget_3 = new QWidget(SearchBook);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        bookType = new QLineEdit(widget_3);
        bookType->setObjectName(QString::fromUtf8("bookType"));

        gridLayout->addWidget(bookType, 0, 3, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 0, 0, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_21, 0, 4, 1, 1);


        gridLayout_2->addWidget(widget_3, 5, 0, 1, 2);

        widget_2 = new QWidget(SearchBook);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_24, 0, 4, 1, 1);

        bookPublishDate = new QLineEdit(widget_2);
        bookPublishDate->setObjectName(QString::fromUtf8("bookPublishDate"));

        gridLayout_3->addWidget(bookPublishDate, 0, 3, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_23, 0, 0, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_22, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 6, 0, 1, 2);

        widget_5 = new QWidget(SearchBook);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_5->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_5->addWidget(pushButton_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_5, 7, 0, 1, 2);


        retranslateUi(SearchBook);

        QMetaObject::connectSlotsByName(SearchBook);
    } // setupUi

    void retranslateUi(QDialog *SearchBook)
    {
        SearchBook->setWindowTitle(QCoreApplication::translate("SearchBook", "\346\237\245\346\211\276\345\233\276\344\271\246", nullptr));
        label_9->setText(QCoreApplication::translate("SearchBook", "\346\237\245\346\211\276\345\233\276\344\271\246\347\225\214\351\235\242", nullptr));
        label_6->setText(QCoreApplication::translate("SearchBook", "\344\271\246\347\261\215\347\274\226\345\217\267      ", nullptr));
        label->setText(QCoreApplication::translate("SearchBook", "\344\271\246\347\261\215\345\220\215\345\255\227      ", nullptr));
        label_7->setText(QCoreApplication::translate("SearchBook", "\344\271\246\347\261\215\344\275\234\350\200\205      ", nullptr));
        label_8->setText(QCoreApplication::translate("SearchBook", "\344\271\246\347\261\215\345\207\272\347\211\210\347\244\276    ", nullptr));
        label_3->setText(QCoreApplication::translate("SearchBook", "\344\271\246\347\261\215\345\210\206\347\261\273      ", nullptr));
        label_2->setText(QCoreApplication::translate("SearchBook", "\344\271\246\347\261\215\345\207\272\347\211\210\346\227\245\346\234\237  ", nullptr));
        pushButton->setText(QCoreApplication::translate("SearchBook", "\346\237\245\346\211\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SearchBook", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchBook: public Ui_SearchBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBOOK_H
