#include "freightcar.h"
#include <QString>

FreightCar::FreightCar(QString id, double t)
{
    ID = id;
    tonnage = t;
}

QString FreightCar::getID()
{
    return ID;
}

double FreightCar::getTonnage()
{
    return tonnage;
}

void FreightCar::setTonnage(double t)
{
    tonnage = t;
}

FreightCar::FCType FreightCar::getType()
{
    return type;
}

QString FreightCar::toString()
{
    QString strType = "";
    switch (type) {
    case FCType::ALL :
        strType = "ALL";
        break;
    case FCType::BOX :
        strType = "BOX";
        break;
    case FCType::GONDOLA :
        strType = "GONDOLA";
        break;
    case FCType::TANK :
        strType = "TANK";
        break;
    case FCType::FLATBED :
        strType = "FLATBED";
        break;
    default:
        break;
    }
    return QString("Id = %1\nTonnage = %2\nType = %3").arg(ID)
            .arg(QString::number(tonnage))
            .arg(strType);
}
