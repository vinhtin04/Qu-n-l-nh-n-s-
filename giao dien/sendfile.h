#ifndef SENDFILE_H
#define SENDFILE_H

#include <QObject>
#include<QFile>

class SendFile : public QObject
{
    Q_OBJECT
public:
    explicit SendFile(QObject *parent = nullptr);

signals:
    void sendFile(QFile& File);
};

#endif // SENDFILE_H
