#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileReplacer {
public:
    FileReplacer();
    ~FileReplacer();
    void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2);

private:
    FileReplacer(const FileReplacer& other);
    FileReplacer& operator=(const FileReplacer& other);
};

#endif // FILEREPLACER_HPP
