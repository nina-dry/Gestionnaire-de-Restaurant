#ifndef PLATPRINCIPAL_HPP
#define PLATPRINCIPAL_HPP

#include <string>
#include <iostream>

#include"plat.hpp"

//Création Classe PlatPrincipal
class PlatPrincipal : public Plat
{
    //Attributs privés
    private : 
        std :: string typePlatPrincipal; 
        std :: string accompagnementPlatPrincipal;


    //Attributs publics
    public:
        //Constructeurs
        PlatPrincipal(); 
            //Avec caractéristiques de Plat Principal uniquement
        PlatPrincipal(std::string typePlatPrincipal, std::string accompagnementPlatPrincipal); 
            //Avec caractéristiques de Plat + Plat Principal
        PlatPrincipal(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typePlatPrincipal, std::string accompagnementPlatPrincipal);

        //Destructeur
        ~PlatPrincipal();

        //Getters pour attributs privés
        std::string getTypePlatPrincipal() const;
        std::string getAccompagnementPlatPrincipal() const;

        //Setters pour attributs privés
        void setTypePlatPrincipal(std::string typePlatPrincipal);
        void setAccompagnementPlatPrincipal(std::string accompagnementplatPrincipal);
        
        //Afficher les donnees de platPrincipal (+ Plat grâce à methode virtuelle)
        virtual void afficherPlat() override;

};

#endif