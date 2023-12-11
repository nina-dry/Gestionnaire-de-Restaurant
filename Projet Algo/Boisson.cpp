// Fichier cpp
#include <iostream>
#include "Boisson.hpp"

// Implémentation du constructeur Boisson

Boisson::Boisson(int idBoisson, bool alccoolBoisson, std::string TypeBoisson,std::string TailleBoisson)
    : idBoisson(idBoisson), TypeBoisson(TypeBoisson), TailleBoisson(TailleBoisson) {}


// Implémentation de la méthode publique



void TypeBoisson::TypeBoisson(std::string TypeBoisson) {
    TypeBoisson = TypeBoisson;
}
void TailleBoisson::TailleBoisson(std::string TailleBoisson) {
    TypeBoisson = TypeBoisson;
}
void alccoolBoisson::alccoolBoisson(bool alccoolBoisson) {
    alccoolBoisson = alccoolBoisson;
}



// Implémentation des getters
int Boisson::Boisson() const {
    return idBoisson;
}

std::string Boisson::getTypeBoisson() const {
    return TypeBoisson;
}

std::string TailleBoisson::getTailleBoisson() const {
    return TailleBoisson;

} 
// Implémentation des setters

void Boisson::setIdBoisson(int _idBoisson) {
    idBoisson = _idBoisson;
}
void Boisson::setTypeBoisson(std::string _TypeBoisson) {
    TypeBoisson = _TypeBoisson;
}

void Boisson::setTailleBoisson(std::string _TypeBoisson) {
    TailleBoisson= _TailleBoisson;
}



// Affichage des données des Boisson
void TypeBoisson::TypeBoisson() const {
    std::cout << "Type de la boisson : " << TypeBoisson() << std::endl;
}
void TailleBoisson::TailleBoisson() const {
    std::cout << "Taille de la boisson : " << TailleBoisson() << std::endl;
}
void alccoolBoisson::alccoolBoisson(bool alccoolBoisson) {
    alccoolBoisson = alccoolBoisson;
}