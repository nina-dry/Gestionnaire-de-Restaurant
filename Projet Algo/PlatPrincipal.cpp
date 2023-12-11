

// Fichier cpp
#include <iostream>
#include "PlatPrincipal.hpp"

// Implémentation du constructeur PlatPrincipal

PlatPrincipal::PlatPrincipal(int idPlatPrincipal, std::string TypePlatPrincipal,std::string AccompagnementPlatPrincipal)
    : idPlatPrincipal(idPlatPrincipal), TypePlatPrincipal(TypePlatPrincipal), AccompagnementPlatPrincipal(AccompagnementPlatPrincipal) {}


// Implémentation de la méthode publique

void PlatPrincipal::idPlatPrincipal(std::string TypePlatPrincipal) {
    TypePlatPrincipal = TypePlatPrincipal;
}

void AccompagnementPlatPrincipal::AccompagnementPlatPrincipal(std::string AccompagnementPlatPrincipal) {
    AccompagnementPlatPrincipal = AccompagnementPlatPrincipal;
}

// Implémentation des getters
int PlatPrincipal::getPlatPrincipal() const {
    return idPlatPrincipal;
}

std::string PlatPrincipal::getTypePlatPrincipal() const {
    return TypePlatPrincipal;
}

std::string AccompagnementPlatPrincipal::getAccompagnementPlatPrincipal() const {
    return AccompagnementPlatPrincipal;

} 
// Implémentation des setters

void PlatPrincipal::setIdPlatPrincipal(int _idPlatPrincipal) {
    idPlatPrincipal = _idPlatPPrincipal;
}
void PlatPrincipal::setTypePlatPrincipal(std::string _TypePlatPrincipal) {
    TypePlatPrincipal = _TypePlatPrincipal;
}

void PlatPrincipal::setAccompagnementPlatPrincipal(std::string _AccompagnementPlatPrincipal) {
    AccompagnementPlatPrincipal= _AccompagnementPlatPrincipal;
}



// Affichage des données des PlatPrincipal
void TypePlatPrincipal::TypePlatPrincipal() const {
    std::cout << "Type du palt : " << TypePlatPrincipal() << std::endl;
}

void AccompagnementPlatPrincipal::AccompagnementPlatPrincipal() const {
    std::cout << "Accompagnement du palt : " << AccompagnementPlatPrincipal() << std::endl;
} 