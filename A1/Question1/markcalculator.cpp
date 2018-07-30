#include "markcalculator.h"

MarkCalculator::MarkCalculator()
{

}

double MarkCalculator::CalcSemesterMark(double a1, double a2, double a3)
{

    //Assignments 1, 2 and 3 contribute 20%, 50% and 30% respectively to the semester mark.
     double mark = a1 * 0.2 + a2 * 0.5 + a2 * 0.3;
     //Semester mark contributes 20% toward the final mark.
     return mark* 0.2;
}

QString MarkCalculator::CalcFinalMark(double semesterMark, double examMark)
{
    QString strResult = "Your Result:";
    // Exam mark contributes 80% toward the final mark.
    double finalMark = examMark * 0.8;
    /*
        You need to obtain a minimum of 40% in the exam for the semester mark to be included in
        the final mark. If you obtain less than 40% in the exam, your final mark (%) will be equal to
        the exam mark (%).
    */
    if(examMark >= 40){
        finalMark += semesterMark;
    }else{
        finalMark = examMark;
    }


    if(finalMark >= 50){
        // One obtains a pass in COS2614 if the final mark is equal to or above 50%.
        strResult +=QString("%1% - Passed").arg(finalMark);
    }else if(finalMark >= 40 && finalMark <50){
        /*
            If a student obtains between 40% and 49% final mark, then the student gets admission to the
            supplementary exam.
        */
        strResult +=QString("%1% - supplementary exam required").arg(finalMark);

    }else{
        //If a student obtains less than 40% final mark, then the student fails the module.
        strResult += QString("%1% - Regret, Failed").arg(finalMark);
    }

    return strResult;
}
