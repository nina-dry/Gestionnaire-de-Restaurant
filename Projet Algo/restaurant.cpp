#include <string>
#include <iostream>

#include "Restaurant.hpp"


//Constructeur
Restaurant::Restaurant(){};
Restaurant::Restaurant(int idRestaurant, std::string nomRestaurant, std::string adresse, int codePostal, std::string ville, std::string typeRestaurant, std::vector<Plat> listePlats) :
                       idRestaurant(idRestaurant), nomRestaurant(nomRestaurant), adresse(adresse), ville(ville), codePostal(codePostal), typeRestaurant(typeRestaurant), listePlats(listePlats) {}


//Getters pour les attributs privés
int Restaurant::getIdRestaurant() const {
    return idRestaurant;
}
std::string Restaurant::getNomRestaurant() const{
    return nomRestaurant;
}
std::string Restaurant::getAdresse() const{
    return adresse;
}
int Restaurant::getCodePostal() const{
    return codePostal;
}
std::string Restaurant::getVille() const{
    return ville;
}
std::string Restaurant::getTypeRestaurant() const{
    return typeRestaurant;
}


//Setters pour attributs privés
void Restaurant::setIdRestaurant(int _idRestaurant){
    idRestaurant = _idRestaurant;
}
void Restaurant::setNomRestaurant(std::string _nomRestaurant){
    nomRestaurant = _nomRestaurant;
}
void Restaurant::setAdresse(std::string _adresse){
    adresse = _adresse;
}
void Restaurant::setCodePostal(int _codePostal){
    codePostal = _codePostal;
}
void Restaurant::setVille(std::string _ville){
    ville = _ville;
}
void Restaurant::setTypeRestaurant(std::string _typeRestaurant){
    typeRestaurant = _typeRestaurant;
}


//Ajouter un plat au restaurant
void Restaurant::ajouterPlat(const Plat& plat) {
    listePlats.push_back(plat);
}

//Afficher les données du restaurant
void Restaurant::afficherRestaurant() const{
    std::cout << "Nom du restaurant : " << nomRestaurant << std::endl;
    std::cout << "Adresse : " << adresse << " " << codePostal << " " << ville << std::endl;
    std::cout << "Type de Restaurant : " << typeRestaurant << std::endl;
    std::cout << "Plats du restaurant : ";
    for (const Plat& plat : listePlats) {
        std::cout << plat.getNomPlat() << ", ";
    }
    std::cout << std::endl;
}