#include "postgresql.h"
#include <QStringList>


DBTable *getTableFromId(QVector<DBTable *> &tables, IdTable idTable)
{
    for(int i=0;i<tables.size();i++)
    {
        if(tables[i]->getIdTable()==idTable)
        {
            return tables[i];
        }
    }

    return 0;
}

Postgresql::Postgresql()
{
}

QString Postgresql::getCreateScript(QVector<DBTable *> &tables)
{
        QStringList mainscript;
        QString script="";
        for(int i=0;i<tables.size();i++)
        {
            script = script+"CREATE TABLE " + tables[i]->getName()+" (";
            for(int j=0;j<tables[i]->getAttributes().size();j++)
            {
                if(j==tables[i]->getAttributes().size()-1)
                {
                    script =script+tables[i]->getAttributes()[j].name + " " + tables[i]->getAttributes()[j].type;
                }
                else
                {
                    script=script+tables[i]->getAttributes()[j].name + " " + tables[i]->getAttributes()[j].type + ",";
                }  
            }

            QVector<IdTable> &foreignTables = tables[i]->getForeignTables();

            for(int k=0;k<foreignTables.size();k++)
            {
                DBTable *table = getTableFromId(tables, foreignTables[k]);

                QVector<DBAttribute> &attributes = table->getAttributes();

                QString nameAttr="!PRIMARY KEY IS NOT FOUND!";

                for(int attr=0;attr<attributes.size();attr++)
                {
                    if(attributes[attr].PK=="1")
                    {
                        nameAttr = attributes[attr].name;
                        break;
                    }
                }

                script += ',' + nameAttr;
                script=script+" REFERENCES "+table->getName()+" ON DELETE CASCADE ON UPDATE CASCADE ";
            }
            script += ");\n";
        }

        return script;
}
