#include <iostream>

using namespace std;

int main() {
    string Brain = "HI THIS IS BRAIN";
    string* stringPTR = &Brain;
    string& stringREF = Brain;

    cout << "Address of Brain: " << &Brain << "\n" << endl;
    cout << "Address held by stringPTR: " << stringPTR << "\n" << endl;
    cout << "Address held by stringREF: " << &stringREF << "\n" << endl;

    cout << "Value of Brain: " << Brain << "\n" << endl;
    cout << "Value pointed to by stringPTR: " << *stringPTR << "\n" << endl;
    cout << "Value pointed to by stringREF: " << stringREF << "\n" << endl;
}