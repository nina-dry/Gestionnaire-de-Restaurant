#ifndef BOISSON_HPP
#define BOISSON_HPP
#include <string>
#include"plat.hpp"

class Boisson : public Plat{//creaion classe Boisson
    private : //creation attributs privés
        std::string typeBoisson;
        std::string tailleBoisson;
       
    public://creation methodes publiques
        Boisson();//constructeur par défaut
        ~Boisson();//destructeur par défaut
        Boisson( std::string typeBoisson, std::string tailleBoisson);
        Boisson(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typeBoisson, std::string tailleBoisson);

        //Methode publiques
        void afficherBoisson() const;

        // Nouvelle méthode pour copier les informations d'un Plat vers Entree
        void copierInfosPlat(const Plat& plat);

        //getters
        std::string getTypeBoisson()const;
        std::string getTailleBoisson()const;

        //setters
        void setTypeBoisson(std::string typeBoisson);
        void setTailleBoisson(std::string tailleBoisson);


};

#endif //BOISSON_HPP