// Fichier hpp
#ifndef COMMANDE_HPP
#define COMMANDE_HPP

#include <iostream>
#include <string>
#include "plat.hpp"
#include "client.hpp"

class Client;
class Plat;

class Commande {
private:
    Client* nomClient; // ajout du nom du client 
    int numCommande;
    Plat platCommande;  // Ajout du plat
    


public:
    // Constructeur
    Commande();
    Commande(int numCommande, Plat platCommande, Client* nomClient);

    // Méthodes publiques
    //void NumCommande(int numCommande) const;

    //void PlatCommande(Plat platCommande) const;
    double MontantTotal() const;
    void afficherCommande() const;



    // les getters
    Client* getNomClient() const;
    int getNumCommande() const;
    Plat getPlatCommande() const;
    
    

    // les setters
    void setNomClient(Client* _nomClient);
    void setNumCommande(int numCommande);
    void setPlatCommande(const Plat& platCommande);
    

};


#endif //COMMANDE_HPP


