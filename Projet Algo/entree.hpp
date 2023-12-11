#ifndef ENTREE_HPP
#define ENTREE_HPP
#include<string>
#include"plat.hpp"


class Entree  : public Plat{//creaion classe entrée
    private : //creation attributs privés
        std :: string typeEntree; 
        std :: string portionEntree;

    public://creation du constructeur
        Entree();//constructeur par défaut
        ~Entree();//destructeur par défaut
        Entree(std :: string typeEntree, std :: string portionPlat);//constructeur avec les caractéristiques d'entree uniquement
        Entree(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typePlatPrincipal, std::string accompagnementPlatPrincipal);

        //Methode publiques
        void afficherEntree() const;

        // Nouvelle méthode pour copier les informations d'un Plat vers Entree
        void copierInfosPlat(const Plat& plat);

        //Getters de entree
        std::string getTypeEntree() const;
        std::string getPortionEntree() const;

        //Setters de entree 
        void setTypeEntree(std::string typeEntree);
        void setPortionEntree(std::string portionEntree);
            
};

#endif //ENTREE_HPP