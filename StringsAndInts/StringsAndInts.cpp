/*
Strings and Ints
Pawelski
3/16/2023
C++

Instructions:
Why does each operation produce a different result?
*/

#include <iostream>
#include <string>

int main()
{
    std::string text = "10";
    int number = 20;

    // Convert a number into a string
    std::string result1 = text + std::to_string(number);
    std::cout << result1 << std::endl;
    
    // Convert a string into a number
    int result2 = std::stoi(text) + number;
    std::cout << result2 + 10 << std::endl;
    return 0;
}
