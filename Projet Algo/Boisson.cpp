// Fichier cpp
#include <iostream>
#include "Boisson.hpp"
#include<string>


//constrcuteurs par defaut
Boisson::Boisson(){
}
//destrcuteur par defaut
Boisson::~Boisson(){
}

// Implémentation du constructeur Boisson
Boisson::Boisson(std::string typeBoisson, std::string tailleBoisson)
    : Plat(0, "", "", "", 0.0, 0), typeBoisson(typeBoisson), tailleBoisson(tailleBoisson) {}


// Getters de tous les attributs privés de boisson
std::string Boisson::getTypeBoisson() const {
    return typeBoisson;
}

std::string Boisson::getTailleBoisson() const {
    return tailleBoisson;
}


//Setters de tous les attributs privés de boisson
void Boisson::setTypeBoisson(std::string _typeBoisson) {
    typeBoisson = _typeBoisson;
}

void Boisson::setTailleBoisson(std::string _tailleBoisson) {
    tailleBoisson= _tailleBoisson;
}

// Implémentation de la méthode pour copier les informations de la classe plat dans la classe entrée
void Boisson::copierInfosPlat(const Plat& plat) {
    // Appeler les méthodes setters de PlatPrincipal avec les valeurs appropriées de Plat
    setNomPlat(plat.getNomPlat());
    setPrixPlat(plat.getPrixPlat());
    setDescriptionPlat(plat.getDescriptionPlat());
    setTypePlat(plat.getTypePlat());
}


// methode pour afficher entrées
void Boisson::afficherBoisson() const {
    std::cout << "Type de Boisson : " << typeBoisson << std::endl;
    std::cout << "Taille de la Boisson : " << tailleBoisson << std::endl;
    //appeler la méthode afficher plat pour avoir tous les autres attributs communs
    afficherPlat();
}