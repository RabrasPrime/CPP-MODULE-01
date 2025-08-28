#include <iostream>
#include <string>

int main() {
    std::string Brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &Brain;
    std::string& stringREF = Brain;

    std::cout << "Address of Brain: " << &Brain << "\n" << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << "\n" << std::endl;
    std::cout << "Address held by stringREF: " << &stringREF << "\n" << std::endl;

    std::cout << "Value of Brain: " << Brain << "\n" << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << "\n" << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << "\n" << std::endl;
}
