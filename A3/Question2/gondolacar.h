#ifndef GONDOLACAR_H
#define GONDOLACAR_H
#include <QString>
#include "freightcar.h"

class GondolaCar
        :public FreightCar
{
public:
    GondolaCar(QString id, double t):FreightCar(id,t) {
        type = FreightCar::FCType::GONDOLA;
    }
};

#endif // GONDOLACAR_H
