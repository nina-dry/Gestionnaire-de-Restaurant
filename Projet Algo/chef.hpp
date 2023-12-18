#ifndef CHEF_HPP
#define CHEF_HPP

#include <string>
#include <iostream>
#include <vector>

#include "cuisinier.hpp"
#include "serveur.hpp"


//Déclaration anticipée
class Cuisinier;
class Serveur;


//Création Classe Chef
class Chef
{
    //Attributs privés
    private : 
        int idChef; 
        std::string nomChef;
        int ageChef;
        int anneeExpChef;
        std::vector<Cuisinier*> cuisiniers_;
        std::vector<Serveur*> serveurs_;

    public : 
        //Constructeurs
        Chef();
        Chef(int idChef, std::string nomChef, int ageChef, int anneeExpChef);
        
        //Getter pour attributs privés
        int getIdChef() const;
        std::string getNomChef() const;
        int getAgeChef() const;
        int getAnneeExpChef() const;

        //Setters pour attributs privés
        void setIdChef(int idChef) ;
        void setNomChef(std::string nomChef);
        void setAgeChef(int ageChef);
        void setAnneeExpChef(int anneExpChef);

        //Associer Cuisiniers et Serveurs sous ses ordres
        void ajouterCuisinier(Cuisinier* cuisinier);
        void ajouterServeur(Serveur* serveur);

        //Afficher les donnees du chef
        void afficherChef();
    
        //Operateur de comparaison
        bool estSuperieur(Chef chef);    

};

    //Initialisation des opérateurs de comparaison
    bool operator>(Chef chef1, Chef chef2);

#endif