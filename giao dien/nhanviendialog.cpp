#include "nhanviendialog.h"
#include "ui_nhanviendialog.h"
#include <QDebug>
#include <QFile>
#include <QApplication>
#include "quanlydialog.h"
#include <QMessageBox>
#include <QTextStream>



NhanVienDialog::NhanVienDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NhanVienDialog),
    requestSent(false)
{
    ui->setupUi(this);
    ui->tabNhanVien->setTabText(ui->tabNhanVien->indexOf(ui->tab), "Thông tin");
    ui->tabNhanVien->setTabText(ui->tabNhanVien->indexOf(ui->tab_2), "Thông báo");
    ui->tabNhanVien->setTabText(ui->tabNhanVien->indexOf(ui->tab_3), "Request");
    connect(ui->btnSendLeaveRequest, &QPushButton::clicked, this, &NhanVienDialog::on_btnSendLeaveRequest_clicked);
}

NhanVienDialog::~NhanVienDialog()
{
    delete ui;
}

void NhanVienDialog::receiveNhanSu(NhanSu& nhan_su)
{
    ui->label_Ten->setText(nhan_su.getname());
    ui->label_DanToc->setText(nhan_su.getdt());
    ui->label_Mail->setText(nhan_su.getemail());
    ui->label_Que->setText(nhan_su.getque());
    ui->label_VTCT->setText(nhan_su.getvtcv());
    QString NgayThangNamSinh= QString::number(nhan_su.getd());NgayThangNamSinh.append("/");NgayThangNamSinh.append(QString::number(nhan_su.getm()));NgayThangNamSinh.append("/");NgayThangNamSinh.append(QString::number(nhan_su.gety()));
    ui->label_Sinh->setText(NgayThangNamSinh);
    ui->label_MSNV->setText(QString::number(nhan_su.getmsnv()));
}



void NhanVienDialog::on_pushButton_clicked()
{
    QFile file("ThongBao.txt");
    if (!file.open(QIODevice::ReadOnly  | QIODevice::Text)) {
        qDebug() << "Error opening file:" << file.errorString();
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
}

void NhanVienDialog::on_btnSendLeaveRequest_clicked()
{
    qDebug() << "on_btnSendLeaveRequest_clicked called";
    {
        if (requestSent) {
            qDebug() << "Da gui";
            return;
        }
    requestSent = true;
    QString employeeId = ui->employeeIdLineEdit->text();
    QString reason = ui->reasonTextEdit->toPlainText();

    if (employeeId.isEmpty() || reason.isEmpty()) {
        QMessageBox::warning(this, "Thông tin trống", "Hãy nhập lý do");
        requestSent = false;
        return;
    }

    QFile file("leave_requests.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << employeeId << "," << reason << "\n";
        file.close();
        QMessageBox::information(this, "Đã gửi", "Yêu cầu của bạn đã được gửi");
        qDebug() << "Information: Yêu cầu của bạn đã được gửi";

        QuanLyDialog dialog(this);
        QString requestDetails = QStringLiteral("Mã nhân viên: %1\nLý do: %2").arg(employeeId, reason);
        dialog.setRequestDetails(requestDetails);
        if (dialog.exec() == QDialog::Accepted) {
            QMessageBox::information(this, "Đã phê duyệt", "Yêu cầu đã được phê duyệt");
            qDebug() << "Information: Yêu cầu đã được phê duyệt";
        } else {
            QMessageBox::information(this, "Từ chối", "Yêu cầu đã bị từ chối");
            qDebug() << "Information: Yêu cầu đã bị từ chối";
        }
    } else {
        QMessageBox::warning(this, "Lỗi", "Không thể mở file.");
        qDebug() << "Warning: Không thể mở file.";
    }
    requestSent = false;
}
}


