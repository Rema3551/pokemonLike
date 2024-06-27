#include <iostream>
#include <list>
using namespace std;
#include "Attaque.cpp"

class Pokemon {
private:
    int hp;
    int attack;
    int defense;
    int atk_spe;
    int def_spe;
    int speed;
    string spe_cap;
    int xp; 
    int level;
    int catching_rate;
    string name;
    string type;
    //Faire une class Attaque
    list<Attaque> attaques;


public:
    // Accesseurs
    int GetHp();
    int GetAttack();
    int GetDefense();
    int GetAtk_spe();
    int GetDef_spe();
    int GetSpeed();
    string GetSpe_cap();
    int GetXp();
    int GetLvl();
    int GetCatching_rate();
    string GetName();
    string GetType();
    list<Attaque> GetAttaques();
    // Mutateurs
    void SetHp(int newHp);
    void SetAttack(int newAttack);
    void SetDefense(int newDefense);
    void SetAtk_spe(int newAtk_spe);
    void SetDef_spe(int newDef_spe);
    void SetSpeed(int newSpeed);
    void SetSpe_cap(int newSpe_cap);
    void SetXp(int newXp);
    void SetLvl(int newLvl);
    void SetCatching_rate(int newCatching_rate);
    void SetName(string newName);
    void SetType(string newType);
    void SetAttaques(list<Attaque> newAttaques);
    // Autres Méthodes
    void attaquer(Attaque attaque, Pokemon adversaire);
    // Constructeur
    Pokemon(int baseHp,int baseAttack,int baseDefense,int baseAtk_spe,int baseDef_spe,int baseSpeed,list<Special_c> Spe_cap,int catching_rate, string name, string type, list<Attaque> attaques);
};

// Definition du constructeur
Pokemon::Pokemon(int baseHp,int baseAttack,int baseDefense,int baseAtk_spe,int baseDef_spe,int baseSpeed,list<Special_c> Spe_cap,int catching_rate, string name, string type, list<Attaque> attaques)
{
    this->hp = baseHp;
    this->attack = baseAttack;
    this->defense = baseDefense;
    this->atk_spe = baseAtk_spe;
    this->def_spe = baseAtk_spe;
    this->speed = baseSpeed;
    this->catching_rate = catching_rate;
    this->name = name;
    this->type = type;
}

// Definition des méthodes
// Accesseurs

int Pokemon::GetHp()
{
    return this->hp;
}

int Pokemon::GetAttack()
{
    return this->attack;
}

int Pokemon::GetDefense()
{
    return this->defense;
}

int Pokemon::GetAtk_spe()
{
    return this->atk_spe;
}

int Pokemon::GetDef_spe()
{
    return this->def_spe;
}

int Pokemon::GetSpeed()
{
    return this->speed;
}

string Pokemon::GetSpe_cap()
{
    return this->spe_cap;
}

int Pokemon::GetXp()
{
    return this->xp;
}

int Pokemon::GetLvl()
{
    return this->level;
}

int Pokemon::GetCatching_rate()
{
    return this->catching_rate;
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

void Pokemon::SetAttack(int newAttaque)
{   
    this->attack = newAttaque;
}

void Pokemon::SetDefense(int newDefense)
{   
    this->defense = newDefense;
}

void Pokemon::SetAtk_spe(int newAtk_spe)
{   
    this->atk_spe = newAtk_spe;
}

void Pokemon::SetDef_spe(int newDef_spe)
{   
    this->def_spe = newDef_spe;
}

void Pokemon::SetSpeed(int newSpeed)
{   
    this->speed = newSpeed;
}

void Pokemon::SetSpe_cap(int newSpe_cap)
{   
    this->spe_cap = newSpe_cap;
}

void Pokemon::SetXp(int newXp)
{   
    this->xp = newXp;
}

void Pokemon::SetLvl(int newLvl)
{   
    this->level = newLvl;
}

void Pokemon::SetCatching_rate(int newCatching_rate)
{   
    this->catching_rate = newCatching_rate;
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
/*
void Pokemon::attaquer(Attaque attaque, Pokemon adversaire){
    adversaire.SetHp(adversaire.GetHp() - attaque.GetPuissance());
} 
*/
