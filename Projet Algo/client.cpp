#include <string>
#include <iostream>

#include "client.hpp"
#include "reservation.hpp"
#include "commande.hpp"


//Constructeurs
Client::Client() {}
Client::Client(int idClient, const std::string& nomClient, std::string telClient)
    : idClient(idClient), nomClient(nomClient), telClient(telClient) {}


//Getter pour attributs privés
int Client::getIdClient() const {
    return idClient;
}
std::string Client::getNomClient() const {
    return nomClient;
}
std::string Client::getTelClient() const {
    return telClient;
}


//Setters pour attributs privés
void Client::setIdClient(int _idClient) {
    idClient = _idClient;
}
void Client::setNomClient(std::string _nomClient) {
    nomClient = _nomClient;
}
void Client::setTelClient(std::string _telClient) {
    telClient = _telClient;
}


//Association entre Reservation et Client;
void Client::setReservation(Reservation* _reservation) {
    reservation = _reservation;
}
//Association entre Commande et Client;
void Client::setCommande(Commande* _commande){
    commande = _commande;
}


// Affichage des données des clients
void Client::afficherClient() const {
    std::cout << "Client Numero " << idClient << std::endl;
    std::cout << "Nom du client : " << nomClient << std::endl;
    std::cout << "Tel du client : " << telClient << std::endl;
}

//Operateur de comparaison
bool Client::estSuperieur(Client client){
    return (idClient > client.getIdClient());
}
bool operator > (Client client1, Client client2){
    return client1.estSuperieur(client2);
}