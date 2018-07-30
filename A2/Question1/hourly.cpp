#include "hourly.h"

Hourly::Hourly()
{

}

Hourly::Hourly(double hr)
{
    type = "Hourly";
    hourlyRate = hr;
}

double Hourly::pay()
{
 return hours * hourlyRate;
}
