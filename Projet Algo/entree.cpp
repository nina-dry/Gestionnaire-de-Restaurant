// Fichier cpp
#include <iostream>
#include "entree.hpp"
#include<string>


//constrcuteurs par defaut
Entree::Entree(){
}
//destrcuteur par defaut
Entree::~Entree(){
}

Entree::Entree(std::string typeEntree, std::string portionEntree)
    : Plat(0, "", "", "", 0.0, 0), typeEntree(typeEntree), portionEntree(portionEntree) {}

// Getters de tous les attributs privés d'Entree
std::string Entree::getTypeEntree() const {
    return typeEntree;
}

std::string Entree::getPortionEntree() const {
    return portionEntree;
}

// Setters des attributs privés de entree
void Entree::setTypeEntree(std :: string _typeEntree) {
    typeEntree = _typeEntree;
}

void Entree::setPortionEntree(std :: string _portionEntree) {
    portionEntree = _portionEntree;
}

// Implémentation de la méthode pour copier les informations de la classe plat dans la classe entrée
void Entree::copierInfosPlat(const Plat& plat) {
    // Appeler les méthodes setters de PlatPrincipal avec les valeurs appropriées de Plat
    setNomPlat(plat.getNomPlat());
    setPrixPlat(plat.getPrixPlat());
    setDescriptionPlat(plat.getDescriptionPlat());
    setTypePlat(plat.getTypePlat());
}

// methode pour afficher entrées
void Entree::afficherEntree() const {
    std::cout << "Type entrée : " << typeEntree << std::endl;
    //appeler la méthode afficher plat pour avoir tous les autres attributs communs
    afficherPlat();
}
