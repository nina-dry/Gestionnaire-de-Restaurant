#ifndef CUISINIER_HPP
#define CUISINIER_HPP

#include <string>
#include <iostream>
#include <vector>

#include "chef.hpp"
#include "plat.hpp"


//Déclaration anticipée de la classe Chef
class Chef;


//Création Classe Cuisinier
class Cuisinier 
{
    //Attributs privés
    private : 
        int idCuisinier; 
        std::string nomCuisinier;
        std::string prenomCuisinier;
        int ageCuisinier;
        int anneeExpCuisinier;
        std::string specialite;
        int cmdCharge;
        Chef* chef;

        //Association sans cardinalite
        Plat plat;
        //Association avec cardinalite  
        std::vector <Plat> plat_;

        //Plat* platCuisine = nullptr;

    //Attributs publics
    public : 
        //Constructeurs
        Cuisinier();
        Cuisinier(int idCuisinier, std::string nomCuisinier, std::string prenomCuisinier, int ageCuisinier, int anneeExpCuisinier, std::string specialite, int cmdCharge);

        //Getter et Setter pour attributs privés
        int getIdCuisinier() const;
        std::string getNomCuisinier() const;
        std::string getPrenomCuisinier() const;
        
        void setAgeCuisinier(int ageCuisinier);        
        void setAnneeExpCuisinier(int anneeExpCuisinier);
        void setSpecialite(std::string specialite);
        void setCmdCharge(int cmdCharge);

        //Assigner un chef au cuisinier
        void assignerChef(Chef* nouveauChef);

        //Association sans cardinalite
        void setPlat(Plat _plat);
        Plat getPlat();

        //Association avec cardinalite  
        void addPlat(Plat _plat);
        Plat removePlat(Plat _plat);

        //Afficher les donnees du cuisinier
        void afficherCuisinier();

};

#endif