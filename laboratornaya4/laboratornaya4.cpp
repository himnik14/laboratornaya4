#include "EquilateralTriangle.h"
#include <windows.h>
#include <iostream>
#include "TriangularPrism.h"
#include <vector>
void ShowParameterOfObjects(vector<TriangularPrism> a)
{
    for (int i = 0; i < a.size(); i++)
    {   
        cout << i + 1 << ". ";
        a[i].ShowOb();
        a[i].ShowSquare();
    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double max = 0, midSquare = 0;
    int m, n, length, H;
    vector<TriangularPrism> prism;
    vector<EquilateralTriangle> triangle;
    int id = 0, value = 0;
    cout << "Какое количество треугольных призм вы хотите создать?\n";
    cin >> m;
    cout << "Какое количество равносторонних треугольников вы хотите создать?\n";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        cout << "Создание " << i + 1 << " треугольной призмы......\n";
        cout << "Введите сторону треугольного основания призмы: ";
        cin >> length;
        cout << "Введите высоту треугольной призмы: ";
        cin >> H;
        try
        {
            prism.push_back(TriangularPrism(H, length));

        }
        catch (const std::exception& ex)
        {
            cout << ex.what();
        }
        cout << endl;
    }                                                               
    for (int i = 0; i < n; i++)
    {
        cout << "Создание " << i + 1 << " равностороннего треугольника......\n";
        cout << "Введите сторону равностороннего треугольника: ";
        cin >> length;
        try
        {
            triangle.push_back(EquilateralTriangle(length));
        }
        catch (const std::exception& ex)
        {
            cout << ex.what();
        }
        cout << endl;
    }
    ShowParameterOfObjects(prism);
    for (int i = 0; i < prism.size(); i++)
    {
        if (prism[i].ObPrism() > max) {
            max = prism[i].ObPrism();
            id = i + 1;
        }
    }
    cout << "#" << id << " Призма имеет наибольший объём, равный " << max << "\n";

    for (int i = 0; i < triangle.size(); i++)
    {
        cout <<  i+1 << ". ";
        triangle[i].ShowSquare();
        midSquare += triangle[i].GetSquareTr();
    }
    midSquare /= triangle.size();

    for (int i = 0; i < triangle.size(); i++)
    {
        if (triangle[i].GetSquareTr() < midSquare) 
        {
            value++;
        }
    }
    cout << "Треугольников, имеющих площадь ниже средней площади всех созданных треугольников: " << value << "\n";
}

    