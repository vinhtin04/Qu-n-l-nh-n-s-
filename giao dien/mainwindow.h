#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include"nhanviendialog.h"
#include"quanlydialog.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked(); 

private:
    Ui::MainWindow *ui;
    QuanLyDialog *Quan_Ly_Dialog;
    NhanVienDialog *Nhan_Vien_Dialog;

};
#endif // MAINWINDOW_H
