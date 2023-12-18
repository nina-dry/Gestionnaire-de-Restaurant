#include<string>
#include <iostream>

#include "plat.hpp"
#include "commande.hpp"


//Constructeurs 
Plat::Plat() {};
Plat::Plat(int idPlat, std :: string nomPlat, std :: string descriptionPlat, std :: string typePlat, double prixPlat, int tempsPrepPlat) : 
           idPlat(idPlat), nomPlat(nomPlat), descriptionPlat(descriptionPlat), typePlat(typePlat), prixPlat(prixPlat), tempsPrepPlat(tempsPrepPlat) {}
//Destructeur virtuel
Plat::~Plat(){}


//Getters pour attributs privés
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


//Setters pour attributs privés
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


//Afficher les donnees des plats 
void Plat::afficherPlat() {
    std::cout << "Nom du Plat : " << nomPlat << std::endl;
    std::cout << "Prix du Plat : " << prixPlat << std::endl;
    std::cout << "Description du plat : " << getDescriptionPlat() << std::endl;
}