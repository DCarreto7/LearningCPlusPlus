#include <iostream>

//
void doPrint()
{
    std::cout << "In doPrint()\n";
}

int main()
{
    //Functions
    std::cout << "Starting main()\n";
    doPrint(); //Interrupts main()n by calling doPrint(). main() is the caller.
    std::cout << "Ending main()\n";
}