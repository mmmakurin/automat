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
    SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
    slot->addSnack(bounty); //��������� �������� � ����
    slot->addSnack(snickers);
    Machine* machine = new Machine(2 /*���������� ������ ��� ������*/);
    machine->addSlot(slot); // �������� ���� ������� � �������

    cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
    delete machine;
    delete slot;
    delete snickers;
    delete bounty;
}