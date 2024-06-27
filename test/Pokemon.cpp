#include <iostream>
#include <list>
using namespace std;
#include "Attaque.cpp"

class Pokemon {
private:
    int hp;
    int xp;
    int level;
    string name;
    string type;
    //Faire une class Attaque
    list<Attaque> attaques;


public:
    // Accesseurs
    int GetHp();
    int GetXp();
    int GetLvl();
    string GetName();
    string GetType();
    list<Attaque> GetAttaques();
    // Mutateurs
    void SetHp(int newHp);
    void SetXp(int newXp);
    void SetLvl(int newLvl);
    void SetName(string newName);
    void SetType(string newType);
    void SetAttaques(list<Attaque> newAttaques);
    // Autres Méthodes
    void attaquer(Attaque attaque, Pokemon adversaire);
    // Constructeur
    Pokemon(int hp, int xp, int lvl, string name, string type, list<Attaque> attaques);
};

// Definition du constructeur
Pokemon::Pokemon(int hp, int xp, int lvl, string name, string type, list<Attaque> attaques)
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


list<Attaque> Pokemon::GetAttaques()
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

void Pokemon::SetAttaques(list<Attaque> newAttaques)
{   
    this->attaques = newAttaques;
}

// Autres Méthodes

void Pokemon::attaquer(Attaque attaque, Pokemon adversaire){
    adversaire.SetHp(adversaire.GetHp() - attaque.GetPuissance());
}