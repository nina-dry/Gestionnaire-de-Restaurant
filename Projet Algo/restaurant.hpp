#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

 class Restaurant {//creation class restaurant 
    private: // creation attributs privés
        int idRestaurant;
        int codePostal;
        std::string nomRestaurant;
        std::string adresse;
        std::string ville;
        std::string plat;
        std::string type;
        
        Plat plat;
    public://creation methodes publiques
        Restaurant( std::string nomRestaurant,
        std::string adresse,
        std::string ville,
        std::string plat,
        std::string type);

        Plat getPlat(){
            return plat;
        }

    //getters
    int getRestaurant()const;
    int getcodePostal()const;
    std::string nomRestaurant()const;
    std::string adresse()const;
    std::string ville()const;
    std::string plat()const;
    std::string type()const;

    //setters
    void setnomRestaurant(std::string nomRestaurant)const;
    void setadresse(std::string adresse)const;
    void setville(std::string ville)const;
    void setplat(std::string plat)const;
    void settype(std::string type)const;





};
#endif

