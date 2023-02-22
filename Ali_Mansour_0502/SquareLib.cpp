#include "SquareLib.h"

Square doubleLength_1(Square s)
{
    s.setLength(s.getLength() * 2);
    return s;
}

void doubleLength_2(Square& s)
{
    s.setLength(s.getLength() * 2);
}

void doubleLength_3(Square* s)
{
    s->setLength(s->getLength() * 2);
}
