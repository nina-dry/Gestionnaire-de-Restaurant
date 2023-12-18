#include <string>
#include <iostream>

#include "commande.hpp"
#include "client.hpp"
#include "plat.hpp"


//Constructeurs
Commande::Commande() {Client client; Plat plat;}
Commande::Commande(int numCommande, Client* nomClient) : 
                   numCommande(numCommande), nomClient(nomClient) {}


//Getter pour attributs privés
int Commande::getNumCommande() const {
    return numCommande;
}
Client* Commande::getNomClient() const {
    return nomClient;
}


//Setters pour attributs privés
void Commande::setNumCommande(int _numCommande) {
    numCommande = _numCommande;
}
void Commande::setNomClient(Client* _nomClient) {
    nomClient = _nomClient;
}


//Ajouter plat commandés à la commande
void Commande::addPlatCommande(Plat _platCommande) {
    platCommande.push_back(_platCommande);
}

//Ajouter prix du plat à la commande 
void Commande::addPrixCommande(Plat _prixPlatCommande){
    prixPlatCommande.push_back(_prixPlatCommande);
}


//Calcul montant total de la commande
double Commande::getMontantTotal() const{
    double montantTotal = 0.0;
    for (const auto& plat : prixPlatCommande) {
        montantTotal += plat.getPrixPlat();
    }
    return montantTotal;
}


//Afficher les donnees des commandes
void Commande::afficherCommande() const {
    std::cout << "Commande Numero " << numCommande << std::endl;
    std::cout << "Nom du client : " << nomClient->getNomClient() << std::endl;
    std::cout << "Plats dans la commande : ";
    for (const auto& plat : platCommande) {
        std::cout << plat.getNomPlat() << ", " ; 
    }
    std::cout << std::endl;
    std::cout << "Prix des plats dans la commande : ";
    for (const auto& plat : prixPlatCommande) {
        std::cout << plat.getPrixPlat() << ", " ; 
    }
    std::cout << std::endl;
    std::cout << "Montant total de la commande methode  : " << getMontantTotal() << std::endl;
}


//Operateur de comparaison
bool Commande::estSuperieur(Commande commande){
   return (getMontantTotal() > commande.getMontantTotal());
}
bool operator > (Commande commande1, Commande commande2){
    return commande1.estSuperieur(commande2);
}