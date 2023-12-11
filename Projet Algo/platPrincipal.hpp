#ifndef PLATPRINCIPAL_HPP
#define PLATPRINCIPAL_HPP
#include<string>
#include"plat.hpp"

class PlatPrincipal : public Plat{//creaion classe pour le plat principal
    private : //creation attributs privés
        std :: string typePlatPrincipal; 
        std :: string accompagnementPlatPrincipal;

    public://creation du constructeur
        PlatPrincipal();//constructeur par défaut 
        ~PlatPrincipal();//desctructeur 
        PlatPrincipal(std::string typePlatPrincipal, std::string accompagnementPlatPrincipal);
        PlatPrincipal(int idPlat, std::string nomPlat, std::string descriptionPlat, std::string typePlat, double prixPlat, int tempsPrepPlat, std::string typePlatPrincipal, std::string accompagnementPlatPrincipal);

        //Methode publique pour afficher les détails du plat principal
        void afficherPlatPrincipal() const;

        // Nouvelle méthode pour copier les informations d'un Plat vers PlatPrincipal
        void copierInfosPlat(const Plat& plat);

        //Getters uniquement de plat principal
        std::string getTypePlatPrincipal() const;
        std::string getAccompagnementPlatPrincipal() const;

        //Setters
        void setTypePlatPrincipal(std::string typePlatPrincipal);
        void setAccompagnementPlatPrincipal(std::string accompagnementplatPrincipal);
            
};

#endif //ENTREE_HPP