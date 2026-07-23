#include <iostream>
#include <string>

int main() {
    std::string name;

    // Ask the user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Print a personalized greeting
    std::cout << "Hello, " << name << "! Welcome to C++." << std::endl;

    return 0;
}