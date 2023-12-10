// Fichier cpp
#include <iostream>
#include "reservation.hpp"

// Implémentation du constructeur Reservation

Reservation::Reservation(int numReservation, Client nomClient, int jour, int mois, int annee, int heure, int minute, int nbrePersonne)
    : numReservation(numReservation), nomClient(nomClient), jour(jour), mois(mois), annee(annee), heure(heure), minute(minute), nbrePersonne(NbrePersonne) {}


// Implémentation des méthodes publiques
void Reservation::NomClient(Client nomClient) {
    NomClient = nomClient;
}

void Reservation::NumCommande(int nbrePersonne) {
    NbrePersonne = nbrePersonne;
}

void Reservation::DateReservation(Date dateReservation) {
    DateReservation = dateReservation;
}

void Reservation::HeureReservation(Heure heureReservation) {
    HeureReservation = heureReservation;
}



// Implémentation des getters

int Reservation::getNumReservation() const {
    return numReservation;
}


Client Commande::getNomClient() const {
    return nomClient;
}

int Reservation::getJour() const {
    return jour;
}

int Reservation::getMois() const {
    return mois;
}

int Reservation::getAnnee() const {
    return annee;
}
int Reservation::getHeure() const {
    return heure;
}
int Reservation::getMinute() const {
    return minute;
}

int Reservation::getNbrePersonne() const {
    return nbrePersonne;
}



// Implémentation des setters

void Reservation::setNumReservation(double _numReservation) {
    numReservation = _numReservation;
}

void Reservation::setNomClient(double _nomClient) {
    nomClient = _nomClient;
}

void Reservation::setJour(int _jour) {
    jour = _jour;
}

void Reservation::setMois(int _mois) {
    mois = _mois;
}

void Reservation::setAnnee(int _annee) {
    annee = _annee;
}
void Reservation::setHeure(int _heure) {
    heure = _heure;
}

void Reservation::setMinute(int _minute) {
    minute = _minute;
}

void Reservation::setNbrePersonne(int _nbrePersonne) {
    nbrePersonne = _nbrePersonne;
}

// Affichage des données de la réservation
void Reservation::afficherReservation() const {
    std::cout << "Nom du client : " << NomClient() << std::endl;
    std::cout << "Date de réservation: " << DateReservation.getJour() << "/" << DateReservation.getMois() << "/" << DateReservation.getAnnee() << std::endl;
    std::cout << "Heure de réservation: " << HeureReservation.getHeure() << " : " << HeureReservation.getMinute() << std::endl;
    std::cout << "Nombre de personne : " << NbrePersonne() << std::endl;

}



