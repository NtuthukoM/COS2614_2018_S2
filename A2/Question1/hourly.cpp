#include "hourly.h"



Hourly::~Hourly()
{

}

Hourly::Hourly(double hr):Payment("Hourly")
{
    hourlyRate = hr;
}

void Hourly::addHours(double hrs)
{
    hours += hrs;
}

double Hourly::pay()
{
 return hours * hourlyRate;
}
