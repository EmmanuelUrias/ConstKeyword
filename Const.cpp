#include <iostream>

int main()
{
    // The const keyword means that a variable cannot be changed after its definition

    const double PI = 3.1415; // this variable cannot be modified
    const int LIGHT_SPEED = 299792458;
    int radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
};