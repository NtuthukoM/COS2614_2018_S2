#ifndef HOURLY_H
#define HOURLY_H
#include "payment.h"

class Hourly :public Payment
{
private:
    double hourlyRate;
    double hours;
public:
    Hourly();
    Hourly(double hr);
    double pay();
};

#endif // HOURLY_H
