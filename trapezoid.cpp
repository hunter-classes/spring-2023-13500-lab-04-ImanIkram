#include <iostream>
#include <string>

void trapezoid(int width, int height){

std::string space;

if (width/2 <= height)
{
    std::cout << "Impossible shape!" << std::endl;
}
else 
{
for (int r = height; r > 0; r--)
    {

        for (int c = width; c>0; c--)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
        width = width-2;
        space+= " ";
        std::cout << space;
    }
}

    return;
}