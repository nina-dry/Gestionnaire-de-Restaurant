#ifndef CHEFSERVICE_HPP
#define CHEFSERVICE_HPP

#include <string>
#include <iostream>

//Création Classe ChefService
class ChefService 
{
    //Attributs privés
    private : 
        int idChefService; 
        std::string nomChefService;
        std::string prenomChefService;
        int ageChefService;
        int anneeExpChefService;

    public : 
        //Constructeurs
        ChefService();
        ChefService(int idChefService, std::string nomChefService, std::string prenomChefService, int ageChefService, int anneeExpChefService);

        //Getter et Setter pour attributs privés
        void getIdChefService() const;
        std::string getNomChefService() const;
        std::string getPrenomChefService() const;
        void setAgeChefService();
        void setAnneeExpChefService(int _anneExpChefService);

        //Affichage 
        void afficherChef();
};

#endif