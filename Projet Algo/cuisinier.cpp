#include <string>
#include <iostream>

#include "cuisinier.hpp"
#include "chef.hpp"


//Constructeur
Cuisinier::Cuisinier(){Plat plat;} //?????????????????
Cuisinier::Cuisinier(int idCuisinier, std::string nomCuisinier, std::string prenomCuisinier, int ageCuisinier, int anneeExpCuisinier, std::string specialite, int cmdCharge) : 
                     idCuisinier(idCuisinier), nomCuisinier(nomCuisinier), prenomCuisinier(prenomCuisinier), ageCuisinier(ageCuisinier), anneeExpCuisinier(anneeExpCuisinier), specialite(specialite), cmdCharge(cmdCharge){}


//Getter et Setter pour attributs privés
int Cuisinier::getIdCuisinier() const {
    return idCuisinier;
}

std::string Cuisinier::getNomCuisinier() const{
    return nomCuisinier;
}

std::string Cuisinier::getPrenomCuisinier() const{
    return prenomCuisinier;
}

void Cuisinier::setAgeCuisinier(int _ageCuisinier){
    ageCuisinier = _ageCuisinier;
}

void Cuisinier::setAnneeExpCuisinier(int _anneeExpCuisinier){
    anneeExpCuisinier = _anneeExpCuisinier;
}

void Cuisinier::setSpecialite(std::string _specialite){
    specialite = _specialite;
}

void Cuisinier::setCmdCharge(int _cmdCharge){
    cmdCharge = _cmdCharge;
}

//Assigner un chef au cuisinier
void Cuisinier::assignerChef(Chef* nouveauChef){
    chef = nouveauChef;
    chef->ajouterCuisinier(this);
}







//Méthode pour associer un plat sans cardinalité
void Cuisinier::setPlat(Plat _plat) {
    plat = _plat;
}
//Méthode pour ajouter un plat avec cardinalité
void Cuisinier::addPlat(Plat _plat) {
    plat_.push_back(_plat);
}







//Méthode pour retirer un plat avec cardinalité
Plat Cuisinier::removePlat(Plat _plat) {
    // Vous devez implémenter la logique pour retirer le plat du vecteur
    // Retourner le plat retiré ou une valeur par défaut si nécessaire
    // ...

    // Exemple : temporaire, vous devez ajuster cela selon votre logique
    Plat platRetire;
    return platRetire;
}


//Afficher les donnees du cuisinier
void Cuisinier::afficherCuisinier() {
    std::cout << "Nom du Cuisinier : " << nomCuisinier << std::endl;
    std::cout << "Prenom du Cuisinier : " << prenomCuisinier << std::endl;
    std::cout << "Specialite : " << specialite << std::endl;
    std::cout << "Commande en charge : " << cmdCharge << std::endl;
    std::cout << "Sous la supervision du chef : " << chef->getNomChef() << std::endl;
    std::cout << "Plat ajoute au cuisinier SANS cardinalite: " << plat.getNomPlat() << std::endl;
    std::cout << "Plats associe au cuisinier AVEC cardinalite: ";
    for (const auto& plat : plat_) {
        std::cout << plat.getNomPlat() << ", " ; }
        std::cout << std::endl;
    }