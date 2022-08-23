#include "Snack.h"
#include "SnackSlot.h"
#include "Machine.h"
#include <iostream>
using namespace std;
using namespace snack;

int main()
{
    Snack* bounty = new Snack("Bounty");
    Snack* snickers = new Snack("Snickers");
    SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаютс€ в слот*/);
    slot->addSnack(bounty); //ƒобавл€ем батончик в слот
    slot->addSnack(snickers);
    Machine* machine = new Machine(2 /* оличество слотов дл€ снеков*/);
    machine->addSlot(slot); // ѕомещаем слот обратно в аппарат

    cout << machine->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков
    delete machine;
    delete slot;
    delete snickers;
    delete bounty;
}