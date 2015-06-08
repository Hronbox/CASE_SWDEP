#include "dbtable.h"

DBTable::DBTable()
{
}

void DBTable::addAttribute(DBAttribute &attribute)
{
    attributes.push_back(attribute);
}

void DBTable::addName(QString &name)
{
    this->name = name;
}
