#include "employee.h"
#include <QString>

int Employee::nextID = 1000;

Employee::Employee(QString fn, QString sn)
{
    nextID += 1;
    id = nextID;
    firstName = fn;
    surname = sn;
}

Employee::Employee(const Employee &e)
{
firstName = e.firstName;
surname = e.surname;
id = e.id;
payment = e.payment;
}

Employee::~Employee()
{
    //delete payment;
}

int Employee::getID()
{
    return id;
}

QString Employee::getName()
{
    return firstName + " " + surname;
}

void Employee::setPayment(Payment *pay)
{
    payment = pay;
}

Payment *Employee::getPayment()
{
    return payment;
}
