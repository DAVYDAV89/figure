#include "triangle.h"

#include <iostream>
using namespace std;

void Triangle::draw(int width, int height, char drawChar, char emptyChar)
{
    const string emptLine(width + 1, emptyChar);
    const string lastLine(width + 1, drawChar);
    const int x_Central = width / 2;
    for (int row = height; row >=0; --row){
        string line(emptLine);
        const int x = (x_Central / height) * row;
        line[x] = drawChar;
        line[x + 2 * (x_Central - x)] = drawChar;

        cout << line << endl;

    }
    cout << lastLine << endl;

}
