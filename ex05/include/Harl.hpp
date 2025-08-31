//
// Created by tjooris on 8/25/25.
//

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Harl();
    ~Harl();
    Harl(const Harl& other);
    Harl& operator=(const Harl& other);
    void complain(const std::string& level);
};

#endif // HARL_HPP
