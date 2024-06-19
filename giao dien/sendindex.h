#ifndef SENDINDEX_H
#define SENDINDEX_H

#include <QObject>
#include"nhansu.h"

class SendIndex : public QObject
{
    Q_OBJECT
public:
    explicit SendIndex(QObject *parent = nullptr);

signals:
    void sendNhanSu(NhanSu& nhau_su);
};

#endif // SENDINDEX_H
