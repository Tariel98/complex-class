#include "class_complex_number.h"
#include <iostream>


int main()
{
    Complex num1(9,  8); 
    Complex num2(10, 7); 
    Complex num3(0, 0); 
    Complex num4(9, 8);

    num3++;
    ++num3;    
    ++num4;
    num4.display();

    num1 = num2;
    num2.display();

    bool ecual = num1 == num2;
    bool ecul2 = num1 == num3;
    
    std::cout << ecual << std::endl;
    std::cout << ecul2 << std::endl;

    Complex sum = num1 + num2;

    std::cout << "sum: ";
    sum.display();

    Complex diff = num4 - num3;

    std::cout << "diff: ";

    diff.display();



}