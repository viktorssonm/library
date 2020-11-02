#pragma once
#include <vector>
#include "book.h"
#include "patron.h"

struct Transaction
{
    Book book;
    Patron patron;
    std::string date;
};

class Library
{
public:
    void addBook(const Book &book);
    void addPatron(const Patron &patron);
    void checkoutBook(Book &book, Patron &patron);

private:
    std::vector<Book> books_{};
    std::vector<Patron> patrons_{};
    std::vector<Transaction> transactions_{};
};