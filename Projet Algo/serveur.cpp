#include "serveur.hpp"
#include "chef.hpp"

#include <string>
#include <iostream>


//Constructeur
Serveur::Serveur(int idServeur, std::string nomServeur, std::string prenomServeur, int ageServeur, int anneeExpServeur, int numCmdPrise, int numCmdServie) : 
                     idServeur(idServeur), nomServeur(nomServeur), prenomServeur(prenomServeur), ageServeur(ageServeur), anneeExpServeur(anneeExpServeur), numCmdPrise(numCmdPrise), numCmdServie(numCmdServie)  {}



//Getter et Setter pour attributs privés
std::string Serveur::getNomServeur() const{
    return nomServeur;
}


void Serveur::setNumCmdPrise(int _numCmdPrise){
    numCmdPrise = _numCmdPrise;
}

void Serveur::setNumCmdServie(int _numCmdServie){
    numCmdServie = _numCmdServie;
}

void Serveur::assignerChef(Chef* nouveauChef){
    chef = nouveauChef;
    chef->ajouterServeur(this);
}



//Afficher les résultats
void Serveur::afficherServeur(){
    std::cout << "Nom du Serveur : " << nomServeur << std::endl;
    std::cout << "numCmdPrise : " << numCmdPrise << std::endl;
    std::cout << "numCmdServie : " << numCmdServie << std::endl;
    std::cout << "Sous la supervision du chef : " << chef->getNomChef() << std::endl;
}
