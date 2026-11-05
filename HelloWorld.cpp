//
// Created by Dominic Carreto on 11/5/26.
//

#include <iostream>

int main()
{
    std::cout << "Hello, World!\n"; //Adding comments are ignored by the compiler
    /* This is a multi-line comment.
     * This line will be ignored.
     * So will this one. */

    //Prints literal number
    std::cout << 5;
    std::cout << "\n";
    std::cout <<-6.7;
    std::cout << "\n";

    //Defines variable
    int d;
    double variable;
    long y,z;
    int randNum = 67;
    std::cout << randNum;

    //More variable printing
    int x{ 5 };
    std::cout << "x\nis equal to: " << x;
    std::cout << "\n";

    //Using std::endl
    std::cout << "Learning C++" << std::endl;
    std::cout << "For CSC 481" << std::endl;

    return 0;
}