#pragma once
using namespace std;
#include <iostream>
class EquilateralTriangle
{
    int length;
public:
    void ShowSquare();
    EquilateralTriangle(int length);
    EquilateralTriangle();
    void SetLength(int length);
    int GetLength();
    double GetSquareTr();
    double PerimeterTriangle();
protected:
    void ShowPerimeter();
};

