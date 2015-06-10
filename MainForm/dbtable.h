#ifndef DBTABLE_H
#define DBTABLE_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QStringList>

#include "dbattribute.h"

typedef int IdTable;

class DBTable
{
public:
    DBTable();

    QVector <DBAttribute> &getAttributes() { return attributes; }
    QString &getName() { return name; }
    IdTable getIdTable() { return idTable; }
    void setIdTable(IdTable _idTable) { idTable = _idTable; }
    QVector <IdTable> &getForeignTables() { return foreignTables; }

    void deleteForeignTables(IdTable _idTable);

    void addAttribute(DBAttribute &attribute);
    void addName(QString &name);
    void addConnection(DBTable &table);

private:
    IdTable idTable;

    QString name;
    QVector <DBAttribute> attributes;
    QVector <IdTable> foreignTables;

signals:

public slots:

};

#endif // DBTABLE_H
