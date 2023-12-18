#include <string>
#include <iostream>

#include "cuisinier.hpp"
#include "chef.hpp"


//Constructeurs
Cuisinier::Cuisinier() {Plat plat;}
Cuisinier::Cuisinier(int idCuisinier, std::string nomCuisinier, int ageCuisinier, int anneeExpCuisinier, std::string specialite, int cmdCharge) : 
                     idCuisinier(idCuisinier), nomCuisinier(nomCuisinier), ageCuisinier(ageCuisinier), anneeExpCuisinier(anneeExpCuisinier), specialite(specialite), cmdCharge(cmdCharge){}


//Getter pour attributs privés
int Cuisinier::getIdCuisinier() const {
    return idCuisinier;
}
std::string Cuisinier::getNomCuisinier() const{
    return nomCuisinier;
}
int Cuisinier::getAgeCuisinier() const{
    return ageCuisinier;
}
int Cuisinier::getAnneeExpCuisinier() const{
    return anneeExpCuisinier;
}
std::string Cuisinier::getSpecialite() const{
    return specialite;
}
int Cuisinier::getCmdCharge() const{
    return cmdCharge;
}


//Setter pour attributs privés
void Cuisinier::setIdCuisinier(int _idCuisinier){
    idCuisinier = _idCuisinier;
}
void Cuisinier::setNomCuisinier(std::string _nomCuisinier){
    nomCuisinier = _nomCuisinier;
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


//Ajouter des plats en charge au cuisinier  
void Cuisinier::addPlat(Plat _plat) {
    plat_.push_back(_plat);
}


//Afficher les donnees du cuisinier
void Cuisinier::afficherCuisinier() {
    std::cout << "Cuisinier Numero " << idCuisinier << std::endl;
    std::cout << "Nom du Cuisinier : " << nomCuisinier << std::endl;
    std::cout << "Specialite : " << specialite << std::endl;
    std::cout << "Numero de commande en charge : " << cmdCharge << std::endl;
    std::cout << "Sous la supervision du chef : " << chef->getNomChef() << std::endl;
    std::cout << "Plats en cours de preparation : ";
    for (const auto& plat : plat_) {
        std::cout << plat.getNomPlat() << ", " ; }
        std::cout << std::endl;
}


//Operateur de comparaison supérieur
bool Cuisinier::estSuperieur(Cuisinier cuisinier){
return (anneeExpCuisinier > cuisinier.getAnneeExpCuisinier());
}
bool operator > (Cuisinier cuisinier1, Cuisinier cuisinier2){
    return cuisinier1.estSuperieur(cuisinier2);
}


//Operateur de comparaison inférieur
bool Cuisinier::estInferieur(Cuisinier cuisinier){
    return (ageCuisinier < cuisinier.getAgeCuisinier());
}
bool operator < (Cuisinier cuisinier1, Cuisinier cuisinier2){
    return cuisinier1.estInferieur(cuisinier2);
}