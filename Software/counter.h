#ifndef COUNTER_H
#define COUNTER_H

#include <QThread>
#include <QDebug>
class Counter : public QThread
{
    Q_OBJECT

    //Counter für die Stopwatch deklarieren
public:
    explicit Counter(QObject *parent,int givenCount): QThread(parent){
        count = givenCount;
    };


signals:
    void countChanges(int value);

public slots:

private:
    int count;

    //startet das Counter
    void run() override {
        for (int i=0    ;true;i++){
            if (i == count*60){i=0;}
            qDebug()<<count<<": "<<i;
            countChanges(i);
            sleep(count);
        }
    };
};

#endif // COUNTER_H
