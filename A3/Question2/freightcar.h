#ifndef FREIGHTCAR_H
#define FREIGHTCAR_H
#include <QString>

class FreightCar
{
private:
    QString ID;
    double tonnage;

public:
enum FCType {ALL, BOX, GONDOLA, TANK, FLATBED};

    FreightCar(QString id, double t);
    QString getID();
    double getTonnage();
    void setTonnage(double t);
    FCType getType();
    QString toString();

protected:
    FCType type;
};

#endif // FREIGHTCAR_H
