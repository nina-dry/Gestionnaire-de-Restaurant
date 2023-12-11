#ifndef CHEF_HPP
#define CHEF_HPP

#include <string>
#include <iostream>
#include <vector>

#include "cuisinier.hpp"
#include "serveur.hpp"

class Cuisinier;
class Serveur;

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
        std::vector<Cuisinier*> cuisiniers_;
        std::vector<Serveur*> serveurs_;

    public : 
        //Constructeurs
        Chef(int idChef, std::string nomChef, std::string prenomChef, int ageChef, int anneeExpChef);

        void ajouterCuisinier(Cuisinier* cuisinier);
        void ajouterServeur(Serveur* serveur);
        
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