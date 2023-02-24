# include <iostream>
#include <string>
#include "lower.h"

void lower(int side_length){

    for (int r = 0; r < side_length; r++)
    {
        for (int c = 0; c<=r; c++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return;
}