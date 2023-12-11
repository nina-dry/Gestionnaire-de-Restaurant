#ifndef PLATPRINCIPAL_HPP
#define PLATPRINCIPAL_HPP
#include <string>

 class PlatPrincipal {//creation class restaurant 
    private: // creation attributs privés
        int idPlatPrincipal;
        std::string TypePlatPrincipal;
        std::string AccompagnementPlatPrincipal;
       
    public://creation methodes publiques
        PlatPrincipal( std::string TypePlatPrincipal ,
        std::string AccompagnementPlatPrincipal);

    //getters
    int getPlatPrincipal()const;
    std::string TypePlatPrincipal()const;
    std::string AccompagnementPlatPrincipal()const;
    

    //setters
    void setTypePlatPrincipal(std::string TypePlatPrincipal)const;
    void setAccompagnementPlatPrincipal(std::string AccompagnementPlatPrincipal)const;





};
#endif
