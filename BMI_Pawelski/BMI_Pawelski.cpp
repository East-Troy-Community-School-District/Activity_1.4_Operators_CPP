/*
BMI
Pawelski
3/16/2023
C++
*/

#include <iostream>
#include <cmath>

int main()
{
    int height_feet, height_inches, weight;
    double bmi;

    std::cout << "What is your height in feet and inches? (feet inches) >> ";
    std::cin >> height_feet;
    std::cin >> height_inches;
    std::cout << "What is your weidth in pounds? >> ";
    std::cin >> weight;

    height_inches += height_feet * 12;
    bmi = (double)weight / pow(height_inches, 2) * 703;
    std::cout << "Your BMI is " << bmi << std::endl;
    return 0;
}
