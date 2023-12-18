#include <string>
#include <iostream>
#include <vector>

#include "chef.hpp"
#include "cuisinier.hpp"
#include "serveur.hpp"


//Constructeurs
Chef::Chef() {}
Chef::Chef(int idChef, std::string nomChef, int ageChef, int anneeExpChef) : 
           idChef(idChef), nomChef(nomChef), ageChef(ageChef), anneeExpChef(anneeExpChef) {}


//Getter pour attributs privés
int Chef::getIdChef() const {
    return idChef;
}
std::string Chef::getNomChef() const{
    return nomChef;
}
int Chef::getAgeChef() const{
    return ageChef;
}
int Chef::getAnneeExpChef() const{
    return anneeExpChef;
}


//Setter pour attributs privés
void Chef::setIdChef(int _idChef){
    idChef = _idChef; 
}
void Chef::setNomChef(std::string _nomChef){
    nomChef = _nomChef;
}
void Chef::setAgeChef(int _ageChef){
    ageChef = _ageChef;
}
void Chef::setAnneeExpChef(int _anneExpChef){
    anneeExpChef = _anneExpChef;
}


//Associer Cuisiniers et Serveurs sous ses ordres
void Chef::ajouterCuisinier(Cuisinier* cuisinier){
    cuisiniers_.push_back(cuisinier);
}
void Chef::ajouterServeur(Serveur* serveur){
    serveurs_.push_back(serveur);
}


//Afficher les donnees du chef
void Chef::afficherChef(){
    std::cout << "Nom du Chef : " << nomChef << std::endl;
    std::cout << "Annee Experience : " << anneeExpChef << std::endl;
    std::cout << "Sous sa supervision : " <<std::endl;
    for (const auto& cuisinier : cuisiniers_){
        std::cout << cuisinier->getNomCuisinier() << ", ";
    }
    for (const auto& serveur : serveurs_){
        std::cout << serveur->getNomServeur() << ", ";
    }
}


//Operateur de comparaison
bool Chef::estSuperieur(Chef chef){
    return (anneeExpChef > chef.getAnneeExpChef());
}
bool operator > (Chef chef1, Chef chef2){
    return chef1.estSuperieur(chef2);
}