

// Fichier cpp
#include <iostream>
#include "Restaurant.hpp"

// Implémentation du constructeur Restaurant

Restaurant::Restaurant(int idRestaurant, std::string NomRestaurant, std::string adresse, std::string ville, int cp, std::string plat, std::string Type )
    : idRestaurant(idRestaurant), NomRestaurant(NomRestaurant), adresse(adresse), ville(ville), cp(cp), plat(plat), Type(Type) {}


// Implémentation de la méthode publique

void Restaurant::NomRestaurant(std::string NomRestaurant) {
    NomRestaurant = NomRestaurant;
}

void Restaurant ::adresse(std::string adresse) {
    adresse = adresse;
}
void Restaurant ::Type(std::string Type) {
    Type = Type;
}
void Restaurant ::plat(std::string plat) {
    plat = plat;
}

// Implémentation des getters
int Restaurant::getRestaurant() const {
    return idRestaurant;
}
int Restaurant::getcp() const {
    return cp;
}

std::string Restaurant::getNomRestaurant() const {
    return NomRestaurant;
}

std::string adresse::getAdresse() const {
    return adresse;
} 

std::string adresse::getVille() const {
    return ville;
} 
std::string adresse::getPlat() const {
    return Plat;

} 
std::string adresse::getType() const {
    return Type;

} 
// Implémentation des setters

void Restaurant::setIdRestaurant(int _idRestaurant) {
    idRestaurant = _idRestaurant;
}
void Restaurant::setNomRestaurant(std::string _NomRestaurant) {
    NomRestaurant = _NomRestaurant;
}

void Restaurant::setadresse(std::string _adresse) {
    adresse= _adresse;
}

void Restaurant::setVille(std::string _ville) {
    ville= _ville;
}
 void Restaurant::setcp(std::string _cp) {
    cp+= _cp;
}
void Restaurant::setPlat(std::string _plat) {
    plat= _plat;
}
void Restaurant::setype(std::string _type) {
    type= _type;
}


// Affichage des données des clients
void NomRestaurant::NomRestaurant() const {
    std::cout << "Nom du restaurant : " << NomRestaurant() << std::endl;
}

void adresse::adresse() const {
    std::cout << "Adresse du restaurant : " << Adresse() << std::endl;
} 
void type::type() const {
    std::cout << "type du restaurant : " << type() << std::endl;
}

void plat::plat() const {
    std::cout << "plats du restaurant : " << plat() << std::endl;
} 