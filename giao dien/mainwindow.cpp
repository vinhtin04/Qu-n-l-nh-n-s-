#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nhansu.h"
#include"quanlydialog.h"
#include <QFileInfo>
#include<QMessageBox>
#include <QFile>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    NhanSu arr[2];
    arr[0].Set("Trung", "que", 0, 0, 0, "trung@gmail.com", 0, "giam doc", 10000, 14, 5, 2024, "kinh", "dai hoc", "-", "admin", "-", 5000);
    arr[1].Set("Vinh", "thanh hoa", 17, 8, 2004, "vinhtin04@gmail.com", 1, "thu ki", 10000, 14, 5, 2024, "kinh", "dai hoc", "-", "admin", "-", 4000);


    QFileInfo fileInfo("ThongTinNV.txt");

    if(!fileInfo.exists()){
    QFile fileThongTin("ThongTinNV.txt");
    if (!fileThongTin.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Cannot open file for writing: " << fileThongTin.errorString();
        return;
    }

    QString MSNV="msnv";
    QString Ten="TÊN";
    QString Que= "QUÊ QUÁN";
    QString NgaySinh= "NGÀY";
    QString ThangSinh= "THÁNG";
    QString NamSinh= "NĂM";
    QString VTCT= "VỊ TRÍ CÔNG VIỆC";
    QString DanToc= "DÂN TỘC";
    QString Email= "EMAIL";

    QTextStream out(&fileThongTin);
    out << MSNV.leftJustified(10)<<Ten.leftJustified(20)<<Que.leftJustified(11)<<NgaySinh.leftJustified(8)<<ThangSinh.leftJustified(8)<<NamSinh.leftJustified(8)<<VTCT.leftJustified(21)<<DanToc.leftJustified(11)<<Email.leftJustified(31)<<"\n";
    for(int i=0;i<2;i++){
        out << QString::number( arr[i].getmsnv()).leftJustified(10) << arr[i].getname().leftJustified(20)<<"|"<<arr[i].getque().leftJustified(10)<<"|"<<QString::number(arr[i].getd()).leftJustified(7)<<"|"<<QString::number(arr[i].getm()).leftJustified(7)<<"|"<<QString::number(arr[i].gety()).leftJustified(7)<<"|"<<arr[i].getvtcv().leftJustified(20)<<"|"<<arr[i].getdt().leftJustified(10)<<"|"<<arr[i].getemail().leftJustified(30)<<"\n";
    }
    fileThongTin.close();
    }
    Quan_Ly_Dialog=new QuanLyDialog(this);
    Nhan_Vien_Dialog=new NhanVienDialog(this);
    SendIndex *send_index = new SendIndex(this);
    connect(send_index, &SendIndex::sendNhanSu, Quan_Ly_Dialog, &QuanLyDialog::receiveNhanSu);
    connect(send_index, &SendIndex::sendNhanSu, Nhan_Vien_Dialog, &NhanVienDialog::receiveNhanSu);

    QString TaiKhoan= ui->lineEdit_Login->text();
    QString MatKhau= ui->lineEdit_Pass->text();
    for(int i=0;i<3;i++){
        if(TaiKhoan==arr[i].getname()&& MatKhau==QString::number(arr[i].getys())&& arr[i].getvtcv()=="giam doc"){
            QMessageBox::information(this,"Thong bao","Dang nhap thanh cong");
            hide();
            emit send_index->sendNhanSu(arr[i]);
            Quan_Ly_Dialog->show();
            break;
        }
        if(TaiKhoan=="test"&& MatKhau=="test"){
            QMessageBox::information(this,"Thong bao","Dang nhap thanh cong");
            hide();
            emit send_index->sendNhanSu(arr[0]);
            Quan_Ly_Dialog->show();
            Nhan_Vien_Dialog->show();
            break;
        }
    }
}
