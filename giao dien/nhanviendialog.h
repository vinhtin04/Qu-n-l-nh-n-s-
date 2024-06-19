#ifndef NHANVIENDIALOG_H
#define NHANVIENDIALOG_H

#include <QDialog>
#include <QtWidgets>
#include<QFile>
#include "sendindex.h"



namespace Ui {
class NhanVienDialog;
}

class NhanVienDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NhanVienDialog(QWidget *parent = nullptr);
    ~NhanVienDialog();

public slots:
    void receiveNhanSu(NhanSu& nhau_su);
    void on_btnSendLeaveRequest_clicked();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NhanVienDialog *ui;
    bool requestSent;
    void SetUp();
};

#endif // NHANVIENDIALOG_H
