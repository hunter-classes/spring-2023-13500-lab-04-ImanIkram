#include <iostream>
#include <string>
#include "upper.h"

void upper(int side_length){

    for (int r = side_length; r > 0; r--)
    {
        for (int c = 0; c<r; c++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return;
}