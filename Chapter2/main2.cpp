#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

int getValueFromUser()
{
    std::cout << "Enter an Integer; " << std::endl;
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    //Functions
    std::cout << "Starting main()\n";
    doPrint(); //Interrupts main() by calling doPrint(). main() is the caller.
    std::cout << "Ending main()\n";

    //Get value from user
    int num { getValueFromUser() };
    std::cout << num << " doubles is " << num * 2 << std::endl;
    return 0;
}