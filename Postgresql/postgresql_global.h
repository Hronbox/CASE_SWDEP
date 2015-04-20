#ifndef POSTGRESQL_GLOBAL_H
#define POSTGRESQL_GLOBAL_H

#include <QtCore/qplugin.h>
#include <QtPlugin>

class Postgresql_interface : public QObject
{
public:
    virtual QString getVersion()    = 0;
    virtual QString getName()       = 0;

    ~Postgresql_interface() {}
};

QT_BEGIN_NAMESPACE

Q_DECLARE_INTERFACE(Postgresql_interface,"Postgresql_interface/Plugin/1.0")

QT_END_NAMESPACE

#endif // POSTGRESQL_GLOBAL_H
