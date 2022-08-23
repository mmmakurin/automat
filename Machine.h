#pragma once
#include "SnackSlot.h"
class Machine
{
public:
    //конструктор
    Machine(int slotCount);
    int getEmptySlotsCount() const;
    void addSlot(SnackSlot* snackSlot);


private:
    int allSlots;
    int freeSlots;
};

