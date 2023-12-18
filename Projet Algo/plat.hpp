#ifndef PLAT_HPP
#define PLAT_HPP

#include <string>
#include <iostream>

#include "commande.hpp"


//Création Classe Plat
class Plat{

    //Attributs protégés
    protected : 
        int idPlat;
        std :: string nomPlat;
        std :: string descriptionPlat; 
        std :: string typePlat; 
        double prixPlat;
        int tempsPrepPlat;


    //Attributs publics
    public:
        //Constructeurs
        Plat();
        Plat(int idPlat,std :: string nomPlat, std :: string descriptionPlat, std :: string typePlat, double prixPlat, int tempsPrepPlat);
        // Destructeur virtuel
        virtual ~Plat(); 

        //Getters pour attributs privés
        int getIdPlat() const;
        std::string getNomPlat() const;
        std::string getDescriptionPlat() const;
        std::string getTypePlat() const;
        double getPrixPlat() const;
        int getTempsPrepPlat() const;

        //Setters pour attributs privés
        void setIdPlat(int idPlat);
        void setNomPlat(std::string nomPlat);
        void setDescriptionPlat(std::string descriptionPlat);
        void setTypePlat(std::string typePlat);
        void setPrixPlat(double prixPlat);
        void setTempsPrepPlat(int tempsPrepPlat);

        //Afficher les donnees des plats 
        //Méthode virtuelle
        virtual void afficherPlat();      
         
};
#endif