#ifndef CLSS_H
#define CLSS_H
#include <QString>

class bus
{
public:
    QString name[100];
    QString busnumber[100];
    QString origin[100];
    QString destin[100];
    QString time1[100];
    QString time2[100];
    QString date[100];
};
class book:public bus
{
public:
    QString Qseat[100];
    QString pname[100];
};

#endif // CLSS_H
