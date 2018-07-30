#ifndef PAYMENT_H
#define PAYMENT_H
#include <QString>


class Payment
{
protected:
    QString _type;

public:
    Payment(QString typ);
    QString getType();
    virtual double pay() =0;
    virtual ~Payment();
};

#endif // PAYMENT_H
