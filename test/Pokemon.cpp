#include <iostream>
using namespace std;


class Pokemon {
private:
    int hp;
    int xp;
    int level;
    string name;
    //Faire une class Type
    string type;
    //Faire une class Attaque
    string attaques;

public:
    // Accesseurs
    int GetHp();
    int GetXp();
    int GetLvl();
    string GetName();
    string GetType();
    string GetAttaques();
    // Mutateurs
    void SetHp(int newHp);
    void SetXp(int newXp);
    void SetLvl(int newLvl);
    void SetName(string newName);
    void SetType(string newType);
    void SetAttaques(string newAttaques);
    // Constructeur
    Pokemon(int hp, int xp, int lvl, string name, string type, string attaques);
};

// Definition du constructeur
Pokemon::Pokemon(int hp, int xp, int lvl, string name, string type, string attaques)
{
    this->hp = hp;
    this->xp = xp;
    this->level = lvl;
    this->name = name;
    this->type = type;
    this->attaques = attaques;
}

// Definition des méthodes
// Accesseurs

int Pokemon::GetHp()
{
    return this->hp;
}

int Pokemon::GetXp()
{
    return this->xp;
}

int Pokemon::GetLvl()
{
    return this->level;
}

string Pokemon::GetName()
{
    return this->name;
}

string Pokemon::GetType()
{
    return this->type;
}

bool Pokemon::GetKo()
{
    return this->estKo;
}

string Pokemon::GetAttaques()
{
    return this->attaques;
}

//Mutateurs

void Pokemon::SetHp(int newHp)
{   
    this->hp = newHp;
}

void Pokemon::SetXp(int newXp)
{   
    this->xp = newXp;
}

void Pokemon::SetLvl(int newLvl)
{   
    this->level = newLvl;
}

void Pokemon::SetName(string newName)
{   
    this->name = newName;
}

void Pokemon::SetType(string newType)
{   
    this->type = newType;
}

void Pokemon::SetKo(bool newKo)
{   
    this->estKo = newKo;
}

void Pokemon::SetAttaques(string newAttaques)
{   
    this->attaques = newAttaques;
}