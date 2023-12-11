#ifndef BOISSON_HPP
#define BOISSON_HPP
#include <string>

class Boisson{//creaion classe Boisson
    private : //creation attributs privés
        int idBoisson;
        std::string TypeBoisson;
        std::string TailleBoisson;
       
    public://creation methodes publiques
        Boisson( std::string TypeBoisson ,
        std::string TailleBoisson);
        


//getters
    int getBoisson()const;
    std::string TypeBoisson()const;
    std::string TailleBoisson()const;
    

    //setters
    void setTypeBoisson(std::string TypeBoisson);
    void setTailleBoisson(std::string TailleBoisson);








};

#endif //BOISSON_HPP