#ifndef FREIGHTTRAIN_H
#define FREIGHTTRAIN_H
#include "freightcar.h"
#include <QString>
#include <QList>
#include <QHash>

class FreightTrain
{
private:
    QList<FreightCar*> physicalOrder;
    QHash<QString, int> posByID;

public:
    FreightTrain();
    void addCar(FreightCar* fc);
    FreightCar* getCar(int pos);
    int getPos(QString id);
    QList<FreightCar*> getCars(FreightCar::FCType type);
    QList<FreightCar*> splitTrain(int pos);
    double tonnageTotal(FreightCar::FCType type);
    void deleteAll();
};

#endif // FREIGHTTRAIN_H
