#include "chef.hpp"
#include "cuisinier.hpp"
#include "serveur.hpp"

#include <string>
#include <iostream>
#include <vector>


//Constructeur
Chef::Chef(int idChef, std::string nomChef, std::string prenomChef, int ageChef, int anneeExpChef) : idChef(idChef), nomChef(nomChef), prenomChef(prenomChef), ageChef(ageChef), anneeExpChef(anneeExpChef) {}



//Getter et Setter pour attributs privés
std::string Chef::getNomChef() const{
    return nomChef;
}

void Chef::setAnneeExpChef(int _anneExpChef){
    anneeExpChef = _anneExpChef;
}

void Chef::ajouterCuisinier(Cuisinier* cuisinier){
    cuisiniers_.push_back(cuisinier);
}

void Chef::ajouterServeur(Serveur* serveur){
    serveurs_.push_back(serveur);
}


//Afficher les résultats
void Chef::afficherChef(){
    std::cout << "Nom du Chef : " << nomChef << std::endl;
    std::cout << "Anne Experience : " << anneeExpChef << std::endl;
    std::cout << "Cuisiniers sous sa supervision : " <<std::endl;
    for (const auto& cuisinier : cuisiniers_){
        std::cout << cuisinier->getNomCuisinier() << std::endl;
    }
    for (const auto& serveur : serveurs_){
        std::cout << serveur->getNomServeur() << std::endl;
    }
}

