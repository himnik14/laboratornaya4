#include "TriangularPrism.h"
int TriangularPrism::ID = 0;
int TriangularPrism::Get_Id() 
{
    return ID;
}
void TriangularPrism::ShowSquare()
{
    cout << "������� ������: " << GetSquare() << "\n";
}

double TriangularPrism::GetSquare()
{
    return (GetLength() / 2) * (GetLength() * sqrt(3) + 6 * h);
}

void TriangularPrism::ShowOb()
{
    cout << "����� ������: " << ObPrism() << "\n";
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
    if (h <= 0 || length <= 0) throw exception("������ ��� ������� �� ����� ���� ������ ��� ������ ����!\n");
    this->h = h;
    ID++;
    SetLength(length);
}

void TriangularPrism::SetHeight(int h)
{
    if (h <= 0) throw exception("������ �� ����� ���� ������ ��� ������ ����!\n");
    this->h = h;
}