#ifndef CUISINIER_HPP
#define CUISINIER_HPP

#include <string>
#include <iostream>
#include <vector>

#include "chef.hpp"
#include "plat.hpp"


//Déclaration anticipée
class Chef;


//Création Classe Cuisinier
class Cuisinier 
{
    //Attributs privés
    private : 
        int idCuisinier; 
        std::string nomCuisinier;
        int ageCuisinier;
        int anneeExpCuisinier;
        std::string specialite;
        int cmdCharge;
        Chef* chef;

        //Association avec Plat  
        std::vector <Plat> plat_;


    //Attributs publics
    public : 
        //Constructeurs
        Cuisinier();
        Cuisinier(int idCuisinier, std::string nomCuisinier, int ageCuisinier, int anneeExpCuisinier, std::string specialite, int cmdCharge);

        //Getter pour attributs privés
        int getIdCuisinier() const;
        std::string getNomCuisinier() const;
        int getAgeCuisinier() const;
        int getAnneeExpCuisinier() const;
        std::string getSpecialite() const;
        int getCmdCharge() const;
        
        //Setters pour attributs privés
        void setIdCuisinier(int idCuisinier);
        void setNomCuisinier(std::string specialite);
        void setAgeCuisinier(int ageCuisinier);        
        void setAnneeExpCuisinier(int anneeExpCuisinier);
        void setSpecialite(std::string specialite);
        void setCmdCharge(int cmdCharge);

        //Assigner un chef au cuisinier
        void assignerChef(Chef* nouveauChef);

        //Ajouter des plats en charge au cuisinier  
        void addPlat(Plat _plat);

        //Afficher les donnees du cuisinier
        void afficherCuisinier();
    
        //Operateur de comparaison
        bool estSuperieur(Cuisinier cuisinier);    
        bool estInferieur(Cuisinier cuisinier);    
};

        //Initialisation des opérateurs de comparaison
        bool operator>(Cuisinier cuisinier1, Cuisinier cuisinier2);
        bool operator<(Cuisinier cuisinier1, Cuisinier cuisinier2);

#endif