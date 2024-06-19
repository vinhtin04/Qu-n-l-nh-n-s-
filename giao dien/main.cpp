#include "mainwindow.h"
#include <QApplication>
#include <QFile>




/*bool write(QString filename)
{
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
    {
        qInfo() << file.errorString();
        return false;
    }

    QDataStream stream(&file);

    int age = 45;
    QString name = "Bucu";
    double weight = 185.06;
    int mk = 12345;

    int Age = 69;
    QString Name = "duma";
    double Weight = 69;
    int MK=54321;

    stream << age << name << weight<<mk<<"\n";
    stream << Age << Name << Weight<<MK;

    if(!file.flush())
    {
        qInfo() << file.errorString();
        file.close();
        return false;
    }

    qInfo() << "Closing file";

    file.close();

    return true;
}

/*bool read(QString filename){
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        qInfo() << file.errorString();
        return false;
    }
    QDataStream stream(&file);
    Person arr[2];
    for(int i=0;i<2;i++){
    stream >> arr[i].age;
    stream >> arr[i].name;
    stream >> arr[i].weight;
    stream >> arr[i].MK;
    }

    file.close();

    for(int i=0;i<2;i++){
    qInfo() << "Name" << arr[i].name;
    qInfo() << "Age" << arr[i].age;
    qInfo() << "Weight" << arr[i].weight;
    }
//return true;
}*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


  //  QString filename = "test.txt";

    //write(filename); //read(filename);
    MainWindow w;
    w.show();
    return a.exec();
}
