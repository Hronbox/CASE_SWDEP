#ifndef BUFFER_H
#define BUFFER_H

#include <QObject>
#include <QVector>
#include <QString>

class buffer : public QObject
{
    Q_OBJECT
public:
    explicit buffer(QObject *parent = 0);

    struct Data{
        QString table_name;
        QVector <QString> name;
        QVector <QString> type;
        QVector <bool> pk;
        QVector <bool> fk;
        QVector <bool> nn;
        QVector <bool> u;
    };

signals:

public slots:

};

#endif // BUFFER_H
