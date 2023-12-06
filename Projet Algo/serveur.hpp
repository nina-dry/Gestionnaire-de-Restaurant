#ifndef SERVEUR_HPP
#define SERVEUR_HPP

#include <string>
#include <iostream>

//Création Classe Serveur
class Serveur 
{
    //Attributs privés
    private : 
        int idServeur; 
        std::string nomServeur;
        std::string prenomServeur;
        int ageServeur;
        int anneeExpServeur;
        int numCmdPrise;
        int numCmdServie;

    public : 
        //Constructeurs
        Serveur();
        Serveur(int idServeur, std::string nomServeur, std::string prenomServeur, int ageServeur, int anneeExpServeur, int numCmdPrise, int numCmdServie);

        //Getter et Setter pour attributs privés
        void getIdServeur() const;
        std::string getNomServeur() const;
        std::string getPrenomServeur() const;
        void setAgeServeur() const;
        void setAnneeExpServeur() const;
        void setNumCmdPrise(int _numCmdPrise);
        void setNumCmdServie(int _numCmdServie);

        //Affichage 
        void afficherServeur();

};

#endif