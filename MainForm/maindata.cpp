#include "maindata.h"

MainData::MainData()
{
}

MainData *MainData::instance()
{
    static MainData *shared = nullptr;
    if(shared == nullptr)
    {
        shared = new MainData;
    }

    return shared;
}

QVector<DBTable *> &MainData::getTables()
{
    return tables;
}
