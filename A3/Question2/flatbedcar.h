#ifndef FLATBEDCAR_H
#define FLATBEDCAR_H
#include <QString>
#include "freightcar.h"

class FlatbedCar
        :public FreightCar
{
public:
    FlatbedCar(QString id, double t):FreightCar(id,t) {
        type = FreightCar::FCType::FLATBED;
    }
};

#endif // FLATBEDCAR_H
