#include "nhansu.h"
#include <QString>

NhanSu::NhanSu(QObject *parent)
    : QObject{parent}
{}



void NhanSu::Set(QString name, QString que, int d, int m, int y, QString email, int msnv, QString vtcv, int ml, int ds, int ms, int ys, QString dt, QString hv, QString da, QString qh, QString tt, int l)
{
    this->name = name;
    this->que = que;
    this->d = d;
    this->m = m;
    this->y = y;
    this->email = email;
    this->msnv = 20240000 + msnv;
    this->vtcv = vtcv;
    this->ml = ml;
    this->ds = ds;
    this->ms = ms;
    this->ys = ys;
    this->dt = dt;
    this->hv = hv;
    this->da = da;
    this->qh = qh;
    this->tt = tt;
    this->l = l;
}

void NhanSu::setduan(QString da)
{
 this->da=da;
}

void NhanSu::setl(int l)
{
this->l = l;
}

int NhanSu::getl()
{
 return l;
}

void NhanSu::settt(QString tt)
{
 this->tt = tt;
}

void NhanSu::setname(QString name)
{
this->name = name;
}

void NhanSu::setqh(QString qh)
{
 this->qh = qh;
}

void NhanSu::setml(int ml)
{
 this->ml = ml;
}

void NhanSu::setmsnv(int msnv)
{
this->msnv = 20240000 + msnv;
}

QString NhanSu::getqh()
{
 return qh;
}

QString NhanSu::getname()
{
return name;
}

QString NhanSu::getque()
{
return que;
}

QString NhanSu::getemail()
{
return email;
}

QString NhanSu::getvtcv()
{
return vtcv;
}

QString NhanSu::getdt()
{
return dt;
}

QString NhanSu::gethv()
{
return hv;
}

QString NhanSu::getda()
{
return da;
}

int NhanSu::getd()
{
return d;
}

int NhanSu::getm()
{
return m;
}

int NhanSu::gety()
{
return y;
}

int NhanSu::getmsnv()
{
return msnv;
}

int NhanSu::getml()
{
return ml;
}

int NhanSu::getds()
{
    return ds;
}

int NhanSu::getms()
{
     return ms;
}

int NhanSu::getys()
{
    return ys;
}

QString NhanSu::gettt()
{
    return tt;
}
