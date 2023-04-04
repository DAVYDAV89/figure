#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure
{
public:
    void draw(int width, int height, char drawChar, char emptyChar) override;
};
#endif // TRIANGLE_H
