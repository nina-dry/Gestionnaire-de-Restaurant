#ifndef ENTREE_HPP
#define ENTREE_HPP

#include <string>
#include <iostream>

#include"plat.hpp"


//Création Classe Entree
class Entree  : public Plat
{
    //Attributs privés
    private : 
        std :: string typeEntree; 
        std :: string portionEntree;


    //Attributs publics
    public:
        //Constructeurs
        Entree();
            //Avec caractéristiques d'entree uniquement
        Entree(std :: string typeEntree, std :: string portionPlat); 
        Entree(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typeEntree, std::string getPortionEntree); //Avec caractéristiques de plat + entree
        //Destructeur
        ~Entree();


        //Getters pour attributs privés
        std::string getTypeEntree() const;
        std::string getPortionEntree() const;


        //Setters pour attributs privés
        void setTypeEntree(std::string typeEntree);
        void setPortionEntree(std::string portionEntree);


        //Afficher les donnees des entrees (+ Plat grâce à methode virtuelle)
        virtual void afficherPlat() override;
       
};

#endif