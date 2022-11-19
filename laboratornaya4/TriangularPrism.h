#pragma once
#include "EquilateralTriangle.h"
class TriangularPrism :
    public EquilateralTriangle
{
    int h;
public:
    static int ID;
    void SetHeight(int h);
    TriangularPrism(int h, int length);
    double GetSquare();
    TriangularPrism();
    double ObPrism();
    void ShowOb();
    void ShowSquare();
    static int Get_Id();
};

