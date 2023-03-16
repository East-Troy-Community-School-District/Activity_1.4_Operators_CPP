/*
Circle Area
Pawelski
3/16/2023
C++

Instructions:
How is a constant used in this program? Why is a
constant used in this situation? What does pow()
calculate?

Modify the program so that it calculates the
volume of a cylinder instead.
*/

#include <iostream>
#include <cmath>

int main()
{
    const double pi = 3.1415926535897;
    double radius, area;
    std::cout << "What is the radius of the circle? >> ";
    std::cin >> radius;
    area = pi * pow(radius, 2);
    std::cout << "The circle has an area of " << area 
        << std::endl;
    return 0;
}