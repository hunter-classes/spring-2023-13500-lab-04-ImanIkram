#include <iostream>
#include <string>
#include "checkerboard2.h"

std::string checkerboard2(int width, int height){
    
    std::string board = "";
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            if (((w / 3) + h / 3) % 2 == 0)
            {
            board+= "*";
            }
            else
            {
            board+= " ";
            } 
         
        }
        board+= "\n";
    }

  return board;
    
}