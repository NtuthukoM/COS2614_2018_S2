#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
#include "payment.h"

class Employee
{
private:
    int id;
    QString firstName;
    QString surname;
    Payment* payment;
    static int nextID;

public:
    Employee(QString fn, QString sn);
    Employee(const Employee& e);
    ~Employee();
    int getID();
    QString getName();
    void setPayment(Payment* pay);
    Payment* getPayment();
};

#endif // EMPLOYEE_H
