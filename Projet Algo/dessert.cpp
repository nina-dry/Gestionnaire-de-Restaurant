
// Fichier cpp
#include <iostream>
#include "dessert.hpp"
#include <string>

//constrcuteurs par defaut
Dessert::Dessert(){
}
//destrcuteur par defaut
Dessert::~Dessert(){
}

// Implémentation du constructeur Dessert
Dessert::Dessert(std::string typeDessert, std::string PortionDessert)
    : Plat(0, "", "", "", 0.0, 0), typeDessert(typeDessert), portionDessert(portionDessert) {}



// Implémentation des getters
std::string Dessert::getTypeDessert() const {
    return typeDessert;
}

std::string Dessert::getPortionDessert() const {
    return portionDessert;
} 

//Setters de tous les attributs privés de boisson
void Dessert::setTypeDessert(std::string _typeDessert) {
    typeDessert = _typeDessert;
}

void Dessert::setPortionDessert(std::string _portionDessert) {
    portionDessert = _portionDessert;
}

// Implémentation de la méthode pour copier les informations de la classe plat dans la classe entrée
void Dessert::copierInfosPlat(const Plat& plat) {
    // Appeler les méthodes setters de PlatPrincipal avec les valeurs appropriées de Plat
    setNomPlat(plat.getNomPlat());
    setPrixPlat(plat.getPrixPlat());
    setDescriptionPlat(plat.getDescriptionPlat());
    setTypePlat(plat.getTypePlat());
}

// methode pour afficher dessert
void Dessert::afficherDessert() const {
    std::cout << "Type de Dessert : " << typeDessert << std::endl;
    std::cout << "Portion du dessert : " << portionDessert << std::endl;
    //appeler la méthode afficher plat pour avoir tous les autres attributs communs
    afficherPlat();
}