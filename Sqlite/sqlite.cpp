#include "sqlite.h"
#include <QStringList>

Sqlite::Sqlite()
{
}

QString Sqlite::getCreateScript(QVector<DBTable *> &tables)
{
        QStringList mainscript;
        QString script;
//        for(int i=0;i<tables.size();i++)
//        {
//            script = "CREATE TABLE " + tables[i]->getName()+"(";
//            for(int j=0;j<tables[i]->getAttributes().size();j++)
//            {
//                if(j==tables[i]->getAttributes().size()-1)
//                {
//                    script +=tables[i]->getAttributes()[j].name + " " + tables[i]->getAttributes()[j].type;
//                }
//                else
//                {
//                    script +=tables[i]->getAttributes()[j].name + " " + tables[i]->getAttributes()[j].type + ",";
//                }
//            }
//            script += ");\n";
//        }

        return script;
}
