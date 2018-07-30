#include <QCoreApplication>
#include <QTextStream>
#include "freightcar.h"
#include "freighttrain.h"
#include "boxcar.h"
#include "flatbedcar.h"
#include "gondolacar.h"
#include "tankcar.h"

QTextStream cin(stdin);
QTextStream cout(stdout);

int main(int argc, char *argv[])
{
    cout << "\t\t*** Freight Train test ***\n"
         << endl;

    FreightTrain train;

    cout << "Adding BOX cars..."
         << endl;
    BoxCar* box1 = new BoxCar("Box01",3000);
    BoxCar* box2 = new BoxCar("Box02",3500);
    BoxCar* box3 = new BoxCar("Box03",2000);
    //add:
    train.addCar(box1);
    train.addCar(box2);
    train.addCar(box3);

    cout << "Adding GONDOLA cars..."
         << endl;
    GondolaCar* Gondola1 = new GondolaCar("Gondola01",200);
    GondolaCar* Gondola2 = new GondolaCar("Gondola02",110);
    GondolaCar* Gondola3 = new GondolaCar("Gondola03",500);
    GondolaCar* Gondola4 = new GondolaCar("Gondola04",300);
    //add:
    train.addCar(Gondola1);
    train.addCar(Gondola2);
    train.addCar(Gondola3);
    train.addCar(Gondola4);

    cout << "Adding TANK car..."
         << endl;
    TankCar* tank1 = new TankCar("Tank01",21000);
    //add:
    train.addCar(tank1);

    cout << "Adding FLATBED car..."
         << endl;
    FlatbedCar* flat = new FlatbedCar("FLATBED01",210);
    //add:
    train.addCar(flat);

    cout << "\t\t*** Freight Train complete ***\n"
         << endl;
    cout << "Finding car at position 2..."
         << endl;

    QString strCar = train.getCar(2)->toString();
    cout << "Details:\n" + strCar
         << endl;

    cout << "\nSearching GONDOLA cars..."
         << endl;

    QList<FreightCar*> gondolas = train.getCars(FreightCar::FCType::GONDOLA);
    foreach (FreightCar* gondola, gondolas) {
        QString _strCar = gondola->toString();
        cout << "Car Details:\n" + _strCar
             << endl;
    }

    cout << "\nTrain split..."
         << endl;

    QList<FreightCar*> splits = train.splitTrain(7);
    foreach (FreightCar* split, splits) {
        QString _strCar = split->toString();
        cout << "Car Details:\n" + _strCar
             << endl;
    }

    train.deleteAll();
    return 0;
}

/*
 *
    QList<FreightCar*> splitTrain(int pos);
    double tonnageTotal(FreightCar::FCType type);
    void deleteAll();
 *
 * */
