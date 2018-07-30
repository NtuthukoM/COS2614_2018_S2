#include "freighttrain.h"


FreightTrain::FreightTrain()
{

}

void FreightTrain::addCar(FreightCar *fc)
{
    physicalOrder.append(fc);
    posByID.insert(fc->getID(),
                   physicalOrder.size() -1);
}

FreightCar *FreightTrain::getCar(int pos)
{
    return physicalOrder.at(pos);
}

int FreightTrain::getPos(QString id)
{
    if(posByID.contains(id)){
        return posByID[id];
    }
    return -1;
}

QList<FreightCar *> FreightTrain::getCars(FreightCar::FCType type = FreightCar::FCType::ALL)
{
    QList<FreightCar*> _cars;
    for(int i = 0; i < physicalOrder.size(); i++){
        if(physicalOrder.at(i)->getType() == type || type == FreightCar::FCType::ALL)
        {
            FreightCar* _car = physicalOrder.at(i);
            _cars.append(_car);
        }
    }
    return _cars;
}

QList<FreightCar *> FreightTrain::splitTrain(int pos)
{
    int diff = physicalOrder.size() - pos;
    QList<FreightCar*> _cars;
    for(int i = 0; i < diff; i++){
        FreightCar* _car = physicalOrder.takeLast();
        posByID.remove(_car->getID());
        _cars.append(_car);
    }
    return _cars;
}

double FreightTrain::tonnageTotal(FreightCar::FCType type = FreightCar::FCType::ALL)
{
    double total = 0;
    for(int i = 0; i < physicalOrder.size(); i++){
        if(physicalOrder.at(i)->getType() == type || type == FreightCar::FCType::ALL)
        {
            total += physicalOrder.at(i)->getTonnage();
        }
    }
    return total;
}

void FreightTrain::deleteAll()
{
    int size = physicalOrder.size();
    for(int i = 0; i < size; i++){
        FreightCar* _car = physicalOrder.takeLast();
        delete _car;
    }
}
