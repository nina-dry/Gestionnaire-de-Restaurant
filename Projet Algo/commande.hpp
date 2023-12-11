// Fichier hpp
#ifndef COMMANDE_HPP
#define COMMANDE_HPP

#include <iostream>
#include <string>
#include "plat.hpp"
#include "client.hpp"


class Commande {
private:
    int numCommande;
    Plat platCommande;  // Ajout du plat
    Client nomClient; // ajout du nom du client 



public:
    // Constructeur
    Commande(int numCommande, Plat platCommande, Client nomClient);

    // Méthodes publiques
    //void NumCommande(int numCommande) const;

    //void PlatCommande(Plat platCommande) const;
    double MontantTotal() const;
    void afficherCommande() const;



    // les getters
    int getNumCommande() const;
    Plat getPlatCommande() const;
    Client getNomClient() const;
    

    // les setters
    void setNumCommande(int numCommande);
    void setPlatCommande(const Plat& platCommande);
    void setNomClient(const Client& nomClient);

};


#endif //COMMANDE_HPP


