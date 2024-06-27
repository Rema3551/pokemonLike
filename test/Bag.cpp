#include <iostream>
#include <list>
using namespace std;
#include "Healing.cpp"
#include "Pokeball.cpp"
#include "BattleItem.cpp"
#include "Berry.cpp"
#include "OtherItem.cpp"
#include "Disk.cpp"
#include "ValuableItem.cpp"
#include "KeyItem.cpp"



class Bag{
    list<Healing> healing;
    list<Pokeball> pokeballs;
    list<BattleItem> battleItem;
    list<Berry> berries;
    list<OtherItem> otherItems;
    list<Disk> disks;
    list<ValuableItem> valuableItems;
    list<KeyItem> keyItems;
};