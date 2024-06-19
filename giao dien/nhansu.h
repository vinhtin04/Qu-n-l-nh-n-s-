#ifndef NHANSU_H
#define NHANSU_H

#include <QObject>

class NhanSu : public QObject
{
    Q_OBJECT
private:
    QString name, que, email, vtcv, dt, hv, da, qh, tt;
    int d, m, y, msnv, ml, ds, ms, ys, l;
public:
    explicit NhanSu(QObject *parent = nullptr);
    void Set(QString name, QString que, int d, int m, int y, QString email, int msnv, QString vtcv, int ml, int ds, int ms, int ys, QString dt, QString hv, QString da, QString qh = "nhan vien", QString tt = "-", int l = 0) ;
    void setduan(QString da);
    void setl(int l);
    int getl();
    void settt(QString tt);
    void setname(QString name);
    void setqh(QString qh);
    void setml(int ml);
    void setmsnv(int msnv);
    QString getqh() ;
    QString getname() ;
    QString getque() ;
    QString getemail() ;
    QString getvtcv() ;
    QString getdt() ;
    QString gethv() ;
    QString getda() ;
    int getd() ;
    int getm() ;
    int gety() ;
    int getmsnv();
    int getml() ;
    int getds() ;
    int getms() ;
    int getys() ;
    QString gettt() ;

signals:

};

#endif // NHANSU_H
