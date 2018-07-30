#include "payment.h"
#include <QString>



Payment::Payment(QString typ)
{
    _type = typ;
}


QString Payment::getType()
{
    return _type;
}

Payment::~Payment()
{
}
