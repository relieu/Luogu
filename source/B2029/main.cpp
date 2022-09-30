#include <iostream>

#define PI 3.14159

int main()
{
    int hight, radius;

    std::cin >> hight >> radius;

    double volume = PI * radius * radius * hight;

    std::cout << int(20000/volume) + 1;
    //Input is Interger

    return 0;
}