#pragma once
#include <string>

class Patron
{
public:
    Patron(std::string username, int libraryCardNumber) : userName_(username), libraryCardNumber_(libraryCardNumber){};
    std::string username() { return userName_; };
    int libraryCardNumber() { return libraryCardNumber_; };
    int fee() { return fee_; };
    void setFee(int fee);

private:
    const std::string userName_;
    const int libraryCardNumber_;
    int fee_{0};
};