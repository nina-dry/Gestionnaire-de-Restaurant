#include <string>
#include <iostream>

#include "platPrincipal.hpp"


//Constructeurs
PlatPrincipal::PlatPrincipal(){}
PlatPrincipal::PlatPrincipal(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typePlatPrincipal, std::string accompagnementPlatPrincipal)
    : Plat(idPlat, nomPlat, descriptionPlat, typePlat, prixPlat, tempsPrepPlat), typePlatPrincipal(typePlatPrincipal), accompagnementPlatPrincipal(accompagnementPlatPrincipal) {}

//Destructeur
PlatPrincipal::~PlatPrincipal(){}


//Getters pour attributs privés
std::string PlatPrincipal::getTypePlatPrincipal() const {
    return typePlatPrincipal;
}
std::string PlatPrincipal::getAccompagnementPlatPrincipal() const {
    return accompagnementPlatPrincipal;
}

//Setters pour attributs privés
void PlatPrincipal::setTypePlatPrincipal(std :: string _typePlatPrincipal) {
    typePlatPrincipal = _typePlatPrincipal;
}
void PlatPrincipal::setAccompagnementPlatPrincipal(std :: string _accompagnementPlatPrincipal) {
    accompagnementPlatPrincipal = _accompagnementPlatPrincipal;
}


//Afficher les donnees des plats principaux
void PlatPrincipal::afficherPlat() {
    //Afficher informations de plat 
    Plat::afficherPlat();
    // Afficher les informations spécifiques à PlatPrincipal
    std::cout << "Type de plat principal : " << typePlatPrincipal << std::endl;
    std::cout << "Accompagnement du plat principal : " << accompagnementPlatPrincipal << std::endl;
}