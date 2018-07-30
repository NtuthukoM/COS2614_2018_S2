#ifndef SALARY_H
#define SALARY_H
#include "payment.h"


class Salary :public Payment
{
private:
    double salary;
    ~Salary();
public:
    Salary(double sal);
    double pay();
};

#endif // SALARY_H
