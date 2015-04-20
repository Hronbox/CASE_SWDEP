#ifndef SQLITE_GLOBAL_H
#define SQLITE_GLOBAL_H

#include <QtCore/qplugin.h>
#include <QtPlugin>

class Sqlite_interface : public QObject
{
public:
    virtual QString getVersion()    = 0;
    virtual QString getName()       = 0;

    ~Sqlite_interface() {}
};

QT_BEGIN_NAMESPACE

Q_DECLARE_INTERFACE(Sqlite_interface,"Sqlite_interface/Plugin/1.0")

QT_END_NAMESPACE


#endif // SQLITE_GLOBAL_H
