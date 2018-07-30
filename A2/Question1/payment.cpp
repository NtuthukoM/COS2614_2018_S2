#include "payment.h"
#include <QString>


Payment::Payment()
{

}

Payment::Payment(QString typ)
{
    type = typ;
}

QString Payment::getType()
{
    return type;
}
