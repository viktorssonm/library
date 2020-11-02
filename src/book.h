#pragma once
#include <string>
#include <regex>
#include <iostream>

class Book
{
public:
    Book(std::string isbn,
         std::string title,
         std::string author,
         std::string copyright_date)
        : ISBN_(verifyISBN(isbn)),
          title_(title),
          author_(author),
          copyright_date_(copyright_date),
          isCheckedOut_(false){};
    std::string ISBN() const { return ISBN_; };
    std::string title() const { return title_; };
    std::string author() const { return author_; };
    std::string copyright_Date() const { return copyright_date_; };
    void checkInBook();
    void checkOutBook();
    friend bool operator==(const Book &lhs, const Book &rhs);
    friend bool operator!=(const Book &lhs, const Book &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Book &book);

private:
    std::string ISBN_;
    std::string title_;
    std::string author_;
    std::string copyright_date_;
    bool isCheckedOut_;

    std::string verifyISBN(const std::string &isbn);
};

// ([12]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[12]\d|3[01])) // date regex