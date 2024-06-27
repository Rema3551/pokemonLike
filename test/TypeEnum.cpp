#include <iostream>
#include <list>
using namespace std;

enum TypeEnum {
    PLANTE,
    TERRE,
    FEU,
    EAU,
    // AJOUTER LES AUTRES
};

class Type{
private:
    TypeEnum type;
    list<TypeEnum> strongAgainst;
    list<TypeEnum> weakAgainst;
public:
    bool isStrongAgainst(TypeEnum type, TypeEnum type2);
    bool isWeakAgains(TypeEnum type);
    bool isNeutralAgainst(TypeEnum type);

    Type(TypeEnum type, list<TypeEnum> strongAgainst,list<TypeEnum> weakAgainst);
};
Type::Type(TypeEnum type, list<TypeEnum> strongAgainst,list<TypeEnum> weakAgainst)
{
    this->type = type;
    this->strongAgainst = strongAgainst;
    this->weakAgainst = weakAgainst;
}

bool Type::isStrongAgainst(TypeEnum type, TypeEnum type2=None){
    
}

    fun isWeakAgainst(type: TypeEnum): Boolean = weakAgainst.contains(type)

    fun isNeutralAgainst(type: TypeEnum): Boolean = !isStrongAgainst(type) && !isWeakAgainst(type)

private fun test() {
    val typePlante = Type(
        type = TypeEnum.PLANTE,
        strongAgainst = listOf(TypeEnum.EAU, TypeEnum.TERRE),
        weakAgainst = listOf(TypeEnum.FEU)
    )

    typePlante.isStrongAgainst(TypeEnum.PLANTE)
    typePlante.isWeakAgainst(TypeEnum.TERRE)
    typePlante.isNeutralAgainst(TypeEnum.PLANTE)
}