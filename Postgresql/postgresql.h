#ifndef POSTGRESQL_H
#define POSTGRESQL_H

#include "postgresql_global.h"
#include <QString>

class Postgresql : public Postgresql_interface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.devlab.Notifier.Postgresql_interface")
    Q_INTERFACES(Postgresql_interface)

public:
    Postgresql();

    virtual QString getVersion()    { return "1.0"; }
    virtual QString getName()       { return "Postgresql"; }

    ~Postgresql() {}
};

#endif // POSTGRESQL_H
