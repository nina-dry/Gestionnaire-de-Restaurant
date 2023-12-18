#ifndef COMMANDE_HPP
#define COMMANDE_HPP

#include <string>
#include <iostream>
#include <vector>

#include "plat.hpp"
#include "client.hpp"


//Déclaration anticipée
class Client;
class Plat;


//Création Classe Commande
class Commande 
{
    //Attributs privés
    private:
        int numCommande;
        Client* nomClient;

        //Association avec Plat  
        std::vector <Plat> platCommande;
        std::vector <Plat> prixPlatCommande;

        //Variable pour le montant total     
        double montantTotal;

    //Attributs publics
    public:
        //Constructeurs
        Commande();
        Commande(int numCommande, Client* nomClient);

        //Getter pour attributs privés
        int getNumCommande() const;
        Client* getNomClient()const;

        //Setters pour attributs privés
        void setNumCommande(int numCommande);
        void setNomClient(Client* nomClient);

        //Ajouter plat commandés à la commande
        void addPlatCommande(Plat _platCommande);

        //Ajouter prix du plat à la commande 
        void addPrixCommande(Plat _prixPlatCommande);

        //Calcul montant total de la commande
        double getMontantTotal() const;

        //Afficher les donnees des commandes
        void afficherCommande() const;

        //Operateur de comparaison
        bool estSuperieur(Commande commande);
};

//Initialisation de l'opérateur de comparaison
bool operator>(Commande commande1, Commande commande2);

#endif 