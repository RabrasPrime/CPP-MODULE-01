
#include "FileReplacer.hpp"
#include <iostream>

FileReplacer::FileReplacer() {}
FileReplacer::~FileReplacer() {}

void FileReplacer::replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    if (s1.empty()) {
        std::cerr << "Error: The string to be replaced cannot be empty." << std::endl;
        return;
    }

    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::string newLine;
        size_t pos = 0, prev = 0;
        while ((pos = line.find(s1, prev)) != std::string::npos) {
            newLine.append(line, prev, pos - prev);
            newLine.append(s2);
            prev = pos + s1.length();
        }
        newLine.append(line, prev, std::string::npos);
        outputFile << newLine << std::endl;
    }

    inputFile.close();
    outputFile.close();
}

FileReplacer::FileReplacer(const FileReplacer& other) {
    (void)other;
}

FileReplacer& FileReplacer::operator=(const FileReplacer& other) {
    (void)other;
    return *this;
}

