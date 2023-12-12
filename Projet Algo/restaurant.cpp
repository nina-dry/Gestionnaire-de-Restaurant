// Fichier cpp
#include <iostream>
#include "restaurant.hpp"


// Implémentation du constructeur Restaurant
Restaurant::Restaurant(int idRestaurant, std::string nomRestaurant, std::string adresse, std::string ville, int codePostal, std::vector<Plat> plats, std::string type)
    : idRestaurant(idRestaurant), nomRestaurant(nomRestaurant), adresse(adresse), ville(ville), codePostal(codePostal), plats(plats), type(type) {}

// Implémentation des getters
int Restaurant::getIdRestaurant() const {
    return idRestaurant;
}

int Restaurant::getCodePostal() const {
    return codePostal;
}

std::string Restaurant::getNomRestaurant() const {
    return nomRestaurant;
}

std::string Restaurant::getAdresse() const {
    return adresse;
} 

std::string Restaurant::getVille() const {
    return ville;
} 

std::string Restaurant::getType() const {
    return type;

} 

// Implémentation des setters
void Restaurant::setIdRestaurant(int _idRestaurant) {
    idRestaurant = _idRestaurant;
}
void Restaurant::setNomRestaurant(std::string _nomRestaurant) {
    nomRestaurant = _nomRestaurant;
}

void Restaurant::setAdresse(std::string _adresse) {
    adresse= _adresse;
}

void Restaurant::setVille(std::string _ville) {
    ville= _ville;
}

 void Restaurant::setCodePostal(int _codePostal) {
    codePostal= _codePostal;
}

void Restaurant::setType(std::string _type) {
    type= _type;
}

// Méthode pour ajouter un plat au restaurant
void Restaurant::ajouterPlat(const Plat& plat) {
    plats.push_back(plat);
}


// Affichage du Restaurant 
void Restaurant::afficherRestaurant() const {
    std::cout << "Nom du restaurant : " << nomRestaurant << std::endl;
    std::cout << "Adresse du restaurant : " << adresse << std::endl;
    std::cout << "Type du restaurant : " << type << std::endl;
    std::cout << "Plats du restaurant : ";

    for (const Plat& plat : plats) {
        std::cout << plat.getNomPlat() << ", ";
    }

    std::cout << std::endl;
}


