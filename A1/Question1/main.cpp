#include "mainwindow.h"
#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>
#include "markcalculator.h"
#include <QString>
#include <QStringList>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString strTile ="Mark Calculation";
    QString strInput = QInputDialog::getText(0,strTile,
                                             "Enter Marks");
    QStringList marks = strInput.split(',');
    QString strNum = marks.at(0);
    strNum.toDouble();
    MarkCalculator markCalc;
    double semesterMark = markCalc.CalcSemesterMark(
                marks.at(0).toDouble(),
                marks.at(1).toDouble(),
                marks.at(2).toDouble()
                );
    QString strOutput = markCalc.CalcFinalMark(semesterMark,
                                               marks.at(3).toDouble());
    QMessageBox::information(0,strTile,strOutput,QMessageBox::Ok);
    return 0;
}
