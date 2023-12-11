// Fichier cpp
#include <iostream>
#include "entree.hpp"
#include<string>

//initialisation du constructeur 
Entree::Entree(int idEntree, std::string typeEntree, std::string portionEntree) : idEntree(idEntree), typeEntree(typeEntree), portionEntree(portionEntree){}


// Getters de tous les attributs privés d'Entree
int Entree::getIdEntree() const {
    return idEntree;
}

std::string Entree::getTypeEntree() const {
    return typeEntree;
}

std::string Entree::getPortionEntree() const {
    return portionEntree;
}

// Setters
void Entree::setIdEntree(int _idEntree) {
    idEntree = _idEntree;
}

void Entree::setTypeEntree(std :: string _typeEntree) {
    typeEntree = _typeEntree;
}

void Entree::setPortionEntree(std :: string _portionEntree) {
    portionEntree = _portionEntree;
}

// methode pour afficher entrées
void Entree::afficherEntree() const {
    std::cout << "Type entrée : " << typeEntree << std::endl;
}
