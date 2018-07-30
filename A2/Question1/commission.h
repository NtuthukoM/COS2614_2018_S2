#ifndef COMMISSION_H
#define COMMISSION_H
#include "payment.h"

class Commission :public Payment
{
private:
    double commissionRate;
    double totalSales;
    ~Commission();
public:
    Commission(double cr);
    void addSales(double sv);
    double pay();
};

#endif // COMMISSION_H
