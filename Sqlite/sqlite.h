#ifndef SQLITE_H
#define SQLITE_H

#include "sqlite_global.h"
#include <QString>

class Sqlite : public Sqlite_interface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.devlab.Notifier.Sqlite_interface")
    Q_INTERFACES(Sqlite_interface)

public:
    Sqlite();

    virtual QString getVersion()    { return "1.0"; }
    virtual QString getName()       { return "Sqlite"; }

    ~Sqlite() {}
};

#endif // SQLITE_H
