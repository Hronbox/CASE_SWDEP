#ifndef SQLITE_H
#define SQLITE_H

#include <dbplugininterface.h>
#include <QString>

class Sqlite : public DBPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.devlab.Notifier.DBPluginInterface")
    Q_INTERFACES(DBPluginInterface)

public:
    Sqlite();

    QString getVersion()    { return "1.0"; }
    QString getName()       { return "Sqlite"; }
    QString getCreateScript(QVector<DBTable*> &tables);

    ~Sqlite() {}
};

#endif // SQLITE_H
