#ifndef PLATPRINCIPAL_HPP
#define PLATPRINCIPAL_HPP
#include<string>


class PlatPrincipal{//creaion classe pour le plat principal
    private : //creation attributs privés
        int idPlatPrincipal; 
        std :: string typePlatPrincipal; 
        std :: string accompagnementPlatPrincipal;

    public://creation du constructeur
        PlatPrincipal(int idPlatPrincipal,std :: string typePlatPrincipal, std :: string accompagnementPlatPrincipal);

        //Methode publiques
        void afficherPlatPrincipal() const;

        //Getters
        int getIdPlatPrincipal() const;
        std::string getTypePlatPrincipal() const;
        std::string getAccompagnementPlatPrincipal() const;

        //Setters
        void setIdPlatPrincipal(int idEntree);
        void setTypePlatPrincipal(std::string typePlatPrincipal);
        void setAccompagnementPlatPrincipal(std::string accompagnementplatPrincipal);
            
};

#endif //ENTREE_HPP