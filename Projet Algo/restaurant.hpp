#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <string>
#include <iostream>
#include <vector>

#include "plat.hpp"


//Déclaration anticipée
class Plat;


//Création Classe Restaurant
class Restaurant 
 {
    //Attributs privés
    private:
        int idRestaurant;
        std::string nomRestaurant;
        std::string adresse;
        int codePostal;
        std::string ville;
        std::string typeRestaurant;
        std::vector<Plat> listePlats;
 
    //Attributs publiques
    public:
        //Constructeurs
        Restaurant();
        Restaurant(int idRestaurant, std::string nomRestaurant, std::string adresse, int codePostal, std::string ville, std::string typeRestaurant, std::vector<Plat>listePlats);

        //Getters pour attributs privés
        int getIdRestaurant()const;
        std::string getNomRestaurant()const;
        std::string getAdresse()const;
        int getCodePostal()const;
        std::string getVille()const;
        std::string getTypeRestaurant()const;
        
        //Setters pour attributs privés
        void setIdRestaurant(int idRestaurant);
        void setNomRestaurant(std::string nomRestaurant);
        void setAdresse(std::string adresse);
        void setCodePostal(int codePostal);
        void setVille(std::string ville);
        void setTypeRestaurant(std::string typeRestaurant);

        //Ajouter un plat au restaurant
        void ajouterPlat(const Plat& plat);
    
        //Afficher les données du restaurant 
        void afficherRestaurant() const;
};

#endif