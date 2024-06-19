#ifndef QUANLYDIALOG_H
#define QUANLYDIALOG_H

#include <QDialog>
#include <QtWidgets>
#include<QFile>
#include "sendindex.h"


namespace Ui {
class QuanLyDialog;
}

class QuanLyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuanLyDialog(QWidget *parent = nullptr);
    ~QuanLyDialog();

    void setRequestDetails(const QString &details);

private:
    Ui::QuanLyDialog *ui;
    void SetUp();
    QLabel *requestLabel;
    QCheckBox *approveCheckBox;
    QPushButton *approveButton;

public slots:
    void receiveNhanSu(NhanSu& nhau_su);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void onApproveButtonClicked();

};

#endif // QUANLYDIALOG_H
