// Fichier cpp
#include <iostream>
#include "platPrincipal.hpp"
#include<string>

//initialisation du constructeur 
PlatPrincipal::PlatPrincipal(int idPlatPrincipal, std::string typePlatPrincipal, std::string accompagnementPlatPrincipal) : idPlatPrincipal(idPlatPrincipal), typePlatPrincipal(typePlatPrincipal), accompagnementPlatPrincipal(accompagnementPlatPrincipal){}


// Getters de tous les attributs privés du Plat Principal
int PlatPrincipal::getIdPlatPrincipal() const {
    return idPlatPrincipal;
}

std::string PlatPrincipal::getTypePlatPrincipal() const {
    return typePlatPrincipal;
}

std::string PlatPrincipal::getAccompagnementPlatPrincipal() const {
    return accompagnementPlatPrincipal;
}

// Setters des attributs 
void PlatPrincipal::setIdPlatPrincipal(int _idPlatPrincipal) {
    idPlatPrincipal = _idPlatPrincipal;
}

void PlatPrincipal::setTypePlatPrincipal(std :: string _typePlatPrincipal) {
    typePlatPrincipal = _typePlatPrincipal;
}

void PlatPrincipal::setAccompagnementPlatPrincipal(std :: string _accompagnementPlatPrincipal) {
    accompagnementPlatPrincipal = _accompagnementPlatPrincipal;
}

// methode pour afficher les attributs du plat principal
void PlatPrincipal::afficherPlatPrincipal() const {
    std::cout << "Type de plat principal : " << typePlatPrincipal << std::endl;
    std::cout << "Accompagnement du plat principal : " << accompagnementPlatPrincipal << std::endl;

}
