#include <iostream>
#include "checkerboard.h"
#include <string>

//Task B
void checkerboard(int width, int height) {

std::string asterisks = "*";

for (int h = 0; h < height; h++)
{

    for (int w = 0; w < width; w++)
    {
        if ((w+h)%2==0)
        {
            std::cout << asterisks;
        }
        else
        {
            std::cout << " ";
        }   
    }
    
    std::cout << std::endl;
}

return;

}

