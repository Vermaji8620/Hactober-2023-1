#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString, concatenatedString;
    
    std::cout << "Enter the first string: ";
    std::getline(std::cin, firstString); // Allowing spaces in the string
    
    std::cout << "Enter the second string: ";
    std::getline(std::cin, secondString); // Allowing spaces in the string
    
    // Concatenating the strings
    concatenatedString = firstString + secondString;
    
    std::cout << "Concatenated String: " << concatenatedString << std::endl;
    
    return 0;
}
