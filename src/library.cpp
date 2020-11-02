#include "library.h"
#include <algorithm>

void Library::addBook(const Book &book)
{
    books_.push_back(book);
}

void Library::addPatron(const Patron &patron)
{

    patrons_.push_back(patron);
}
void Library::checkoutBook(Book &book, Patron &patron)
{
    auto it = std::find(patrons_.begin(), patrons_.end(), patron);
    if (it == patrons_.end())
    {
        throw std::logic_error("That patron is not in the register");
    }
    else
    {
        if (patron.fee() <= 0)
        {
            book.checkOutBook();
            transactions_.push_back(Transaction{book, patron, "2020-11-02"});
        }
        else
        {
            throw std::logic_error("That patron owes a fee");
        }
    }
}

std::vector<std::string> Library::patronsWithFee()
{
    std::vector<std::string> result{};

    for (Patron p : patrons_)
    {
        if (p.fee() > 0)
        {
            result.push_back(p.username());
        }
    }
    return result;
}