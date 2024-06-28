#include <iostream>
using namespace std;

class Attaque {
private:
    string type;
    int puissance;
    float precision;
    string specialisation;
    int pp;
public:
    // Accesseurs:
    string GetType();
    int GetPuissance();
    float GetPrecision();
    string GetSpecialisation();
    int GetPp();
    // Mutateurs:
    void SetType(string newType);
    void SetPuissance(int newPuissance);
    void SetPrecision(float newPrecision);
    void SetSpecialisation(string newSpecialisation);
    void SetPp(int pp);
    // Constructeur:
    Attaque(string type, int puissance, float precision, int pp);
};

// Definition du constructeur
Attaque::Attaque(string type, int puissance, float precision, int pp){

    this->type = type;
    this->puissance = puissance;
    this->precision = precision;

}

// Definition des méthodes

// Accesseurs

string Attaque::GetType(){
    return this->type;
}

int Attaque::GetPuissance(){
    return this->puissance;
}

float Attaque::GetPrecision(){
    return this->precision;
}

int Attaque::GetPp(){
    return this->pp;
}

// Mutateurs

void Attaque::SetType(string newType){
    this->type = newType;
}

void Attaque::SetPuissance(int newPuissance){
    this->puissance = newPuissance;
}

void Attaque::SetPrecision(float newPrecision){
    this->precision = newPrecision;
}

void Attaque::SetPp(int newPp){
    this->pp = newPp;
}

// Autres Méthodes