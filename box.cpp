#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include <string>

//Task A
void box(int width, int height) {

std::string asterisks = "*";

for (int h = 0; h < height; h++)
{
    for (int w = 0; w < width; w++)
    {
        std::cout << asterisks;
    }
    std::cout << std::endl;
}

return;

}

