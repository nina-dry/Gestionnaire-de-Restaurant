#ifndef CHEF_HPP
#define CHEF_HPP

#include <string>
#include <iostream>

//Création Classe Chef
class Chef
{
    //Attributs privés
    private : 
        int idChef; 
        std::string nomChef;
        std::string prenomChef;
        int ageChef;
        int anneeExpChef;

    public : 
        //Constructeurs
        Chef();
        Chef(int idChef, std::string nomChef, std::string prenomChef, int ageChef, int anneeExpChef);

        //Getter et Setter pour attributs privés
        void getIdChef() const;
        std::string getNomChef() const;
        std::string getPrenomChef() const;
        void setAgeChef();
        void setAnneeExpChef(int _anneExpChef);

        //Affichage 
        void afficherChef();
};

#endif