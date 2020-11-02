#include "patron.h"

void Patron::setFee(int fee)
{
    fee_ += fee;
};

bool owesFee(Patron patron)
{
    return (patron.fee() > 0) ? true : false;
}