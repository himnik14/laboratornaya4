#include "TriangularPrism.h"
int TriangularPrism::ID = 0;
int TriangularPrism::Get_Id() 
{
    return ID;
}
void TriangularPrism::ShowSquare()
{
    cout << "Площадь призмы: " << GetSquare() << "\n";
}

double TriangularPrism::GetSquare()
{
    return (GetLength() / 2) * (GetLength() * sqrt(3) + 6 * h);
}

void TriangularPrism::ShowOb()
{
    cout << "Объём призмы: " << ObPrism() << "\n";
}

double TriangularPrism::ObPrism()
{
    return GetSquareTr() * h;
}

TriangularPrism::TriangularPrism()
{
}

TriangularPrism::TriangularPrism(int h, int length)
{
    if (h <= 0 || length <= 0) throw exception("Высота или сторона не может быть меньше или равной нулю!\n");
    this->h = h;
    ID++;
    SetLength(length);
}

void TriangularPrism::SetHeight(int h)
{
    if (h <= 0) throw exception("Высота не может быть меньше или равной нулю!\n");
    this->h = h;
}