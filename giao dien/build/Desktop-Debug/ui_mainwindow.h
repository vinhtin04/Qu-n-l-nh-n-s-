/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Pass;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu_ng_nh_p;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(397, 263);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 10, 261, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_Login = new QLineEdit(layoutWidget);
        lineEdit_Login->setObjectName("lineEdit_Login");

        horizontalLayout->addWidget(lineEdit_Login);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Pass = new QLineEdit(layoutWidget);
        lineEdit_Pass->setObjectName("lineEdit_Pass");

        horizontalLayout_2->addWidget(lineEdit_Pass);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 140, 111, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 397, 17));
        menu_ng_nh_p = new QMenu(menubar);
        menu_ng_nh_p->setObjectName("menu_ng_nh_p");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_ng_nh_p->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "T\303\240i kho\341\272\243n", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "M\341\272\255t kh\341\272\251u", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", nullptr));
        menu_ng_nh_p->setTitle(QCoreApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
