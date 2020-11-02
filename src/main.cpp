#include <iostream>
#include "book.h"
#include "patron.h"

int main()
{
    std::cout << "Welcome the the library \n";

    Book test{"5-4-5-x", "Flugornas Herre", "Anders Andersson", "2017-12-12", Genre::fiction};
    Book test1{test};
    Book test3{"5-4-9-x", "Flugornas Herre", "Anders Andersson", "2017-12-12", Genre::children};

    std::cout << test << std::endl;
    std::cout << test1 << std::endl;
    std::cout << test3 << std::endl;

    return 0;
}
