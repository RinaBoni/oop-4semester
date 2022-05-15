/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *delete_Button;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(297, 291);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        delete_Button = new QPushButton(centralwidget);
        delete_Button->setObjectName(QString::fromUtf8("delete_Button"));
        delete_Button->setGeometry(QRect(100, 220, 80, 21));
        QFont font;
        font.setPointSize(12);
        delete_Button->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 13, 262, 201));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Button_1 = new QPushButton(widget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));

        verticalLayout->addWidget(Button_1);

        Button_2 = new QPushButton(widget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));

        verticalLayout->addWidget(Button_2);

        Button_3 = new QPushButton(widget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));

        verticalLayout->addWidget(Button_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Button_4 = new QPushButton(widget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));

        verticalLayout_2->addWidget(Button_4);

        Button_5 = new QPushButton(widget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));

        verticalLayout_2->addWidget(Button_5);

        Button_6 = new QPushButton(widget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));

        verticalLayout_2->addWidget(Button_6);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Button_7 = new QPushButton(widget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));

        verticalLayout_3->addWidget(Button_7);

        Button_8 = new QPushButton(widget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));

        verticalLayout_3->addWidget(Button_8);

        Button_9 = new QPushButton(widget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));

        verticalLayout_3->addWidget(Button_9);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 297, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        delete_Button->setText(QCoreApplication::translate("MainWindow", "\320\276\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\321\207\320\270\321\201\320\273\320\260</span></p></body></html>", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
