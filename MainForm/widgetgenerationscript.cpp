#include "widgetgenerationscript.h"
#include "ui_widgetgenerationscript.h"





WidgetGenerationScript::WidgetGenerationScript(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WidgetGenerationScript)
{
    ui->setupUi(this);
    qDebug()<<"WORK 1!";
    //loadPlugins();
}

WidgetGenerationScript::~WidgetGenerationScript()
{
    delete ui;
}

void WidgetGenerationScript::loadPlugins(QString pathPlugin)
{
    #ifdef Q_OS_WIN32
        QString enlargement = ".dll";   // Для Windows
        QString prefix = "";
    #endif

    #ifdef Q_OS_LINUX
        QString enlargement = ".so";    // Для Linux
        QString prefix = "lib";         // В Linux добовляется приставка lib...
    #endif

    qDebug()<<"WORK 2!";
    QStringList readPluginsName;
    readPluginsName << "Sqlite";
    readPluginsName << "Postgresql";
    QStringList combo;
    combo<<"Выберите драйвер";

    qDebug()<<readPluginsName;
    for(int i = 0; i < readPluginsName.size(); i++)
    {
        QDir findPlugin(pathPlugin);
        qDebug()<<findPlugin.entryList().contains(prefix + readPluginsName.at(i) + enlargement);
        if(findPlugin.entryList().contains(prefix + readPluginsName.at(i) + enlargement))
        {
            QPluginLoader loader(pathPlugin + "/" + prefix + readPluginsName.at(i) + enlargement);

            // Исключаем ошибки
            if (loader.isLoaded())
            {
                loader.unload();
                QPluginLoader loader(pathPlugin + "/" + prefix + readPluginsName.at(i) + enlargement);

            }

            // Исключаем ошибки
            if (loader.load() == false)
            {
                qDebug() << QString("%1 %2\n%3: %4")
                            .arg(QObject::tr("Can't load a plugin"))
                            .arg(readPluginsName.at(i)).arg(QObject::tr("error"))
                            .arg(loader.errorString());
            }
            else
            {
                QObject * obj = loader.instance();
                if(readPluginsName.at(i)=="Postgresql")
                {
                    if(pluginpotsgresql = qobject_cast<Postgresql_interface *>(obj))
                    {
                       combo<<pluginpotsgresql->getName();
                    }
                }
                if(readPluginsName.at(i)=="Sqlite")
                {
                    if(pluginsqlite = qobject_cast<Sqlite_interface *>(obj))
                    {
                        combo<<pluginsqlite->getName();
                    }
                }
            }

        }

    }
ui->comboBoxPlugin->addItems(combo);
}

void WidgetGenerationScript::on_comboBoxPlugin_currentIndexChanged(const QString &arg1)
{
    QMessageBox msgBox;
    QString versqlite = pluginsqlite->getVersion();
    QString verpostgresql = pluginpotsgresql->getVersion();

    if (arg1=="Postgresql")
    {
        msgBox.setText(verpostgresql);
        msgBox.exec();

    }
    if (arg1=="Sqlite")
    {
        msgBox.setText(versqlite);
        msgBox.exec();
    }
    if(arg1=="Выберите драйвер")
    {

    }
}
