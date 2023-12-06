#include "cuisinier.hpp"

#include <string>
#include <iostream>


//Constructeur
Cuisinier::Cuisinier(int idCuisinier, std::string nomCuisinier, std::string prenomCuisinier, int ageCuisinier, int anneeExpCuisinier, std::string specialite, int cmdCharge) : 
                     idCuisinier(idCuisinier), nomCuisinier(nomCuisinier), prenomCuisinier(prenomCuisinier), ageCuisinier(ageCuisinier), anneeExpCuisinier(anneeExpCuisinier), specialite(specialite), cmdCharge(cmdCharge) {}



//Getter et Setter pour attributs privés
std::string Cuisinier::getNomCuisinier() const{
    return nomCuisinier;
}

std::string Cuisinier::setSpecialite(){
    return specialite;
}

void Cuisinier::setCmdCharge(int _cmdCharge){
    cmdCharge = _cmdCharge;
}



//Afficher les résultats
void Cuisinier::afficherCuisinier() {
    std::cout << "Nom du Cuisinier : " << nomCuisinier << std::endl;
    std::cout << "Specialite : " << specialite << std::endl;
    std::cout << "Cmd Charge : " << cmdCharge << std::endl;
}

