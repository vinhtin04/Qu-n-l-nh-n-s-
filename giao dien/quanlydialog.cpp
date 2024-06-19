#include "quanlydialog.h"
#include "ui_quanlydialog.h"
#include <QDebug>
#include <QFile>
#include "nhansu.h"
#include <QApplication>
#include <QTime>
#include <QDate>
#include <QDataStream>

QuanLyDialog::QuanLyDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QuanLyDialog)
{
    ui->setupUi(this);
    QVBoxLayout *layout = new QVBoxLayout(this);

    connect(ui->approveButton, &QPushButton::clicked, this, &QuanLyDialog::onApproveButtonClicked);
}


QuanLyDialog::~QuanLyDialog()
{
    delete ui;
}

void QuanLyDialog::SetUp()
{
    QFile fileTB("ThongBao.txt");
    if (!fileTB.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error opening file:" << fileTB.errorString();
        return;
    }
    QTextStream inTB(&fileTB);
    QString textTB = inTB.readAll();
    ui->plainTextEdit_2->setPlainText(textTB);

    QFile fileNV("ThongTinNV.txt");
    if (!fileNV.open(QIODevice::ReadOnly  | QIODevice::Text)) {
        qDebug() << "Error opening file:" << fileNV.errorString();
        return;
    }
    QTextStream inNV(&fileNV);
    QString textNV = inNV.readAll();
    ui->plainTextEdit_3->setPlainText(textNV);
}

void QuanLyDialog::receiveNhanSu(NhanSu& nhan_su)
{
    SetUp();
   ui->label_Ten2->setText(nhan_su.getname());
    ui->label_DanToc->setText(nhan_su.getdt());
   ui->label_Mail->setText(nhan_su.getemail());
    ui->label_Que->setText(nhan_su.getque());
   ui->label_VTCT->setText(nhan_su.getvtcv());
    ui->label_MSNV->setText(QString::number(nhan_su.getmsnv()));

    QString NgayThangNamSinh= QString::number(nhan_su.getd());NgayThangNamSinh.append("/");NgayThangNamSinh.append(QString::number(nhan_su.getm()));NgayThangNamSinh.append("/");NgayThangNamSinh.append(QString::number(nhan_su.gety()));
   ui->label_Sinh->setText(NgayThangNamSinh);
}

void QuanLyDialog::on_pushButton_clicked(){
    QString Ten= ui->lineEdit_Ten->text();
    QString Que= ui->lineEdit_Que->text();
    QString Ngay= ui->lineEdit_Ngay->text();
    QString Thang= ui->lineEdit_Thang->text();
    QString Nam= ui->lineEdit_Nam->text();
    QString VTCT=ui->lineEdit_VTCT->text();
    QString DanToc= ui->lineEdit_DanToc->text();
    QString Email= ui->lineEdit_Mail->text();
    QString MSNV= ui->lineEdit->text();

    QFile fileThongTin("ThongTinNV.txt");
    if (!fileThongTin.open(QIODevice::Append | QIODevice::Text)) {
        qWarning() << "Error opening file: " << fileThongTin.errorString();
        return;
    }
    QTextStream out(&fileThongTin);
    out << MSNV.leftJustified(10)<< Ten.leftJustified(20)<<"|"<<Que.leftJustified(10)<<"|"<<Ngay.leftJustified(7)<<"|"<<Thang.leftJustified(7)<<"|"<<Nam.leftJustified(7)<<"|"<<VTCT.leftJustified(20)<<"|"<<DanToc.leftJustified(10)<<"|"<<Email.leftJustified(30)<<"\n";
    fileThongTin.close();
    QMessageBox::information(this,"Thong bao","Nhap thanh cong");

}


void QuanLyDialog::on_pushButton_2_clicked()
{
    QFile fileTB("ThongBao.txt");
    if (!fileTB.open(QIODevice::Append | QIODevice::Text)) {
        qWarning() << "Error opening file: " << fileTB.errorString();
        return;
    }
    QTextStream out(&fileTB);

    out<<"\n";
    for(int i=0;i<50;i++){
        out <<"-";
    }
    out<<"\n";
    QTime currentTime = QTime::currentTime();
    int hour = currentTime.hour();
    int min = currentTime.minute();
    int sec = currentTime.second();

    QDate today = QDate::currentDate();
    QString format = "yyyy-MM-dd";  // Example format (change as needed)
    QString dateString = today.toString(format);
    out << dateString<<","<<QString::number(hour)<<":"<<QString::number(min)<<":"<<QString::number(sec)<<"\n"<<"Thông báo:\n";

    QString text= ui->plainTextEdit->toPlainText();
    out << text,
    fileTB.close();
    QMessageBox::information(this,"Thong bao","Nhap thanh cong");

}

void QuanLyDialog::on_pushButton_3_clicked()
{
    QFile file("ThongBao.txt");
    if (!file.open(QIODevice::ReadOnly  | QIODevice::Text)) {
        qDebug() << "Error opening file:" << file.errorString();
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit_2->setPlainText(text);
}


void QuanLyDialog::on_pushButton_4_clicked()
{
    QFile file("ThongTinNV.txt");
    if (!file.open(QIODevice::ReadOnly  | QIODevice::Text)) {
        qDebug() << "Error opening file:" << file.errorString();
        return;
    }
    QTextStream inNV(&file);
    QString textNV = inNV.readAll();
    ui->plainTextEdit_3->setPlainText(textNV);
}

void QuanLyDialog::setRequestDetails(const QString &details)
{
    ui->requestLabel->setText(details);
}

void QuanLyDialog::onApproveButtonClicked()
{
    if (ui->approveCheckBox->isChecked()) {
        accept();
    } else {
        reject();
    }
}
