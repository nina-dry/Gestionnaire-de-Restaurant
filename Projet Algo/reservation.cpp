#include <string>
#include <iostream>

#include "reservation.hpp"
#include "client.hpp"

//Constructeurs
Reservation::Reservation(){Client client;}
Reservation::Reservation(int numReservation, Client* nomClient, int jour, int mois, int annee, int heure, int minute, int nbrePersonne) :
                         numReservation(numReservation), nomClient(nomClient), jour(jour), mois(mois), annee(annee), heure(heure), minute(minute), nbrePersonne(nbrePersonne) {}


//Getters pour attributs privés
int Reservation::getNumReservation() const {
    return numReservation;
}
Client* Reservation::getNomClient() const{
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


//Setters pour attributs privés
void Reservation::setNumReservation(int _numReservation) {
    numReservation = _numReservation;
}
void Reservation::setNomClient(Client* _nomClient) {
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


//Afficher les données des reservations
void Reservation::afficherReservation() {
    std::cout << "Reseravation Numero " << numReservation << std::endl;
    std::cout << "Nom du client : " << nomClient->getNomClient() << std::endl;
    std::cout << "Date de reservation : " << jour << "/" << mois << "/" << annee << std::endl;
    std::cout << "Heure de reservation : " << heure << "h" << minute << std::endl;
    std::cout << "Nombre de personnes : " << nbrePersonne << std::endl;
}