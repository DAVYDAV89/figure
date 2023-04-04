#include "drawFigure.h"

#include <iostream>
using namespace std;

void DrawFigure::createFigure(Figure *figure, int width, int height, char drawChar, char emptyChar)
{
    figure->draw(width, height, drawChar, emptyChar);
}

void DrawFigure::setFigure()
{
    cout << "Выберите фигуру: " << endl;
    cout << "Квадрат - 1 " << endl;
    cout << "Треугольник - 2" << endl;
    cout << "Круг - 3 " << endl;
    cout << "Для выхода нажмите 4" << endl;

    cin >> figure;
}

int DrawFigure::getFigure()
{
    return figure;
}
