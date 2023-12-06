#include "ChefService.hpp"

#include <string>
#include <iostream>


//Constructeur
ChefService::ChefService(int idChefService, std::string nomChefService, std::string prenomChefService, int ageChefService, int anneeExpChefService) : idChefService(idChefService), nomChefService(nomChefService), prenomChefService(prenomChefService), ageChefService(ageChefService), anneeExpChefService(anneeExpChefService) {}



//Getter et Setter pour attributs privés
std::string ChefService::getNomChefService() const{
    return nomChefService;
}

void ChefService::setAnneeExpChefService(int _anneExpChefService){
    anneeExpChefService = _anneExpChefService;
}



//Afficher les résultats
void ChefService::afficherChef(){
    std::cout << "Nom du ChefService : " << nomChefService << std::endl;
    std::cout << "Anne Experience : " << anneeExpChefService << std::endl;

}

