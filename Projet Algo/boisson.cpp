#include <string>
#include <iostream>

#include "Boisson.hpp"


//Constrcuteurs
Boisson::Boisson(){}
Boisson::Boisson(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typeBoisson, std::string tailleBoisson)
    : Plat(idPlat, nomPlat, descriptionPlat, typePlat, prixPlat, tempsPrepPlat), typeBoisson(typeBoisson), tailleBoisson(tailleBoisson) {}

//Destrcuteur
Boisson::~Boisson(){}


//Getter pour attributs privés
std::string Boisson::getTypeBoisson() const {
    return typeBoisson;
}
std::string Boisson::getTailleBoisson() const {
    return tailleBoisson;
}

//Setters pour attributs privés
void Boisson::setTypeBoisson(std::string _typeBoisson) {
    typeBoisson = _typeBoisson;
}
void Boisson::setTailleBoisson(std::string _tailleBoisson) {
    tailleBoisson= _tailleBoisson;
}


//Afficher les données des desserts
void Boisson::afficherPlat()  {
    //Afficher informations de plat 
    Plat::afficherPlat();
    // Afficher les informations spécifiques à Boisson
    std::cout << "Type de Boisson : " << typeBoisson << std::endl;
    std::cout << "Taille de la Boisson : " << tailleBoisson << std::endl;
}