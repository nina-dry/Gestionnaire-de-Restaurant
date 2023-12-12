// Fichier cpp
#include <iostream>
#include "plat.hpp"
#include<string>

//initialisation du constructeur 

Plat::Plat(int idPlat, std :: string nomPlat, std :: string descriptionPlat, std :: string typePlat, double prixPlat, int tempsPrepPlat) : idPlat(idPlat), nomPlat(nomPlat), descriptionPlat(descriptionPlat), typePlat(typePlat), prixPlat(prixPlat), tempsPrepPlat(tempsPrepPlat) {}

//constructeur par défaut
Plat::Plat() {
    // Initialiser les attributs à des valeurs par défaut si nécessaire
    idPlat = 0;
    nomPlat = "";
    descriptionPlat = "";
    typePlat = "";
    prixPlat = 0.0;
    tempsPrepPlat = 0;
}

// Getters de tous les attributs privés de Plat
int Plat::getIdPlat() const {
    return idPlat;
}

std::string Plat::getNomPlat() const {
    return nomPlat;
}

std::string Plat::getDescriptionPlat() const {
    return descriptionPlat;
}

std::string Plat::getTypePlat() const {
    return typePlat;
}

double Plat::getPrixPlat() const {
    return prixPlat;
}

int Plat::getTempsPrepPlat() const {
    return tempsPrepPlat;
}

// Setters
void Plat::setIdPlat(int _idPlat) {
    idPlat = _idPlat;
}

void Plat::setNomPlat(std :: string _nomPlat) {
    nomPlat = _nomPlat;
}

void Plat::setDescriptionPlat(std :: string _descriptionPlat) {
    descriptionPlat = _descriptionPlat;
}

void Plat::setTypePlat(std :: string _typePlat) {
    typePlat = _typePlat;
}

void Plat::setPrixPlat(double _prixPlat) {
    prixPlat = _prixPlat;
}

void Plat::setTempsPrepPlat(int _tempsPrepPlat) {
    tempsPrepPlat = _tempsPrepPlat;
}

// methode pour afficher les  attributs des plats
void Plat::afficherPlat() const {
    std::cout << "Nom du Plat : " << nomPlat << std::endl;
    std::cout << "Prix du Plat : " << prixPlat << std::endl;
    std::cout << "Description du plat : " << getDescriptionPlat() << std::endl;
    std::cout << "Type du plat : " << getTypePlat() << std::endl;
}
