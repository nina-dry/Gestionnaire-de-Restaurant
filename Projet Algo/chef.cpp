#include "Chef.hpp"

#include <string>
#include <iostream>


//Constructeur
Chef::Chef(int idChef, std::string nomChef, std::string prenomChef, int ageChef, int anneeExpChef) : idChef(idChef), nomChef(nomChef), prenomChef(prenomChef), ageChef(ageChef), anneeExpChef(anneeExpChef) {}



//Getter et Setter pour attributs privés
std::string Chef::getNomChef() const{
    return nomChef;
}

void Chef::setAnneeExpChef(int _anneExpChef){
    anneeExpChef = _anneExpChef;
}



//Afficher les résultats
void Chef::afficherChef(){
    std::cout << "Nom du Chef : " << nomChef << std::endl;
    std::cout << "Anne Experience : " << anneeExpChef << std::endl;

}

