#ifndef DBFOREIGN_H
#define DBFOREIGN_H
#include <QString>

typedef int IdTable;

class DBForeign
{
public:
    DBForeign();

    IdTable foreignTablesId;
    QString typeforeign;
};

#endif // DBFOREIGN_H
