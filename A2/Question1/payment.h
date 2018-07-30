#ifndef PAYMENT_H
#define PAYMENT_H
#include <QString>


class Payment
{
protected:
    QString type;

public:
    Payment();
    Payment(QString typ);
    QString getType();
    virtual double pay() =0;
};

#endif // PAYMENT_H
