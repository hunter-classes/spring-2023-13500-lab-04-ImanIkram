#include <iostream>

void cross(int size) {

for (int r = 1; r<=size; r++)
    {
        for (int c=1; c<=size; c++)
        {   
            if (c==r || (c == size-r+1))
            {
              std::cout << "*";
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