#ifndef MARKCALCULATOR_H
#define MARKCALCULATOR_H
#include <QString>


class MarkCalculator
{
public:
    MarkCalculator();
    double CalcSemesterMark(double a1,double a2, double a3);
    QString CalcFinalMark(double semesterMark, double examMark);
};

#endif // MARKCALCULATOR_H
