#include <iostream>
#include <string>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard2.h"


int main(){

    //Task A
    std::cout << "box(12,4):" << std::endl;
    box(12,4);
    std::cout << "\n";
    std::cout << "box(5,8):" << std::endl;
    box(5,8);
    std::cout << "\n--------------------------\n" << std::endl; 
    
    //Task B
    std::cout << "checkerboard(11,5):" << std::endl;
    checkerboard(11, 5);
    std::cout <<"\n";
    std::cout << "checkerboard(7,12):" << std::endl;
    checkerboard(7,12);
    std::cout << "\n--------------------------\n" << std::endl; 

    //Task C
    std::cout << "cross(8):" << std::endl;
    cross(8);
    std::cout << "\n";
    std::cout << "cross(10):" << std::endl;
    cross(10);
    std::cout << "\n--------------------------\n" << std::endl; 

    //Task D
    std::cout << "lower(8):" << std::endl;
    lower(8);
    std::cout << "\n";
    std::cout << "lower(12):" << std::endl;
    lower(12);
    std::cout << "\n--------------------------\n" << std::endl;

    //Task E
    std::cout << "upper(8):" << std::endl;
    upper(8);
    std::cout << "\n";
    std::cout << "upper(5):" << std::endl;
    upper(5);
    std::cout << "\n--------------------------\n" << std::endl;
   
    //Task F
    std::cout << "trapezoid(8,3):" << std::endl;
    trapezoid(8,3);
    std::cout << "\n";
    std::cout << "trapezoid(12,5):" << std::endl;
    trapezoid(12,5);
    std::cout << "\n";
    std::cout << "trapezoid(16,8):" << std::endl;
    trapezoid(16,8);
    std::cout << "\n--------------------------\n" << std::endl;

    // Task G
    std::cout << "checkerboard2(16,11):" << std::endl;
    std::cout << checkerboard2(16,11);
    std::cout << "\n";
    std::cout << "checkerboard2(14,19):" << std::endl;
    std::cout << checkerboard2(14,21);
    std::cout << "\n";
    std::cout << "checkerboard2(21,21):" << std::endl;
    std::cout << checkerboard2(21,21);
    std::cout << "\n--------------------------\n" << std::endl;

    return 0;


}