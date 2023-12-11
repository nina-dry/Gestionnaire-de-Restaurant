
// Fichier cpp
#include <iostream>
#include "Dessert.hpp"

// Implémentation du constructeur dessert

Dessert::Dessert(int idDessert, std::string TypeDessert,std::string PortionDessert)
    : idPDessert(idDessert), TypeDessert(TypeDessert), PortionDessert(PortionDessert) {}


// Implémentation de la méthode publique



void TypeDessert::TypeDessert(std::string TypeDessert) {
    TypeDessert = TypeDessert;
}

// Implémentation des getters
int Dessert::Dessert() const {
    return idDessert;
}

std::string Dessert::getTypeDessert() const {
    return TypeDessert;
}

std::string PortionDessert::getPortionDessert() const {
    return PortionDessert;

} 
// Implémentation des setters

void dessert::setIddessert(int _idDessert) {
    idPDessert = _idDessert;
}
void Dessert::setTypeDessert(std::string _TypeDessert) {
    TypeDessert = _TypeDessert;
}

void Dessert::setPortionDessert(std::string _PortionDessert) {
    PortionDessert= _PortionDessert;
}



// Affichage des données des PlatPrincipal
void TypeDessert::TypeDessert() const {
    std::cout << "Type du dessert : " << TypeDessert() << std::endl;
}