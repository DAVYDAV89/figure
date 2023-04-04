#ifndef DRAW_H
#define DRAW_H

#include "figure.h"

class DrawFigure
{
public:
    void createFigure(Figure *figure, int width, int height, char drawChar, char emptyChar);
    void setFigure();
    int  getFigure();
private:
    int figure;

};
#endif // DRAW_H
