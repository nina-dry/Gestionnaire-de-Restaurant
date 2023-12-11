#ifndef DESSERT_HPP
#define DESSERT_HPP
#include <string>

class Dessert{//creaion classe dessert
    private : //creation attributs privés
        int idDessert;
        std::string TypeDessert;
        std::string PortionDesset;
       
    public://creation methodes publiques
        Dessert( std::string TypeDessert ,
        std::string PortionDesset);
        


//getters
    int getDessert()const;
    std::string TypeDessert()const;
    std::string PortionDesset()const;
    

    //setters
    void setTypeDessert(std::string TypeDessert)const;
    void setPortionDessert(std::string PortionDesset)const;








};

#endif //BOISSON_HPP
