#ifndef PLAT_HPP
#define PLAT_HPP

class Plat{//creaion classe plat
    private : //creation attributs privés
        int idPlat;
        std :: string nomPlat;
        std :: string descriptionPlat; 
        std :: string typePlat; 
        double prixPlat;
        int tempsPrepPlat;

    public://creation constructeurs
        Plat(int idPlat,std :: string nomPlat, std :: string descriptionPlat, std :: string typePlat, double prixPlat, int tempsPrepPlat);

        //Methode publiques
        void afficherPlat() const;

        //Getters
        int getIdPlat() const;
        std::string getNomPlat() const;
        std::string getDescriptionPlat() const;
        std::string getTypePLat() const;
        int getPrixPlat() const;
        int getTempsPrepPlat() const;

        //Setters
        void setIdPlat(int idPlat);
        void setNomPlat(std::string nomPlat);
        void setDescriptionPlat(std::string descriptionPlat);
        void setTypePlat(std::string typePlat);
        void setPrixPlat(int prixPlat);
        void setTempsPrepPlat(int tempsPrepPlat);
            
};

#endif //PLAT_HPP