// Fichier cpp
#include <iostream>
#include "plat.hpp"

Plat::Plat(int jour, int mois, int annee) : jour(jour), mois(mois), annee(annee) {}

// Méthode pour calculer l'âge
int Date::calcul_age() const {
    //La date actuelle a été mise au 1er janvier 2023
    const int jourActuel = 1;
    const int moisActuel = 1;
    const int anneeActuelle = 2023; 

    int age = anneeActuelle - annee;

    // Vérifie si la date d'anniversaire est déjà passé pour cette année
    if (mois > moisActuel || (mois == moisActuel && jour > jourActuel)) {
        age--;
    }

    return age;
}

// Getters
int Date::getJour() const {
    return jour;
}

int Date::getMois() const {
    return mois;
}

int Date::getAnnee() const {
    return annee;
}

// Setters
void Date::setJour(int _jour) {
    jour = _jour;
}

void Date::setMois(int _mois) {
    mois = _mois;
}

void Date::setAnnee(int _annee) {
    annee = _annee;
}


// Implémentation des constructeurs Etudiant
Etudiant::Etudiant(std::string nom) : nom(nom), amendes_bibliotheque(0.0), fraisScolarite(0.0), date_naissance(1, 1, 2000) {}


Etudiant::Etudiant(std::string nom, double amendes_bibliotheque)
    : nom(nom), amendes_bibliotheque(amendes_bibliotheque), fraisScolarite(0.0), date_naissance(1, 1, 2000) {}


Etudiant::Etudiant(std::string nom, double amendes_bibliotheque, double fraisScolarite, Date date_naissance)
    : nom(nom), amendes_bibliotheque(amendes_bibliotheque), fraisScolarite(fraisScolarite), date_naissance(date_naissance) {}


// Implémentation des méthodes publiques
double Etudiant::calcul_montant_total() const {
    return amendes_bibliotheque + fraisScolarite;
}

void Etudiant::Verif_amendes(double amendes) {
    if (amendes >= 0) {
        amendes_bibliotheque = amendes;
    } else {
        std::cerr << "Les amendes doivent être un nombre non négatif." << std::endl;
    }
}

void Etudiant::Verif_frais_scolarite(double frais) {
    fraisScolarite = frais;
}


// Implémentation des getters
std::string Etudiant::getNom() const {
    return nom;
}

double Etudiant::getAmendes_bibliotheque() const {
    return amendes_bibliotheque;
}

double Etudiant::getFraisScolarite() const {
    return fraisScolarite;
}

// Implémentation des setters
void Etudiant::setNom(std::string _nom) {
    nom = _nom;
}
void Etudiant::setAmendes_bibliotheque(double _amendes_bibliotheque) {
    amendes_bibliotheque = _amendes_bibliotheque;
}
void Etudiant::setFraisScolarite(double _fraisScolarite) {
    fraisScolarite = _fraisScolarite;
}
// Affichage des données des étudiants
void Etudiant::afficher() const {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "Amendes de bibliothèque: " << amendes_bibliotheque << std::endl;
    std::cout << "Frais de scolarité: " << fraisScolarite << std::endl;
    std::cout << "Montant total à payer: " << calcul_montant_total() << std::endl;
    std::cout << "Date de naissance: " << date_naissance.getJour() << "/" << date_naissance.getMois() << "/" << date_naissance.getAnnee() << std::endl;
    std::cout << "Âge: " << date_naissance.calcul_age() << " ans" << std::endl;
}
