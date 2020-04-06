/********************************************************************************
** Form generated from reading UI file 'Tema.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMA_H
#define UI_TEMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemaClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listAllMovies;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *moviesLabel;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *UpdateButton;
    QPushButton *FilterButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_7;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWishlist;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *playButton;
    QPushButton *nextButton;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *wishlistLabel;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *titleLabel;
    QLabel *genreLabel;
    QLabel *yearLabel;
    QLabel *likesLabel;
    QLabel *sourceLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *titleLine;
    QLineEdit *genreLine;
    QLineEdit *yearLine;
    QLineEdit *likesLine;
    QLineEdit *sourceLine;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TemaClass)
    {
        if (TemaClass->objectName().isEmpty())
            TemaClass->setObjectName(QString::fromUtf8("TemaClass"));
        TemaClass->resize(1022, 788);
        centralWidget = new QWidget(TemaClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 60, 461, 341));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listAllMovies = new QListWidget(horizontalLayoutWidget);
        listAllMovies->setObjectName(QString::fromUtf8("listAllMovies"));

        horizontalLayout->addWidget(listAllMovies);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 10, 51, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        moviesLabel = new QLabel(verticalLayoutWidget);
        moviesLabel->setObjectName(QString::fromUtf8("moviesLabel"));

        verticalLayout->addWidget(moviesLabel);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 610, 441, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(horizontalLayoutWidget_3);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_3->addWidget(addButton);

        deleteButton = new QPushButton(horizontalLayoutWidget_3);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout_3->addWidget(deleteButton);

        UpdateButton = new QPushButton(horizontalLayoutWidget_3);
        UpdateButton->setObjectName(QString::fromUtf8("UpdateButton"));

        horizontalLayout_3->addWidget(UpdateButton);

        FilterButton = new QPushButton(horizontalLayoutWidget_3);
        FilterButton->setObjectName(QString::fromUtf8("FilterButton"));

        horizontalLayout_3->addWidget(FilterButton);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(509, 320, 77, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(verticalLayoutWidget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_3->addWidget(pushButton_7);

        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(600, 60, 391, 551));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        listWishlist = new QListWidget(horizontalLayoutWidget_4);
        listWishlist->setObjectName(QString::fromUtf8("listWishlist"));

        horizontalLayout_4->addWidget(listWishlist);

        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(679, 620, 239, 61));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        playButton = new QPushButton(horizontalLayoutWidget_5);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        horizontalLayout_5->addWidget(playButton);

        nextButton = new QPushButton(horizontalLayoutWidget_5);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout_5->addWidget(nextButton);

        pushButton = new QPushButton(horizontalLayoutWidget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(750, 10, 71, 31));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        wishlistLabel = new QLabel(verticalLayoutWidget_4);
        wishlistLabel->setObjectName(QString::fromUtf8("wishlistLabel"));

        verticalLayout_4->addWidget(wishlistLabel);

        verticalLayoutWidget_5 = new QWidget(centralWidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(30, 429, 71, 171));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(verticalLayoutWidget_5);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        verticalLayout_5->addWidget(titleLabel);

        genreLabel = new QLabel(verticalLayoutWidget_5);
        genreLabel->setObjectName(QString::fromUtf8("genreLabel"));

        verticalLayout_5->addWidget(genreLabel);

        yearLabel = new QLabel(verticalLayoutWidget_5);
        yearLabel->setObjectName(QString::fromUtf8("yearLabel"));

        verticalLayout_5->addWidget(yearLabel);

        likesLabel = new QLabel(verticalLayoutWidget_5);
        likesLabel->setObjectName(QString::fromUtf8("likesLabel"));

        verticalLayout_5->addWidget(likesLabel);

        sourceLabel = new QLabel(verticalLayoutWidget_5);
        sourceLabel->setObjectName(QString::fromUtf8("sourceLabel"));

        verticalLayout_5->addWidget(sourceLabel);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(100, 430, 381, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        titleLine = new QLineEdit(verticalLayoutWidget_2);
        titleLine->setObjectName(QString::fromUtf8("titleLine"));

        verticalLayout_2->addWidget(titleLine);

        genreLine = new QLineEdit(verticalLayoutWidget_2);
        genreLine->setObjectName(QString::fromUtf8("genreLine"));

        verticalLayout_2->addWidget(genreLine);

        yearLine = new QLineEdit(verticalLayoutWidget_2);
        yearLine->setObjectName(QString::fromUtf8("yearLine"));

        verticalLayout_2->addWidget(yearLine);

        likesLine = new QLineEdit(verticalLayoutWidget_2);
        likesLine->setObjectName(QString::fromUtf8("likesLine"));

        verticalLayout_2->addWidget(likesLine);

        sourceLine = new QLineEdit(verticalLayoutWidget_2);
        sourceLine->setObjectName(QString::fromUtf8("sourceLine"));

        verticalLayout_2->addWidget(sourceLine);

        TemaClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TemaClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1022, 21));
        TemaClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TemaClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TemaClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TemaClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TemaClass->setStatusBar(statusBar);

        retranslateUi(TemaClass);

        QMetaObject::connectSlotsByName(TemaClass);
    } // setupUi

    void retranslateUi(QMainWindow *TemaClass)
    {
        TemaClass->setWindowTitle(QApplication::translate("TemaClass", "Tema", nullptr));
        moviesLabel->setText(QApplication::translate("TemaClass", "All Movies", nullptr));
        addButton->setText(QApplication::translate("TemaClass", "Add", nullptr));
        deleteButton->setText(QApplication::translate("TemaClass", "Delete", nullptr));
        UpdateButton->setText(QApplication::translate("TemaClass", "Update", nullptr));
        FilterButton->setText(QApplication::translate("TemaClass", "Filter", nullptr));
        pushButton_7->setText(QApplication::translate("TemaClass", ">", nullptr));
        playButton->setText(QApplication::translate("TemaClass", "Play", nullptr));
        nextButton->setText(QApplication::translate("TemaClass", "Delete", nullptr));
        pushButton->setText(QApplication::translate("TemaClass", "Show List", nullptr));
        wishlistLabel->setText(QApplication::translate("TemaClass", "Wishlist", nullptr));
        titleLabel->setText(QApplication::translate("TemaClass", "Title:", nullptr));
        genreLabel->setText(QApplication::translate("TemaClass", "Genre:", nullptr));
        yearLabel->setText(QApplication::translate("TemaClass", "Year:", nullptr));
        likesLabel->setText(QApplication::translate("TemaClass", "Likes", nullptr));
        sourceLabel->setText(QApplication::translate("TemaClass", "Source:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemaClass: public Ui_TemaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMA_H
