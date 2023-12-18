#ifndef RESERVATION_HPP
#define RESERVATION_HPP

#include <string>
#include <iostream>
#include <ctime>

#include "client.hpp"


//Déclaration anticipée
class Client;


//Création Classe Réservation
class Reservation 
{
    //Attributs privés
    private:
        int numReservation;
        Client* nomClient; 
        int jour;
        int mois;
        int annee;
        int heure;
        int minute;
        int nbrePersonne;
        std::string dateReservation;
        std::string heureReservation;

    //Attributs publics
    public:
        //Constructeurs
        Reservation();
        Reservation(int numReservation, Client* nomClient, int jour, int mois, int annee, int heure, int minute, int nbrePersonne);

        //Getters pour attributs privés
        int getNumReservation() const;
        Client* getNomClient() const;
        int getJour() const;
        int getMois() const;
        int getAnnee() const;
        int getHeure() const;
        int getMinute() const;
        int getNbrePersonne() const;
        std::string getDateReservation() const;
        std::string getHeureReservation() const;
        
        //Setters pour attributs privés
        void setNumReservation(int numReservation);
        void setNomClient(Client* nomClient);
        void setJour(int jour);
        void setMois(int mois);
        void setAnnee(int annee);
        void setHeure(int heure);
        void setMinute(int minute);
        void setNbrePersonne(int nbrePersonne);
        void setDateReservation(int jour, int mois, int annee);
        void setHeureReservation(int heure, int minute);

        //Afficher les donnees des reservations
        void afficherReservation();
        
};

#endif