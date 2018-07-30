#ifndef HOURLY_H
#define HOURLY_H
#include "payment.h"

class Hourly :public Payment
{
private:
    double hourlyRate;
    double hours;
    ~Hourly();
public:
    Hourly();
    Hourly(double hr);
    void addHours(double hrs);
    double pay();
};

#endif // HOURLY_H
