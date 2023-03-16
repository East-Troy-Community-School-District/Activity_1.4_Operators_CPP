/*
Concatenation
Pawelski
3/16/2023
C++

Instructions:
What is concatenation?
*/

#include <iostream>
#include <string>

int main() {
    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = firstName + " " + lastName;
    std::cout << fullName;
    return 0;
}
