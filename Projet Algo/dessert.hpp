#ifndef DESSERT_HPP
#define DESSERT_HPP
#include <string>
#include"plat.hpp"


class Dessert: public Plat{//creaion classe dessert avec  héritage
    private : //creation attributs privés
        std::string typeDessert;
        std::string portionDessert;
       
    public:
        Dessert();//constructeur par défaut
        ~Dessert();//destructeur par défaut
        Dessert( std::string typeDessert, std::string portionDessert);//constructeur dessert uniquement avec ses attributs
        Dessert(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typeDessert, std::string portionDessert);//constrcuteur desert avec les attributs de plat + les siens

        //Methode publiques
        void afficherDessert() const;

        // Nouvelle méthode pour copier les informations d'un Plat vers Entree
        void copierInfosPlat(const Plat& plat);        


        //getters
        std::string getTypeDessert()const;
        std::string getPortionDessert()const;

        //setters
        void setTypeDessert(std::string typeDessert);
        void setPortionDessert(std::string portionDessert);


};

#endif //BOISSON_HPP
