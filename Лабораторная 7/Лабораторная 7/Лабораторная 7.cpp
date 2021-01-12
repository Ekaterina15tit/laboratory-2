#include <stdio.h>
#include <Windows.h> 
#include <iostream>

using namespace std;

void Add(float x, float y)
{
    cout << "Функция для выситания целых чисел (float)" << endl;
    cout << x << " - " << y << " = " << (x - y) << endl;

}

void Add(double x, double y)
{
    cout << "Функция для вычитания целых чисел(double)" << endl;
    cout << x << " - " << y << " = " << (x - y) << endl;
}

void Add(float x, float xi, float y, float yi)
{
    cout << "Функция для вычитания комплексных чисел(float)" << endl;
    cout << "(" << x << " - " << xi << "i) - (" << y << " - " << yi << "i) = " << x - y << " - " << xi - yi << "i" << endl;

}

void Add(double x, double xi, double y, double yi)
{
    cout << "Функция для вычитания комплексных чисел(double)" << endl;
    cout << "(" << x << " - " << xi << "i) - (" << y << " - " << yi << "i) = " << x - y << " - " << xi - yi << "i" << endl;

}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x = 5, y = 9;
    Add(x, y);
    double f = 3;
    Add(f, 56);
    Add(2.0, 2.5, 3.0, 0.1);
    system("PAUSE");
    return 0;
}