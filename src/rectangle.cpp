#include "rectangle.h"

#include <iostream>
using namespace std;

void Rectangle::draw(int width, int height, char drawChar, char emptyChar)
{
    const string firstRow(width, drawChar);

    cout << firstRow << endl;
    for (int row = 1; row < height - 1; ++row) {
        string nextRow(width, emptyChar);
        nextRow[0] = drawChar;
        nextRow[width - 1] = drawChar;
        cout << nextRow << endl;
    }
    cout << firstRow << endl;
}
