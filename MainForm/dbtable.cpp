#include "dbtable.h"

#include "maindata.h"

DBTable::DBTable()
{
    static int globalIdTable = 0;

    idTable = globalIdTable++;
}

void DBTable::deleteForeignTables(IdTable _idTable)
{
    for(int i = 0;i<foreignTables.size();i++)
    {
        if(foreignTables[i]==_idTable)
        {
            //удалить из вектора запись
            foreignTables.remove(i);
        }
    }
}

void DBTable::addAttribute(DBAttribute &attribute)
{
    attributes.push_back(attribute);
}

void DBTable::addName(QString &name)
{
    this->name = name;
}

void DBTable::addConnection(DBTable &table)
{
    foreignTables.push_back(table.getIdTable());
    foreignTables.erase( std::unique(foreignTables.begin(), foreignTables.end() ), foreignTables.end() );
}
