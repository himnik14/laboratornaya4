#include "EquilateralTriangle.h"

void EquilateralTriangle::ShowPerimeter()
{
    cout << "Периметр треугольника: " << PerimeterTriangle() << "\n";
}

void EquilateralTriangle::ShowSquare()
{
    cout << "Площадь треугольника: " << GetSquareTr() << "\n";
}

void EquilateralTriangle::SetLength(int length)
{
    if (length <= 0) throw exception("Сторона треугольника не может быть меньше или равна нулю!\n");
    this->length = length;
}

EquilateralTriangle::EquilateralTriangle()
{
}

EquilateralTriangle::EquilateralTriangle(int length)
{
    if (length <= 0) throw exception("Сторона треугольника не может быть меньше или равна нулю!\n");
    this->length = length;
}

int EquilateralTriangle::GetLength()
{
    return length;
}

double EquilateralTriangle::GetSquareTr()
{
    return (sqrt(3) / 4) * pow(length, 2);
}

double EquilateralTriangle::PerimeterTriangle()
{
    return length * 3;
}