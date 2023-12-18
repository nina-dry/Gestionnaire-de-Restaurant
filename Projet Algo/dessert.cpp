#include <string>
#include <iostream>

#include "dessert.hpp"


//Constrcuteurs
Dessert::Dessert(){}
Dessert::Dessert(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typeDessert, std::string portionDessert)
    : Plat(idPlat, nomPlat, descriptionPlat, typePlat, prixPlat, tempsPrepPlat), typeDessert(typeDessert), portionDessert(portionDessert) {}

//Destrcuteur
Dessert::~Dessert(){}


//Getters pour attributs privés
std::string Dessert::getTypeDessert() const {
    return typeDessert;
}
std::string Dessert::getPortionDessert() const {
    return portionDessert;
} 


//Setters pour attributs privés
void Dessert::setTypeDessert(std::string _typeDessert) {
    typeDessert = _typeDessert;
}
void Dessert::setPortionDessert(std::string _portionDessert) {
    portionDessert = _portionDessert;
}


//Afficher les donnees des desserts
void Dessert::afficherPlat() {
    //Afficher informations de plat 
    Plat::afficherPlat();
    // Afficher les informations spécifiques à Dessert
    std::cout << "Type de Dessert : " << typeDessert << std::endl;
    std::cout << "Portion du dessert : " << portionDessert << std::endl;
}