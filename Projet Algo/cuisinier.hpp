#ifndef CUISINIER_HPP
#define CUISINIER_HPP

#include <string>
#include <iostream>

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

    public : 
        //Constructeurs
        Cuisinier();
        Cuisinier(int idCuisinier, std::string nomCuisinier, std::string prenomCuisinier, int ageCuisinier, int anneeExpCuisinier, std::string specialite, int cmdCharge);

        //Getter et Setter pour attributs privés
        void getIdCuisinier() const;
        std::string getNomCuisinier() const;
        std::string getPrenomCuisinier() const;
        void setAgeCuisinier() const;
        void setAnneeExpCuisinier() const;
        std::string setSpecialite();
        void setCmdCharge(int _cmdCharge);

        //Affichage 
        void afficherCuisinier();

};

#endif