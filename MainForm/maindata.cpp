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
    return MainData::instance()->tables;
}

DBTable *MainData::getTableById(IdTable idTable)
{
    QVector<DBTable*> &tables = MainData::getTables();

    for(int i=0;i<tables.size();i++)
    {
        if(tables[i]->getIdTable() == idTable)
        {
            return tables[i];
        }
    }

    return NULL;
}

DBTable *MainData::getTableByName(const QString &name)
{
    QVector<DBTable*> &tables = MainData::getTables();

    for(int i=0;i<tables.size();i++)
    {
        if(tables[i]->getName() == name)
        {
            return tables[i];
        }
    }

    return NULL;
}
