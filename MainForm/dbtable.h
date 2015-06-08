#ifndef DBTABLE_H
#define DBTABLE_H

#include <QObject>
#include <QString>
#include <QVector>

#include "dbattribute.h"


class DBTable
{
public:
    DBTable();

    QVector <DBAttribute> &getAttributes() { return attributes; }
    QString &getName() { return name; }


    void addAttribute(DBAttribute &attribute);
    void addName(QString &name);

private:
    QString name;
    QVector <DBAttribute> attributes;

signals:

public slots:

};

#endif // DBTABLE_H
