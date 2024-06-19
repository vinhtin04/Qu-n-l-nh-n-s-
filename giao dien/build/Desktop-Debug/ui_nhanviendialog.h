/********************************************************************************
** Form generated from reading UI file 'nhanviendialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NHANVIENDIALOG_H
#define UI_NHANVIENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NhanVienDialog
{
public:
    QTabWidget *tabNhanVien;
    QWidget *tab;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_Ten;
    QLabel *label_Que;
    QLabel *label_Sinh;
    QLabel *label_DanToc;
    QLabel *label_Mail;
    QLabel *label_VTCT;
    QLabel *label_MSNV;
    QWidget *tab_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QWidget *tab_3;
    QLabel *label_9;
    QLabel *label;
    QPushButton *btnSendLeaveRequest;
    QLineEdit *employeeIdLineEdit;
    QPlainTextEdit *reasonTextEdit;

    void setupUi(QDialog *NhanVienDialog)
    {
        if (NhanVienDialog->objectName().isEmpty())
            NhanVienDialog->setObjectName("NhanVienDialog");
        NhanVienDialog->resize(697, 318);
        tabNhanVien = new QTabWidget(NhanVienDialog);
        tabNhanVien->setObjectName("tabNhanVien");
        tabNhanVien->setGeometry(QRect(0, 0, 571, 321));
        tabNhanVien->setTabsClosable(true);
        tabNhanVien->setMovable(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 37, 12));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 41, 16));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 60, 101, 16));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 80, 51, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 110, 31, 16));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 130, 91, 16));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 160, 37, 12));
        label_Ten = new QLabel(tab);
        label_Ten->setObjectName("label_Ten");
        label_Ten->setGeometry(QRect(60, 20, 131, 16));
        label_Que = new QLabel(tab);
        label_Que->setObjectName("label_Que");
        label_Que->setGeometry(QRect(60, 40, 151, 16));
        label_Sinh = new QLabel(tab);
        label_Sinh->setObjectName("label_Sinh");
        label_Sinh->setGeometry(QRect(130, 60, 141, 16));
        label_DanToc = new QLabel(tab);
        label_DanToc->setObjectName("label_DanToc");
        label_DanToc->setGeometry(QRect(70, 80, 161, 16));
        label_Mail = new QLabel(tab);
        label_Mail->setObjectName("label_Mail");
        label_Mail->setGeometry(QRect(70, 110, 201, 16));
        label_VTCT = new QLabel(tab);
        label_VTCT->setObjectName("label_VTCT");
        label_VTCT->setGeometry(QRect(120, 130, 131, 16));
        label_MSNV = new QLabel(tab);
        label_MSNV->setObjectName("label_MSNV");
        label_MSNV->setGeometry(QRect(60, 160, 171, 16));
        tabNhanVien->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 10, 661, 221));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 240, 161, 41));
        tabNhanVien->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tab_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_9 = new QLabel(tab_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(9, 9, 69, 16));
        label = new QLabel(tab_3);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 61, 38, 16));
        btnSendLeaveRequest = new QPushButton(tab_3);
        btnSendLeaveRequest->setObjectName("btnSendLeaveRequest");
        btnSendLeaveRequest->setGeometry(QRect(9, 228, 80, 24));
        employeeIdLineEdit = new QLineEdit(tab_3);
        employeeIdLineEdit->setObjectName("employeeIdLineEdit");
        employeeIdLineEdit->setGeometry(QRect(9, 31, 108, 24));
        reasonTextEdit = new QPlainTextEdit(tab_3);
        reasonTextEdit->setObjectName("reasonTextEdit");
        reasonTextEdit->setGeometry(QRect(9, 83, 549, 139));
        tabNhanVien->addTab(tab_3, QString());

        retranslateUi(NhanVienDialog);

        tabNhanVien->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(NhanVienDialog);
    } // setupUi

    void retranslateUi(QDialog *NhanVienDialog)
    {
        NhanVienDialog->setWindowTitle(QCoreApplication::translate("NhanVienDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("NhanVienDialog", "T\303\252n", nullptr));
        label_3->setText(QCoreApplication::translate("NhanVienDialog", "Qu\303\252", nullptr));
        label_4->setText(QCoreApplication::translate("NhanVienDialog", "Ng\303\240y/th\303\241ng/n\304\203m sinh", nullptr));
        label_5->setText(QCoreApplication::translate("NhanVienDialog", "D\303\242n t\341\273\231c", nullptr));
        label_6->setText(QCoreApplication::translate("NhanVienDialog", "Email", nullptr));
        label_7->setText(QCoreApplication::translate("NhanVienDialog", "V\341\273\213 tr\303\255 c\303\264ng vi\341\273\207c", nullptr));
        label_8->setText(QCoreApplication::translate("NhanVienDialog", "MSNV", nullptr));
        label_Ten->setText(QCoreApplication::translate("NhanVienDialog", "TextLabel", nullptr));
        label_Que->setText(QCoreApplication::translate("NhanVienDialog", "TextLabel", nullptr));
        label_Sinh->setText(QCoreApplication::translate("NhanVienDialog", "TextLabel", nullptr));
        label_DanToc->setText(QCoreApplication::translate("NhanVienDialog", "TextLabel", nullptr));
        label_Mail->setText(QCoreApplication::translate("NhanVienDialog", "TextLabel", nullptr));
        label_VTCT->setText(QCoreApplication::translate("NhanVienDialog", "TextLabel", nullptr));
        label_MSNV->setText(QCoreApplication::translate("NhanVienDialog", "TextLabel", nullptr));
        tabNhanVien->setTabText(tabNhanVien->indexOf(tab), QCoreApplication::translate("NhanVienDialog", "Th\303\264ng tin", nullptr));
        pushButton->setText(QCoreApplication::translate("NhanVienDialog", "Update th\303\264ng b\303\241o", nullptr));
        tabNhanVien->setTabText(tabNhanVien->indexOf(tab_2), QCoreApplication::translate("NhanVienDialog", "Th\303\264ng b\303\241o", nullptr));
        label_9->setText(QCoreApplication::translate("NhanVienDialog", "Employee ID:", nullptr));
        label->setText(QCoreApplication::translate("NhanVienDialog", "Reason", nullptr));
        btnSendLeaveRequest->setText(QCoreApplication::translate("NhanVienDialog", "G\341\273\255i y\303\252u c\341\272\247u", nullptr));
        tabNhanVien->setTabText(tabNhanVien->indexOf(tab_3), QCoreApplication::translate("NhanVienDialog", "Request", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NhanVienDialog: public Ui_NhanVienDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NHANVIENDIALOG_H
