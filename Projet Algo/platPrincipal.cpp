// Fichier cpp
#include <iostream>
#include "platPrincipal.hpp"
#include<string>


//constrcuteurs par defaut
PlatPrincipal::PlatPrincipal(){
}
//destrcuteur par defaut
PlatPrincipal::~PlatPrincipal(){
}

// Implémentation du constructeur de PlatPrincipal
PlatPrincipal::PlatPrincipal(std::string typePlatPrincipal, std::string accompagnementPlatPrincipal)
    : Plat(0, "", "", "", 0.0, 0), // Initialisez les valeurs de la classe de base (Plat) comme nécessaire
      typePlatPrincipal(typePlatPrincipal),
      accompagnementPlatPrincipal(accompagnementPlatPrincipal) {}

// Getters de tous les attributs privés du Plat Principal
std::string PlatPrincipal::getTypePlatPrincipal() const {
    return typePlatPrincipal;
}

std::string PlatPrincipal::getAccompagnementPlatPrincipal() const {
    return accompagnementPlatPrincipal;
}

// Setters des attributs privés du Plat Principal
void PlatPrincipal::setTypePlatPrincipal(std :: string _typePlatPrincipal) {
    typePlatPrincipal = _typePlatPrincipal;
}

void PlatPrincipal::setAccompagnementPlatPrincipal(std :: string _accompagnementPlatPrincipal) {
    accompagnementPlatPrincipal = _accompagnementPlatPrincipal;
}

// Implémentation de la méthode pour copier les informations
void PlatPrincipal::copierInfosPlat(const Plat& plat) {
    // Appeler les méthodes setters de PlatPrincipal avec les valeurs appropriées de Plat
    setNomPlat(plat.getNomPlat());
    setPrixPlat(plat.getPrixPlat());
    setDescriptionPlat(plat.getDescriptionPlat());
    setTypePlat(plat.getTypePlat());
    // Ajoutez d'autres attributs au besoin
}

// Autres méthodes de la classe PlatPrincipal
void PlatPrincipal::afficherPlatPrincipal() const {
    // Afficher les informations spécifiques à PlatPrincipal
    std::cout << "Type de plat principal : " << typePlatPrincipal << std::endl;
    std::cout << "Accompagnement du plat principal : " << accompagnementPlatPrincipal << std::endl;
    // Appeler la méthode afficherPlat de la classe Plat pour afficher les informations de base
    afficherPlat();
}
