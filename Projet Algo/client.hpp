// Fichier hpp
#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <string>
#include "commande.hpp"
class Commande;
class Plat;
class Client {
private:
    Commande* commande;
    int idClient;
    std::string nomClient;
    int telClient;
   

public:
    // Constructeur
    Client();
    Client(int idClient,std::string nomClient, int telClient);

    // Méthode publique
    void afficherClient() const;

    // les getters
    int getIdClient() const;
    std::string getNomClient() const;
    int getTelClient() const;

    // les setters
    void setIdClient(int idClient);
    void setNomClient(std::string nomClient);
    void setTelClient(int telClient);


    // Association sans cardinalité
    void setCommande(Commande* _commande);
    Commande* getCommande();

};

#endif //CLIENT_HPP