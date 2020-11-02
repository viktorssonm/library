#include <iostream>
#include "book.h"
#include "patron.h"
#include "library.h"

int main()
{
    Library lib;
    std::cout << "Welcome the the library \n";

    Book b1{"4-2-1-x", "Test book 1", "Anders Andersson", "2020-01-01", Genre::fiction};
    Book b2{"4-3-1-x", "Test book 2", "Per Andersson", "2019-01-01", Genre::children};
    Book b3{"4-4-1-x", "Test book 3", "Ola Andersson", "1988-01-01", Genre::nonficiton};
    Book b4{"4-2-8-x", "Test book 4", "Nils Andersson", "1950-22-01", Genre::periodical};
    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);
    lib.addBook(b4);
    Patron p1{"magnusv", 1};
    Patron p2{"mikea", 2};
    p2.setFee(10);
    Patron p3{"gustavs", 3};
    Patron p4{"gustavs", 3};
    p4.setFee(10);
    Patron p5{"gustavs", 3};
    lib.addPatron(p1);
    lib.addPatron(p2);
    lib.addPatron(p3);
    lib.checkoutBook(b1, p1);

    return 0;
}
