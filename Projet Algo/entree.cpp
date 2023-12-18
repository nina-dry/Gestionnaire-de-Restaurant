#include <string>
#include <iostream>

#include "entree.hpp"


//Constrcuteurs
Entree::Entree(){}
Entree::Entree(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typeEntree, std::string portionEntree)
    : Plat(idPlat, nomPlat, descriptionPlat, typePlat, prixPlat, tempsPrepPlat), typeEntree(typeEntree), portionEntree(portionEntree) {}

//Destrcuteur
Entree::~Entree(){}


//Getters pour attributs privés
std::string Entree::getTypeEntree() const {
    return typeEntree;
}
std::string Entree::getPortionEntree() const {
    return portionEntree;
}


//Setters pour attributs privés
void Entree::setTypeEntree(std :: string _typeEntree) {
    typeEntree = _typeEntree;
}
void Entree::setPortionEntree(std :: string _portionEntree) {
    portionEntree = _portionEntree;
}


//Afficher les donnees des entrees
void Entree::afficherPlat() {
    //Afficher informations de plat 
    Plat::afficherPlat();
    // Afficher les informations spécifiques à Entree
    std::cout << "Type entree : " << typeEntree << std::endl;
}