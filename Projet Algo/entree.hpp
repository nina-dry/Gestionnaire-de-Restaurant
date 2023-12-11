#ifndef ENTREE_HPP
#define ENTREE_HPP
#include<string>


class Entree{//creaion classe entrée
    private : //creation attributs privés
        int idEntree; 
        std :: string typeEntree; 
        std :: string portionEntree;

    public://creation du constructeur
        Entree(int idEntree,std :: string typeEntree, std :: string portionPlat);

        //Methode publiques
        void afficherEntree() const;

        //Getters
        int getIdEntree() const;
        std::string getTypeEntree() const;
        std::string getPortionEntree() const;

        //Setters
        void setIdEntree(int idEntree);
        void setTypeEntree(std::string typeEntree);
        void setPortionEntree(std::string portionEntree);
            
};

#endif //ENTREE_HPP