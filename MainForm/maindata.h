#ifndef MAINDATA_H
#define MAINDATA_H

#include "dbtable.h"
#include <QVector>

class MainData
{
public:
    MainData();

    static MainData *instance();
    QVector<DBTable*> &getTables();
private:
    QVector<DBTable*> tables;

};

#endif // MAINDATA_H
