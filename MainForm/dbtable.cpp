#include "dbtable.h"

#include "maindata.h"

DBTable::DBTable()
{
    static int globalIdTable = 0;

    idTable = globalIdTable++;
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
