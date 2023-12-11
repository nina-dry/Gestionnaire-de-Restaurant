// Fichier cpp
#include <iostream>
#include "commande.hpp"

// Implémentation du constructeurs Commande

Commande::Commande(int numCommande, const Plat platCommande, const Client nomClient)
    : numCommande(numCommande), platCommande(platCommande), nomClient(nomClient) {}


// Implémentation des méthodes publiques

//void Commande::NumCommande(int numCommande) {
   // NumCommande = numCommande;
//}

//void Commande::PlatCommande(int platCommande) {
    //PlatCommande = platCommande;
//}

double Commande::MontantTotal() const {
    return platCommande.getPrixPlat();
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

void Commande::setNumCommande(int _numCommande) {
    numCommande = _numCommande;
}
void Commande::setPlatCommande(const Plat& _platCommande) {
    platCommande = _platCommande;
}

void Commande::setNomClient(const Client& _nomClient) {
    nomClient = _nomClient;
}


// Affichage des données des étudiants
void Commande::afficherCommande() const {
    std::cout << "Numéro de commande: " << getNumCommande() << std::endl;
    std::cout << "Nom du client : " << getNomClient().getNomClient() << std::endl;
    // Affichage du plat commandé
    std::cout << "Plat commandé : " << std::endl;
    getPlatCommande().afficherPlat();

    std::cout << "Montant total de la commande : " << MontantTotal() << std::endl;
}
