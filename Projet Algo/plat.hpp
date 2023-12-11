#ifndef PLAT_HPP
#define PLAT_HPP
#include<string>


class Plat{//creation classe plat
    protected : //creation attributs privés
        int idPlat;
        std :: string nomPlat;
        std :: string descriptionPlat; 
        std :: string typePlat; 
        double prixPlat;
        int tempsPrepPlat;

    public://creation du constructeur
        Plat();
        Plat(int idPlat,std :: string nomPlat, std :: string descriptionPlat, std :: string typePlat, double prixPlat, int tempsPrepPlat);

        //Methode publique
        void afficherPlat() const;

        //Getters
        int getIdPlat() const;
        std::string getNomPlat() const;
        std::string getDescriptionPlat() const;
        std::string getTypePlat() const;
        double getPrixPlat() const;
        int getTempsPrepPlat() const;

        //Setters
        void setIdPlat(int idPlat);
        void setNomPlat(std::string nomPlat);
        void setDescriptionPlat(std::string descriptionPlat);
        void setTypePlat(std::string typePlat);
        void setPrixPlat(double prixPlat);
        void setTempsPrepPlat(int tempsPrepPlat);
            
};

#endif //PLAT_HPP