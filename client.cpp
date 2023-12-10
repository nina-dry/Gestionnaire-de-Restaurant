// Fichier cpp
#include <iostream>
#include "client.hpp"

// Implémentation du constructeur Client

Client::Client(int idClient, std::string nomClient, int telClient)
    : idClient(idClient), nomClient(nomClient), telClient(telClient) {}


// Implémentation de la méthode publique

void Client::NomClient(std::string nomClient) {
    NomClient = nomClient;
}


// Implémentation des getters
int Client::getIdClient() const {
    return idClient;
}

std::string Client::getNomClient() const {
    return nomClient;
}

int Client::getTelClient() const {
    return telClient;
}

// Implémentation des setters

void Client::setIdClient(int _idClient) {
    idClient = _idClient;
}
void Client::setNomClient(std::string _nomClient) {
    nomClient = _nomClient;
}

void Client::setTelClient(int _telClient) {
    telClient = _telClient;
}



// Affichage des données des clients
void Client::NomClient() const {
    std::cout << "Nom du client : " << NomClient() << std::endl;
}

