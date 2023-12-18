#include <string>
#include <iostream>
#include <vector>

#include "serveur.hpp"
#include "chef.hpp"


//Constructeurs
Serveur::Serveur() {Commande commande;}
Serveur::Serveur(int idServeur, std::string nomServeur, int ageServeur, int anneeExpServeur) : 
                 idServeur(idServeur), nomServeur(nomServeur), ageServeur(ageServeur), anneeExpServeur(anneeExpServeur)  {}


//Getters pour attributs privés
int Serveur::getIdServeur() const {
    return idServeur;
}
std::string Serveur::getNomServeur() const{
    return nomServeur;
}
int Serveur::getAgeServeur() const{
    return ageServeur;
}
int Serveur::getAnneeExpServeur() const{
    return anneeExpServeur;
}
const std::vector<Commande>& Serveur::getCmdPrise() const {
    return cmdPrise;
}
const std::vector<Commande>& Serveur::getCmdServie() const {
    return cmdServie;
}


//Setters pour attributs privés
void Serveur::setIdServeur(int _idServeur){
    idServeur = _idServeur;
}
void Serveur::setNomServeur(std::string _nomServeur){
    nomServeur = _nomServeur;
}
void Serveur::setAgeServeur(int _ageServeur){
    ageServeur = _ageServeur;
}
void Serveur::setAnneeExpServeur(int _anneeExpServeur){
    anneeExpServeur = _anneeExpServeur;
}
void Serveur::attribuerCommandePrise(const Commande& commande) {
    cmdPrise.push_back(commande);
}
void Serveur::attribuerCommandeServie(const Commande& commande) {
    cmdServie.push_back(commande);
}


//Association avec classe Commande
Commande Serveur::getCommande() const {
    return commande;
}
void Serveur::setCommande(Commande _commande) {
    commande = _commande;
}


//Assigner un chef au cuisinier
void Serveur::assignerChef(Chef* nouveauChef){
    chef = nouveauChef;
    chef->ajouterServeur(this);
}


//Afficher les donnees du serveur
void Serveur::afficherServeur(){
    std::cout << "Serveur Numero " << idServeur << std::endl;
    std::cout << "Nom du Serveur : " << nomServeur << std::endl;
    std::cout << "Sous la supervision du chef : " << chef->getNomChef() << std::endl;
    std::cout << "Numero de commandes prises : ";
    for (const auto& commande : cmdPrise) {
        std::cout << commande.getNumCommande() << ", ";
    }
    std::cout << std::endl;
    std::cout << "Numero de commandes servies : ";
    for (const auto& commande : cmdServie) {
        std::cout << commande.getNumCommande() << ", ";
    }
    std::cout << std::endl;
}