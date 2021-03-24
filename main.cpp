#include <iostream>

int main()
{
    do {
        std::cout << "Press a key to continue...";
    } while (std::cin.get() != '\n');

    std::cout << "Hello Foo !" << std::endl;
    std::cout << "Hello Bar !" << std::endl;
    
    return 0;
}
