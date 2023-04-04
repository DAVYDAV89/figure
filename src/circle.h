#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle :public Figure
{
public:
    void draw(int radius, int height, char drawChar, char emptyChar) override;

};

#endif // CIRCLE_H
