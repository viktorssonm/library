#pragma once
#include <string>

class Patron
{
public:
    Patron(std::string username, int libraryCardNumber) : userName_(username), libraryCardNumber_(libraryCardNumber){};
    std::string username() const { return userName_; };
    int libraryCardNumber() const { return libraryCardNumber_; };
    int fee() const { return fee_; };
    void setFee(int fee);
    friend bool operator==(const Patron &lhs, const Patron &rhs) { return lhs.userName_ == rhs.userName_; };

private:
    const std::string userName_;
    const int libraryCardNumber_;
    int fee_{0};
};

bool owesFee(Patron patron);