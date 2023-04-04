#include "drawFigure.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

#include <iostream>
using namespace std;

DrawFigure draw;

template <typename T>
void drawFigure(T figure, int width, int height, char drawChar, char emptyChar)
{
    cout << ("\e[1;1H\e[2J");
    draw.createFigure(figure, width, height, drawChar, emptyChar);
    draw.setFigure();

}

int main()
{
    draw.setFigure();

    Rectangle rectangle;
    Triangle triangle;
    Circle circle;

    while (draw.getFigure() != 4) {
        if (draw.getFigure() == 1)
            drawFigure(&rectangle, 35, 15, '*', ' ');
        if (draw.getFigure() == 2)
            drawFigure(&triangle, 30, 15, '*', ' ');
        if (draw.getFigure() == 3)
            drawFigure(&circle, 15, 8, '*', ' ');
    }

    cout << "Спасибо, приходите еще!!!" << endl;
    return 0;
}
