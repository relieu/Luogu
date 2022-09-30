#include <iostream>

int main()
{
    char symbol;
    std::cin >> symbol;

    std::cout << "  " << symbol << std::endl;
    std::cout << " " << symbol << symbol << symbol << std::endl;
    std::cout << symbol << symbol << symbol << symbol << symbol << std::endl;

    return 0;
}