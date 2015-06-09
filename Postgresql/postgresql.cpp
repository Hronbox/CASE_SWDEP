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
            if (tables[i]->getAttributes().size()==0)
            {continue;}
            script = script+"CREATE TABLE " + tables[i]->getName()+" (";
            for(int j=0;j<tables[i]->getAttributes().size();j++)
            {
                if(j==tables[i]->getAttributes().size()-1)
                {
                    script =script+tables[i]->getAttributes()[j].name + " " + tables[i]->getAttributes()[j].type;
                    if(tables[i]->getAttributes()[j].NN == "1")
                    {
                        if(tables[i]->getAttributes()[j].PK == "0")
                            script =script + " NOT NULL";
                    }
                    if(tables[i]->getAttributes()[j].UNIQ == "1")
                    {
                        if(tables[i]->getAttributes()[j].PK == "0")
                            script =script + " UNIQUE";
                    }

                }
                else
                {
                    script=script+tables[i]->getAttributes()[j].name + " " + tables[i]->getAttributes()[j].type;
                    if(tables[i]->getAttributes()[j].NN == "1")
                    {
                        if(tables[i]->getAttributes()[j].PK == "0")
                            script =script + " NOT NULL";
                    }
                    if(tables[i]->getAttributes()[j].UNIQ == "1")
                    {
                        if(tables[i]->getAttributes()[j].PK == "0")
                            script =script + " UNIQUE";
                    }
                    script =script+ ",";
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
                script=script+" REFERENCES "+table->getName()+" ON DELETE CASCADE ON UPDATE CASCADE";
            }
            script=script+",PRIMARY KEY(";
            for(int attr=0;attr<tables[i]->getAttributes().size();attr++)
            {
                if(tables[i]->getAttributes()[attr].PK=="1")
                {
                    script=script+tables[i]->getAttributes()[attr].name+',';
                }
            }
            script.resize(script.size()-1);
            script += ")";
            script += ");\n";
        }

        return script;
}
