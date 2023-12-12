#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP
#include"plat.hpp"
#include<vector>

 class Restaurant {//creation class restaurant 
    private: // creation attributs privés
        int idRestaurant;
        int codePostal;
        std::string nomRestaurant;
        std::string adresse;
        std::string ville;
        std::string type;
        std::vector<Plat> plats;; //utilisation de la classe Plat
        
        
    public://creation methodes publiques
        Restaurant(int idRestaurant, std::string nomRestaurant, std::string adresse, std::string ville, int codePostal, std::vector<Plat>plats, std::string type);

        //Plat getPlat(){
          //  return plat;
        //}

        // Méthode pour ajouter un plat au restaurant
        void ajouterPlat(const Plat& plat);

        // Méthode publique
        void afficherRestaurant() const;

    //getters
    int getIdRestaurant()const;
    int getCodePostal()const;
    std::string getNomRestaurant()const;
    std::string getAdresse()const;
    std::string getVille()const;
    //std::string plat()const;
    std::string getType()const;

    //setters
    void setIdRestaurant(int idRestaurant);
    void setCodePostal (int codePostal);
    void setNomRestaurant(std::string nomRestaurant);
    void setAdresse(std::string adresse);
    void setVille(std::string ville);
    //void setplat(std::string plat)const;
    void setType(std::string type);


};
#endif

