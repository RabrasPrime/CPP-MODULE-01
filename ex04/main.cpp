#include <iostream>
#include "FileReplacer.hpp"

int main(int argc, char** argv) {
    if (argc != 4){
        std::cout << "Error: This program requires exactly 3 arguments." << std::endl;
        return 1;
    }
    FileReplacer fileReplacer;
    fileReplacer.replaceInFile(argv[1], argv[2], argv[3]);
    return 0;
}
