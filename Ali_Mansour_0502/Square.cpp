#include "Square.h"

void Square::setLength(float le)
{
    length = le;
}

float Square::getLength() const
{
    return length;
}

float Square::getArea() const
{
    return (length * length);
}

Square::Square(float le)
{
    length = le;
}
