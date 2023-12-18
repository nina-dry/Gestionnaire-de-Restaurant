#ifndef DESSERT_HPP
#define DESSERT_HPP

#include <string>
#include <iostream>

#include"plat.hpp"


//Création Classe Dessert
class Dessert: public Plat
{
    //Attributs privés
    private :
        std::string typeDessert;
        std::string portionDessert;

    //Attributs publics
    public:
        //Constructeurs
        Dessert();
            //Avec caractéristiques de dessert uniquement
        Dessert( std::string typeDessert, std::string portionDessert);//constructeur dessert uniquement avec ses attributs
            //Avec caractéristiques de plat + dessert
        Dessert(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typeDessert, std::string portionDessert);        
        
        //Destructeur
        ~Dessert();


        //Getters pour attributs privés
        std::string getTypeDessert()const;
        std::string getPortionDessert()const;


        //Setters pour attributs privés
        void setTypeDessert(std::string typeDessert);
        void setPortionDessert(std::string portionDessert);


        //Afficher les donnees des desserts (+ Plat grâce à methode virtuelle)
        virtual void afficherPlat() override;
      
};

#endif 