#ifndef SERVEUR_HPP
#define SERVEUR_HPP

#include <string>
#include <iostream>
#include <vector>

#include "chef.hpp"
#include "commande.hpp"


// Déclaration anticipée
class Chef; 
class Commande;


//Création Classe Serveur
class Serveur 
{
    //Attributs privés
    private : 
        int idServeur; 
        std::string nomServeur;
        int ageServeur;
        int anneeExpServeur;
        std::vector<Commande> cmdPrise;
        std::vector<Commande> cmdServie;
        Chef* chef;

        //Association avec classe Commande
        Commande commande;


    //Attributs publics
    public : 
        //Constructeurs
        Serveur();
        Serveur(int idServeur, std::string nomServeur, int ageServeur, int anneeExpServeur);


        //Getters pour attributs privés
        int getIdServeur() const;
        std::string getNomServeur() const;
        int getAgeServeur() const;
        int getAnneeExpServeur() const;


        //Setters pour attributs privés
        void setIdServeur(int idServeur);
        void setNomServeur (std::string NomServeur);
        void setAgeServeur(int ageServeur);
        void setAnneeExpServeur(int anneeExpServeur);


        //Attribuer commandes aux serveurs
            //Getters
        const std::vector<Commande>& getCmdPrise() const;
        const std::vector<Commande>& getCmdServie() const;
            //Setters
        void attribuerCommandePrise(const Commande& commande);
        void attribuerCommandeServie(const Commande& commande);


        //Association avec classe Commande
        void setCommande(Commande _commande);
        Commande getCommande() const;


        //Assigner un chef au serveur
        void assignerChef(Chef* nouveauChef);


        //Afficher les donnees du serveur
        void afficherServeur();

};

#endif