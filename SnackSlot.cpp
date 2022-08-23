#include "SnackSlot.h"
using namespace snack;

SnackSlot::SnackSlot(int a)
{
    countFreespace = a;
}

void SnackSlot::addSnack(Snack* snack)
{
    countSnacks + 1;
    countFreespace - 1;
}
