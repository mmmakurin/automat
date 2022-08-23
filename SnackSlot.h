#pragma once
#include "Snack.h"
using namespace snack;
class SnackSlot
{
public:
    //конструктор
    SnackSlot(int a);
    //функция добавления 
    void addSnack(Snack* snack);
private:
    int countSnacks;
    int countFreespace;
};

