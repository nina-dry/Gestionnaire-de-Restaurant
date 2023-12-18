#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>
#include <iostream>

#include "reservation.hpp"
#include "commande.hpp"


//Déclaration anticipée
class Reservation;
class Commande;


//Création Classe Client
class Client 
{
    //Attributs privés
    private:
        int idClient;
        std::string nomClient;
        std::string telClient;

        //Association entre Reservation et Client;
        Reservation* reservation;
        //Association entre Commande et Client;
        Commande* commande;


    //Attributs publics
    public:
        //Constructeurs
        Client();
        Client(int idClient,const std::string& nomClient, std::string telClient);
        
        //Getter pour attributs privés
        int getIdClient() const;
        std::string getNomClient() const;
        std::string getTelClient() const;

        //Setters pour attributs privés
        void setIdClient(int idClient);
        void setNomClient(std::string nomClient);
        void setTelClient(std::string telClient);

        //Association Client et Reservation
        void setReservation(Reservation* _reservation);
    
        //Association Client et Commande
        void setCommande(Commande* _commande);

        //Afficher les donnees du client
        void afficherClient() const;

        //Operateur de comparaison
        bool estSuperieur(Client client);    

};

        //Initialisation des opérateurs de comparaison
        bool operator>(Client client1, Client client2);

#endif