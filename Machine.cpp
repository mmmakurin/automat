#include "Machine.h"

Machine::Machine(int slotCount)
{
    allSlots = slotCount;
    freeSlots = slotCount;
}

int Machine::getEmptySlotsCount() const
{
    return freeSlots;
}

void Machine::addSlot(SnackSlot* snackSlot)
{
    freeSlots--;
    
}
