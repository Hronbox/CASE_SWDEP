#ifndef WIDGETGENERATIONSCRIPT_H
#define WIDGETGENERATIONSCRIPT_H

#include <QDialog>
#include <QPluginLoader>
#include <QMessageBox>
#include <QDir>
#include <QDebug>
#include <QVector>

//-- Интерфейс плагина --//
#include "../Sqlite/sqlite_global.h"
#include "../Postgresql/postgresql_global.h"
//-------------------------//

namespace Ui {
class WidgetGenerationScript;
}

class WidgetGenerationScript : public QDialog
{
    Q_OBJECT

public:
    explicit WidgetGenerationScript(QWidget *parent = 0);
    ~WidgetGenerationScript();
    void loadPlugins(QString pathPlugin = "../DLL_DIR");

private slots:
    void on_comboBoxPlugin_currentIndexChanged(const QString &arg1);

private:
    Ui::WidgetGenerationScript *ui;
    void controlLoadPlugin(QString);
    Postgresql_interface * pluginpotsgresql;
    Sqlite_interface * pluginsqlite;
    QVector<QString> vec_name;
};

#endif // WIDGETGENERATIONSCRIPT_H
