#include <iostream>
#include "FileReplacer.hpp"

using namespace std;

int main(int argc, char** argv) {
    if (argc != 4){
        std::cout << "Error: This program does not take any arguments." << std::endl;
        return 1;
    }
    FileReplacer fileReplacer;
    fileReplacer.replaceInFile(argv[1], argv[2], argv[3]);
    return 0;
}