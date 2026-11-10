#include <iostream>

int main()
{
    std::cout << "Enter an Integer: ";

    int num { }; //Initialized Integer and Defines Variable
    std::cin >> num; //User Input is stored in variable num

    std::cout << "Double that number is: " <<  num * 2 << '\n';  /* use an expression to multiply num * 2 at the point
                                                                  * where we are going to print it"; */
    std::cout << "Triple that number is: " << num * 3 << '\n';   //Triples the number
    return 0;
}