#pragma once
#include "Snack.h"
using namespace snack;
class SnackSlot
{
public:
    //�����������
    SnackSlot(int a);
    //������� ���������� 
    void addSnack(Snack* snack);
private:
    int countSnacks;
    int countFreespace;
};

