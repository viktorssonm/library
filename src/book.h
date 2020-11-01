#pragma once
#include <string>
#include <regex>

class Book
{
public:
    Book(std::string isbn, std::string title, std::string author, std::string copyright_date) : ISBN_(verifyISBN(isbn)), title_(title), author_(author), copyright_date_(copyright_date){};
    std::string getISBN() { return ISBN_; };
    std::string getTitle() { return title_; };
    std::string getAuthor() { return author_; };
    std::string getCopyright_date() { return copyright_date_; };
    void checkInBook();
    void checkOutBook();

private:
    std::string ISBN_;
    std::string title_;
    std::string author_;
    std::string copyright_date_;
    bool isCheckedOut_;

    static std::string verifyISBN(const std::string &isbn)
    {
        // Simple regex for validating example ISBN to be in form n-n-n-x where n is integer and x is digit / or letter.
        std::regex simpleISBNregex{"(\\d-\\d-\\d-\\w|\\d)"};
        if (!std::regex_match(isbn, simpleISBNregex))
        {
            throw std::invalid_argument("Invalid ISBN code.");
        };
        return isbn;
    }
};

// ([12]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[12]\d|3[01])) // date regex