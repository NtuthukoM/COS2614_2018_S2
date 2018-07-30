#ifndef TANKCAR_H
#define TANKCAR_H
#include "freightcar.h"
#include <QString>

class TankCar
        :public FreightCar
{
public:
    TankCar(QString id, double t):FreightCar(id,t) {
        type = FreightCar::FCType::TANK;
    }
};

#endif // TANKCAR_H
