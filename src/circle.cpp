#include "circle.h"

#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void Circle::draw(int radius, int height, char drawChar, char emptyChar)
{
    double x, y;

    vector<vector<char>> drawBuffer(
                (radius) * 2 + 2,
                vector<char>(radius * 2 + 7, emptyChar));

    for (double t = 0.0; t < height; t += 0.1) {
        x = 0.5 * radius * sin(t) + radius + 1;
        y = radius * cos(t) + radius + 1;
        drawBuffer[x][y] = drawChar;
    }

    for (const auto& row : drawBuffer) {
        bool isEmptyLine = true;
        string line;
        for (auto cell : row){
            line += cell;
            if (cell != emptyChar)
                isEmptyLine = false;
        }
        if (!isEmptyLine)
            cout << line << endl;
    }

}















