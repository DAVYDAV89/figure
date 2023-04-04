#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure
{
public:
    void draw(int width, int height, char drawChar, char emptyChar);
};

#endif // RECTANGLE_H
