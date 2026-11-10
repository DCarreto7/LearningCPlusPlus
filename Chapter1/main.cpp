// Created by DCarreto7

#include <iostream>

void doNothing(int&)
{
}

int five()
{
    return 5;
}

int main()
{
    std::cout << "Hello, World!\n"; //Adding comments are ignored by the compiler

    /* This is a multi-line comment.
     * This line will be ignored.
     * So will this one.
     */

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

    //std::cin
    std::cout << "Enter a number: " << std::endl;
    int f{};
    std::cin >> f;
    std::cout << "You entered " << f << "." << std::endl;

    //std::cin with two numbers
    std::cout << "Enter two numbers: " << std::endl;
    int a{};
    std::cin >> a;

    int b{};
    std::cin >> b;

    std::cout << "You entered " << a << " and " << b << std::endl;

    //Uninitialized variable
    int q;
    doNothing(q);
    std::cout << q << std::endl;

    std::cout << sizeof(int) << std::endl;

    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; //Print format for long lines =

    //String Literals
    std::cout << 5 << '\n'; //Prints the value of a literal
    int w { 5 };

    std::cout << w << '\n'; //Prints the value of a variable

    //Operators
    std::cout << 1 + 2 << std::endl;

    //Expressions
    int p { five() }; //Initialized functions five() which returns value 5
    std::cout << p << std::endl;

    

    return 0;
}