#include <iostream>
#include"plat.hpp"
#include "platPrincipal.hpp"
#include"entree.hpp"
#include"boisson.hpp"
#include"dessert.hpp"


int main() {
    // Création de quelques objets de la classe Plat
    Plat plat1(1, "Spaghetti Bolognese", "Delicieuses pates avec une sauce a la viande", "Plat Principal", 12.99, 20);
    Plat plat2(2, "Salade Caesar", "Salade avec poulet, parmesan et croutons", "Plat Principal", 8.99, 15);
    Plat plat3(3, "Burger Deluxe", "Burger avec bacon, fromage, laitue et tomate", "Plat Principal", 15.99, 25);
    Plat plat4(4, "Soupe oignons", "Delicieuses soupe avec oignons et croutons", "Entree", 7.99, 10);
    Plat plat5(5, "Salade chevre", "Salade avec chevre, miel et pain", "Entree", 8.99, 5);
    Plat plat6(6, "Mojito", "Cocktail avec menthe et rhum", "Boisson", 4.99, 5);
    Plat plat7(7, "Sirop au choix", "Fraise, Grenadine, Menthe, Cassis, Peche...", "Boisson", 3.99, 5);
    Plat plat8(6, "Fondant au cholocat", "Fondant au chocolat avec coeur au caramel", "Dessert", 8.99, 10);
    Plat plat9(7, "Glace 2 boules au choix", "Fraise, Chocolat, Vanille, Pistache, Cassis, Peche...", "Dessert", 6.99, 5);
    
    // Création des objets PlatPrincipal
    PlatPrincipal platPrincipal1(std::string("Chaud"), std::string("Frites ou riz"));
    PlatPrincipal platPrincipal2(std::string("Chaud"), std::string("Frites"));
    PlatPrincipal platPrincipal3(std::string("Froid"), std::string("Salade"));

    // Création des objets Entree
    Entree entree1(std::string("Chaud"), std::string("1 personne"));
    Entree entree2(std::string("Chaud"), std::string("1 personne"));

    // Création des objets Boisson
    Boisson boisson1(std::string("Avec alcool"), std::string("30 cl"));
    Boisson boisson2(std::string("Sans alcool"), std::string("30 cl"));

     // Création des objets Dessert
    Dessert dessert1(std::string("Chaud"), std::string("1 personne"));
    Dessert dessert2(std::string("Froid"), std::string("1 ou 2 personne"));

    // Copie des informations du plat dans platPrincipal
    platPrincipal1.copierInfosPlat(plat1);
    platPrincipal2.copierInfosPlat(plat2);
    platPrincipal3.copierInfosPlat(plat3);

    // Copie des informations du plat dans entree
    entree1.copierInfosPlat(plat4);
    entree2.copierInfosPlat(plat5);

     // Copie des informations du plat dans boisson
    boisson1.copierInfosPlat(plat6);
    boisson2.copierInfosPlat(plat7);

    // Copie des informations du plat dans boisson
    dessert1.copierInfosPlat(plat8);
    dessert2.copierInfosPlat(plat9);

    // Affichage des détails du Plat 1
    std::cout << "Au menu Plat 1 :" << std::endl;
    plat1.afficherPlat();
    std::cout << std::endl;

    // Affichage des détails du PlatPrincipal
    std::cout << "Details du Plat 1:" << std::endl;
    platPrincipal1.afficherPlatPrincipal();
    std::cout << std::endl;

    // Affichage des détails des nouveaux Plats et PlatPrincipal
    std::cout << "Au menu Plat 2 :" << std::endl;
    plat2.afficherPlat();
    std::cout << std::endl;

    std::cout << "Details du Plat 2 :" << std::endl;
    platPrincipal2.afficherPlatPrincipal();
    std::cout << std::endl;

    std::cout << "Au menu Plat 3 :" << std::endl;
    plat3.afficherPlat();
    std::cout << std::endl;

    std::cout << "Details du Plat 3 :" << std::endl;
    platPrincipal3.afficherPlatPrincipal();
    std::cout << std::endl;

    std::cout << "Au menu Plat 4 :" << std::endl;
    plat4.afficherPlat();
    std::cout << std::endl;

    std::cout << "Details du Plat 4 :" << std::endl;
    entree1.afficherEntree();
    std::cout << std::endl;

    std::cout << "Au menu Plat 5 :" << std::endl;
    plat5.afficherPlat();
    std::cout << std::endl;

    std::cout << "Details du Plat 5 :" << std::endl;
    entree2.afficherEntree();
    std::cout << std::endl;

    std::cout << "Au menu Plat 6 :" << std::endl;
    plat6.afficherPlat();
    std::cout << std::endl;

    std::cout << "Details du Plat 6 :" << std::endl;
    boisson1.afficherBoisson();
    std::cout << std::endl;

    std::cout << "Au menu Plat 7 :" << std::endl;
    plat6.afficherPlat();
    std::cout << std::endl;

    std::cout << "Details du Plat 7 :" << std::endl;
    boisson2.afficherBoisson();
    std::cout << std::endl;

    std::cout << "Au menu Plat 8 :" << std::endl;
    plat8.afficherPlat();
    std::cout << std::endl;

    std::cout << "Details du Plat 8 :" << std::endl;
    dessert1.afficherDessert();
    std::cout << std::endl;

    std::cout << "Au menu Plat 9 :" << std::endl;
    plat9.afficherPlat();
    std::cout << std::endl;

    std::cout << "Details du Plat 9 :" << std::endl;
    dessert2.afficherDessert();
    std::cout << std::endl;

    return 0;
}
