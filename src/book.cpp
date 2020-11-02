#include "book.h"

bool operator==(const Book &lhs, const Book &rhs)
{
    return lhs.ISBN_ == rhs.ISBN_;
}

bool operator!=(const Book &lhs, const Book &rhs)
{
    return lhs.ISBN_ != rhs.ISBN_;
}

std::ostream &operator<<(std::ostream &os, const Book &book)
{
    os << book.title_ << "\n"
       << book.author_ << "\n"
       << book.ISBN_ << "\n";
    return os;
}

void Book::checkInBook()
{
    if (isCheckedOut_)
    {
        isCheckedOut_ = false;
    }
    else
    {
        throw std::domain_error("Trying to checkin already in the library.");
    }
}

void Book::checkOutBook()
{
    if (!isCheckedOut_)
    {
        isCheckedOut_ = true;
    }
    else
    {
        throw std::domain_error("This book is allready checkout");
    }
}

std::string Book::verifyISBN(const std::string &isbn)
{
    // Simple regex for validating example ISBN to be in form n-n-n-x where n is integer and x is digit / or letter.
    const std::regex simpleISBNregex{"(\\d-\\d-\\d-\\w|\\d)"};
    if (!std::regex_match(isbn, simpleISBNregex))
    {
        throw std::invalid_argument("Invalid ISBN code.");
    };
    return isbn;
}
