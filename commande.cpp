// Fichier cpp
#include <iostream>
#include "commande.hpp"

// Implémentation du constructeurs Commande

Commande::Commande(int numCommande, Plat platCommande, Client nomClient)
    : numCommande(numCommande), platCommande(platCommande), nomClient(nomClient) {}


// Implémentation des méthodes publiques

void Commande::NumCommande(int numCommande) {
    NumCommande = numCommande;
}

void Commande::PlatCommande(int platCommande) {
    PlatCommande = platCommande;
}

double Commande::MontantTotal() const {
    MontantTotal+=PrixPlat;
    return MontantTotal;
}



// Implémentation des getters

int Commande::getNumCommande() const {
    return numCommande;
}

Plat Commande::getPlatCommande() const {
    return platCommande;
}

Client Commande::getNomClient() const {
    return nomClient;
}


// Implémentation des setters

void Commande::setNumCommande(double _numCommande) {
    numCommande = _numCommande;
}
void Commande::setPlatCommande(double _platCommande) {
    platCommande = _platCommande;
}

void Commande::setNomClient(double _nomClient) {
    nomClient = _nomClient;
}




// Affichage des données des étudiants
void Etudiant::afficherCommande() const {
    std::cout << "Numéro de commande: " << NumCommande() << std::endl;
    std::cout << "Plats commandés : " << PlatCommande() << std::endl;
    std::cout << "Montant total de la commande : " << MontantTotal() << std::endl;
}



