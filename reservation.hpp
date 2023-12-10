// Fichier hpp
#ifndef RESERVATION_HPP
#define RESERVATION_HPP

#include <iostream>
#include <string>
#include <ctime>

class Reservation {
private:
    int numReservation;
    Client nomClient; // ajout du nom du client 
    int jour;
    int mois;
    int annee;
    int heure;
    int minute;
    int nbrePersonne;

public:
    // Constructeur
    Commande(int numReservation, Client nomClient, int jour, int mois, int annee, int heure, int minute, int nbrePersonne);

    // Méthodes publiques
    void NomClient(Client nomClient) const;
    void DateReservation() const;
    void HeureReservation() const;
    void NbrePersonne(int nbrePersonne) const;
    void afficherReservation() const;


    // les getters
    int getNumReservation() const;
    Client getNomClient() const;
    int getJour() const;
    int getMois() const;
    int getAnnee() const;
    int getHeure() const;
    int getMinute() const;
    int getNbrePersonne() const;


    // les setters
    void setNumReservation(int numReservation);
    void setNomClient(Client nomClient);
    void setJour(int jour);
    void setMois(int mois);
    void setAnnee(int annee);
    void setHeure(int heure);
    void setMinute(int minute);
    void setNbrePersonne(int nbrePersonne);
};