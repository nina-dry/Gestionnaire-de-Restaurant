#ifndef BOISSON_HPP
#define BOISSON_HPP

#include <string>
#include <iostream>

#include"plat.hpp"


//Création Classe Boisson
class Boisson : public Plat
{
    //Attributs privés
    private :
        std::string typeBoisson;
        std::string tailleBoisson;
       
    //Attributs publics
    public:
        //Constructeurs
        Boisson();
            //Avec caractéristiques de boisson uniquement
        Boisson( std::string typeBoisson, std::string tailleBoisson);
            //Avec caractéristiques de plat + boisson
        Boisson(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typeBoisson, std::string tailleBoisson);
        
        //Destructeur
        ~Boisson();


        //Getter pour attributs privés
        std::string getTypeBoisson()const;
        std::string getTailleBoisson()const;


        //Setters pour attributs privés
        void setTypeBoisson(std::string typeBoisson);
        void setTailleBoisson(std::string tailleBoisson);


        //Afficher les donnees des boissons (+ Plat grâce à methode virtuelle)
        virtual void afficherPlat() override;
};

#endif 