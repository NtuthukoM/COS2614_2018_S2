#ifndef BOXCAR_H
#define BOXCAR_H
#include "freightcar.h"
#include <QString>

class BoxCar: public FreightCar
{
public:
    BoxCar(QString id, double t):FreightCar(id,t) {
        type = FreightCar::FCType::BOX;
    }
};

#endif // BOXCAR_H
