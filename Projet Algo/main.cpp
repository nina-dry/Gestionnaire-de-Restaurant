#include <iostream>
#include <sstream>

#include "restaurant.hpp"
#include "cuisinier.hpp"
#include "serveur.hpp"
#include "chef.hpp"
#include "plat.hpp"
#include "entree.hpp"
#include "platPrincipal.hpp"
#include "dessert.hpp"
#include "boisson.hpp"
#include "client.hpp"
#include "reservation.hpp"
#include "commande.hpp"


int main() {
    // Création des objets pour chaque classe

    //Cuisinier
    Cuisinier cuisinier1(1, "Laurent Lise", 35, 8, "Pizza", 52);
    Cuisinier cuisinier2(2, "Leclerc Theo", 25, 10, "Grill", 57);
    Cuisinier cuisinier3(3, "Dubois Alice ", 23, 3, "Patisserie", 58);

    //Serveur
    Serveur serveur1(1, "Leroy Arthur", 40, 12);
    Serveur serveur2(2, "Girard Lea", 20, 2);
    Serveur serveur3(3, "Rousseau Louis", 32, 5);

    //Chef
    Chef chefCuisinier(1, "Chef Joris", 30, 10);
    Chef chefServeur(2, "Chef Sandrine", 45, 5);

    //Entree
    Entree entree1(1, "Terrine de poisson", "Terrine de poisson (saumon et crevettes) avec sa mayonnaise maison", "Entree", 12.5, 20, "Froide", "1 personne");
    Entree entree2(2, "Soupe a l'oignon", "Soupe avec oignons et croutons", "Entree", 7.99, 15, "Chaude", "1 personne");
    Entree entree3(3, "Salade de chevre chaud", "Salade avec chevre, miel et pain", "Entree", 9.99, 5, "Froide", "1 personne");
    Entree entree4(4, "Salade Cesar", "Salade avec oeufs, poulet, croutons, parmesan et vinaigrette Cesar", "Entree", 9.99, 10, "Froide", "1 personne");
    Entree entree5(5, "Oeuf Meurette", "Oeuf poche dans une sauce au vin rouge, lardons, champignons et oignons", "Entree", 10.5, 25, "Chaude", "1 personne");

    //Plat Principal
    PlatPrincipal platPrincipal1(1, "Spaghettis Bolognese", "Pates avec une sauce tomate a la viande", "Plat Principal", 12.99, 20, "Chaud", "Aucun");
    PlatPrincipal platPrincipal2(2, "Burger Classique", "Burger avec bacon, fromage, laitue et tomate", "Plat Principal", 15.99, 25, "Chaud", "Frites");
    PlatPrincipal platPrincipal3(3, "Poulet a la creme", "Poulet avec une sauce a la creme", "PlatPrincipal", 14.5, 25, "Chaud", "Gratin dauphinois");
    PlatPrincipal platPrincipal4(4, "Pizza 4 fromages", "Pizza avec du chevre, roquefort, mozzarella, reblochon", "PlatPrincipal", 13.00, 15, "Chaud", "Aucun");
    PlatPrincipal platPrincipal5(5, "Souffle de St Jacques", "Souffle aux noix de Saint-Jacques avec une sauce cremeuse aux crustaces", "PlatPrincipal", 18.5, 30, "Chaud", "Risotto");

    //Dessert
    Dessert dessert1(1, "Glace 2 boules au choix", "Fraise, Chocolat, Vanille, Pistache, Cassis, Peche...", "Dessert", 3.90, 5, "Froid", "1 personne");
    Dessert dessert2(2, "Fondant au cholocat", "Fondant au chocolat avec coeur coulant", "Dessert", 7.00, 15, "Chaud", "1 personne");
    Dessert dessert3(3, "Ile flottante", "Blanc en neige avec de la creme anglaise", "Dessert", 6.50, 20, "Froid", "1 personne");
    Dessert dessert4(4, "Tiramisu", "Dessert italien a base de biscuits a la cuillere, cafe et mascarpone", "Dessert", 7.00, 10, "Tiede", "1 personne");
    Dessert dessert5(5, "Fondue au chocolat", "Fondue au chocolat avec des fruits et chamallows", "Dessert", 10.00, 25, "Chaud", "2 personnes");

    //Boisson
    Boisson boisson1(1, "Mojito", "Cocktail avec menthe et rhum", "Boisson", 9.50, 7, "Avec Alcool", "40 cl");
    Boisson boisson2(2, "Pichet de vin", "Pichet de vin blanc, rouge ou rose", "Boisson", 10.80, 5, "Avec Alcool", "50cl");
    Boisson boisson3(3, "Sirop au choix", "Fraise, Grenadine, Menthe, Cassis, Peche...", "Boisson", 2.50, 5, "Sans Alcool", "25 cl");
    Boisson boisson4(4, "Soda", "Coca-Cola, Fanta, Ice Tea, Oasis", "Boisson", 3.90, 3, "Sans Alcool", "33cl");
    Boisson boisson5(5, "Jus de fruits", "Jus de pomme, orange, ananas, raisin, abricot, tomate...", "Boisson", 3.00, 3, "Sans Alcool", "30cl");

    //Client
    Client client1(1, "Manon", "06 25 84 76 95");
    Client client2(2, "Mia", "07 41 62 85 34");
    Client client3(3, "Hugo", "06 27 15 98 52");
    Client client4(4, "Malo", "06 14 15 85 62");
    Client client5(5, "Jerome", "06 95 74 85 92");
    Client client6(6, "Alba", "07 85 71 62 45");
    Client client7(7, "Lucas", "07 87 42 51 62");
    Client client8(8, "Iris", "06 24 28 74 42");
    Client client9(9, "Ines", "06 74 85 72 65");
    Client client10(10, "Leo", "07 14 42 59 38");

    //Reservation
    Reservation reservation1(20, &client2, 20, 12, 2023, 19, 30, 2);
    Reservation reservation2(21, &client4, 22, 12, 2023, 20, 30, 4);
    Reservation reservation3(22, &client6, 22, 12, 2023, 20, 00, 8);
    Reservation reservation4(23, &client8, 29, 10, 2023, 19, 45, 2);

    //Commande
    Commande commande1(50, &client1);
    Commande commande2(51, &client2);
    Commande commande3(52, &client3);
    Commande commande4(53, &client4);
    Commande commande5(54, &client5);
    Commande commande6(55, &client6);
    Commande commande7(56, &client7);
    Commande commande8(57, &client8);
    Commande commande9(58, &client9);
    Commande commande10(59, &client10);

    //Restaurant
    std::vector<Plat> listePlats = {
        entree1, entree2, entree3, entree4, entree5,
        platPrincipal1, platPrincipal2, platPrincipal3, platPrincipal4, platPrincipal5,
        dessert1, dessert2, dessert3, dessert4, dessert5, 
        boisson1, boisson2, boisson3, boisson4, boisson5};

    Restaurant restaurant(1, "Au bon gourmet", "Avenue des Freres Lumieres", 69008, "Lyon", "Restaurant classique", listePlats);


    //Methode Virtuelle
    Plat* plat1 = &entree1;
    Plat* plat2 = &entree2;
    Plat* plat3 = &entree3;
    Plat* plat4 = &entree4;
    Plat* plat5 = &entree5;

    Plat* plat6 = &platPrincipal1;
    Plat* plat7 = &platPrincipal2;
    Plat* plat8 = &platPrincipal3;
    Plat* plat9 = &platPrincipal4;
    Plat* plat10 = &platPrincipal5;

    Plat* plat11 = &dessert1;
    Plat* plat12 = &dessert2;
    Plat* plat13 = &dessert3;
    Plat* plat14 = &dessert4;
    Plat* plat15 = &dessert5;

    Plat* plat16 = &boisson1;
    Plat* plat17 = &boisson2;
    Plat* plat18 = &boisson3;
    Plat* plat19 = &boisson4;
    Plat* plat20 = &boisson5;


    //Affectations des objets aux methodes pour chaque classe
    
    //Cuisinier
        //Assigner un chef
    cuisinier1.assignerChef(&chefCuisinier);
    cuisinier2.assignerChef(&chefCuisinier);
    cuisinier3.assignerChef(&chefCuisinier);

        //Associer un plat au cuisinier
    cuisinier1.addPlat(entree3);
    cuisinier1.addPlat(platPrincipal4);
    cuisinier1.addPlat(dessert5);
    cuisinier1.addPlat(boisson5);

    cuisinier2.addPlat(platPrincipal4);
    cuisinier2.addPlat(boisson5);

    cuisinier3.addPlat(platPrincipal2);
    cuisinier3.addPlat(boisson1);


    //Serveur
        //Assigner un chef
    serveur1.assignerChef(&chefServeur);
    serveur2.assignerChef(&chefServeur);
    serveur3.assignerChef(&chefServeur);


        //Attribuez les commandes prises au serveur
    serveur1.attribuerCommandePrise(commande1);
    serveur1.attribuerCommandePrise(commande4);
    serveur1.attribuerCommandePrise(commande5);
    serveur1.attribuerCommandePrise(commande10);

    serveur2.attribuerCommandePrise(commande2);
    serveur2.attribuerCommandePrise(commande6);
    serveur2.attribuerCommandePrise(commande8);
    
    serveur3.attribuerCommandePrise(commande7);
    serveur3.attribuerCommandePrise(commande3);
    serveur3.attribuerCommandePrise(commande9);


        //Attribuez les commandes servies au serveur
    serveur1.attribuerCommandeServie(commande1);
    serveur1.attribuerCommandeServie(commande4);
    serveur1.attribuerCommandeServie(commande5);

    serveur2.attribuerCommandeServie(commande2);
    serveur2.attribuerCommandeServie(commande6);
    
    serveur3.attribuerCommandeServie(commande7);


    //Commande

        //Attribuez les plats commande à cahque commande
    commande1.addPlatCommande(entree2);
    commande1.addPlatCommande(platPrincipal3);
    commande1.addPlatCommande(dessert1);
    commande1.addPlatCommande(boisson2);

    commande2.addPlatCommande(entree1);
    commande2.addPlatCommande(platPrincipal5);
    commande2.addPlatCommande(dessert3);
    commande2.addPlatCommande(boisson4);
    
    commande3.addPlatCommande(entree3);
    commande3.addPlatCommande(platPrincipal4);
    commande3.addPlatCommande(dessert5);
    commande3.addPlatCommande(boisson5);

    commande4.addPlatCommande(entree5);
    commande4.addPlatCommande(platPrincipal1);
    commande4.addPlatCommande(dessert4);
    commande4.addPlatCommande(boisson3);

    commande5.addPlatCommande(platPrincipal2);
    commande5.addPlatCommande(dessert2);
    commande5.addPlatCommande(boisson4);

    commande6.addPlatCommande(platPrincipal5);
    commande6.addPlatCommande(dessert4);
    commande6.addPlatCommande(boisson2);
    
    commande7.addPlatCommande(platPrincipal3);
    commande7.addPlatCommande(dessert5);
    commande7.addPlatCommande(boisson1);

    commande8.addPlatCommande(platPrincipal4);
    commande8.addPlatCommande(boisson5);

    commande9.addPlatCommande(platPrincipal2);
    commande9.addPlatCommande(boisson1);

    commande10.addPlatCommande(platPrincipal3);


        //Attribuez les prix commande à cahque commande
    commande1.addPrixCommande(entree2);
    commande1.addPrixCommande(platPrincipal3);
    commande1.addPrixCommande(dessert1);
    commande1.addPrixCommande(boisson2);

    commande2.addPrixCommande(entree1);
    commande2.addPrixCommande(platPrincipal5);
    commande2.addPrixCommande(dessert3);
    commande2.addPrixCommande(boisson4);
    
    commande3.addPrixCommande(entree3);
    commande3.addPrixCommande(platPrincipal4);
    commande3.addPrixCommande(dessert2);
    commande3.addPrixCommande(boisson5);
    
    commande4.addPrixCommande(entree5);
    commande4.addPrixCommande(platPrincipal1);
    commande4.addPrixCommande(dessert4);
    commande4.addPrixCommande(boisson3);

    commande5.addPrixCommande(platPrincipal2);
    commande5.addPrixCommande(dessert2);
    commande5.addPrixCommande(boisson4);

    commande6.addPrixCommande(platPrincipal5);
    commande6.addPrixCommande(dessert4);
    commande6.addPrixCommande(boisson2);
    
    commande7.addPrixCommande(platPrincipal3);
    commande7.addPrixCommande(dessert5);
    commande7.addPrixCommande(boisson1);

    commande8.addPrixCommande(platPrincipal4);
    commande8.addPrixCommande(boisson5);

    commande9.addPrixCommande(platPrincipal2);
    commande9.addPrixCommande(boisson1);

    commande10.addPrixCommande(platPrincipal3);



    //-------------------------------AFFICHAGE DU GESTIONNAIRE DE RESTAURANT-------------------------------------------------------//

    std::cout << "\n------------------------------------------------------------------------------------------------\n";
    std::cout << "\n\t\tGestionaire d'un restaurant : \n";
    std::cout << "\n------------------------------------------------------------------------------------------------\n\n";
    

    //Affichage du restaurant
    restaurant.afficherRestaurant(); std::cout << "\n"; 
    

    std::cout << "\n------------------------------------------------------------------------------------------------\n";


    std::cout << "\n\t\tLes Plats a la carte en detail :  \n";

    //Affichage des entrees (avec methode d'affichage normal)
    std::cout << "\n\tEntrees : \n\n";
    entree1.afficherPlat(); std::cout << "\n"; 
    entree2.afficherPlat(); std::cout << "\n"; 
    entree3.afficherPlat(); std::cout << "\n"; 
    entree4.afficherPlat(); std::cout << "\n"; 
    entree5.afficherPlat(); std::cout << "\n"; 

    //Affichage des plats principaux (avec methode d'affichage normal)
    std::cout << "\n\tPlats : \n\n";
    platPrincipal1.afficherPlat(); std::cout << "\n"; 
    platPrincipal2.afficherPlat(); std::cout << "\n"; 
    platPrincipal3.afficherPlat(); std::cout << "\n"; 
    platPrincipal4.afficherPlat(); std::cout << "\n"; 
    platPrincipal5.afficherPlat(); std::cout << "\n"; 

    //Affichage des desserts (avec affichage d'une methode virtuelle)
    std::cout << "\n\tDesserts : \n\n";
    plat11->afficherPlat(); std::cout << "\n"; 
    plat12->afficherPlat(); std::cout << "\n"; 
    plat13->afficherPlat(); std::cout << "\n"; 
    plat14->afficherPlat(); std::cout << "\n"; 
    plat15->afficherPlat(); std::cout << "\n"; 

    //Affichage des boissons (avec affichage d'une methode virtuelle)
    std::cout << "\n\tBoissons : \n\n";
    plat16->afficherPlat(); std::cout << "\n"; 
    plat17->afficherPlat(); std::cout << "\n"; 
    plat18->afficherPlat(); std::cout << "\n"; 
    plat19->afficherPlat(); std::cout << "\n"; 
    plat20->afficherPlat(); std::cout << "\n"; 


    std::cout << "\n------------------------------------------------------------------------------------------------\n";
    

    std::cout << "\n\t\t Notre personnel :  \n";
    
    //Affichage des cuisiniers
    std::cout << "\n\tLes Cuisiniers : \n";
    cuisinier1.afficherCuisinier(); std::cout << "\n"; 
    cuisinier2.afficherCuisinier(); std::cout << "\n"; 
    cuisinier3.afficherCuisinier(); std::cout << "\n"; 
    
    //Affichage des serveurs
    std::cout << "\n\tLes Serveurs : \n";
    serveur1.afficherServeur(); std::cout << "\n"; 
    serveur2.afficherServeur(); std::cout << "\n"; 
    serveur3.afficherServeur(); std::cout << "\n"; 

    //Affichage des chefs
    std::cout << "\n\tLes Chefs : \n";
    std::cout << "Informations Chef Cuisinier \n";
    chefCuisinier.afficherChef(); std::cout << "\n"; 
    std::cout << "\nInformations Chef Serveur \n";
    chefServeur.afficherChef(); std::cout << "\n"; 


    std::cout << "\n------------------------------------------------------------------------------------------------\n";
    

    std::cout << "\n\t\t Nos clients :  \n";
    
    //Affichage des clients
    std::cout << "\n\tLes Clients : \n";
    client1.afficherClient(); std::cout << "\n"; 
    client2.afficherClient(); std::cout << "\n"; 
    client3.afficherClient(); std::cout << "\n"; 
    client4.afficherClient(); std::cout << "\n"; 
    client5.afficherClient(); std::cout << "\n"; 
    client6.afficherClient(); std::cout << "\n"; 
    client7.afficherClient(); std::cout << "\n"; 
    client8.afficherClient(); std::cout << "\n"; 
    client9.afficherClient(); std::cout << "\n"; 
    client10.afficherClient(); std::cout << "\n"; 

    //Affichage des reservations
    std::cout << "\n\tLes Reservations : \n";
    reservation1.afficherReservation(); std::cout << "\n"; 
    reservation2.afficherReservation(); std::cout << "\n"; 
    reservation3.afficherReservation(); std::cout << "\n"; 
    reservation4.afficherReservation(); std::cout << "\n"; 

    //Affichage des commandes
    std::cout << "\n\tLes Commandes : \n";
    std::cout << "\n    Formules Entree Plat Dessert Boisson : \n";
    commande1.afficherCommande(); std::cout << "\n"; 
    commande2.afficherCommande(); std::cout << "\n"; 
    commande3.afficherCommande(); std::cout << "\n"; 
    commande4.afficherCommande(); std::cout << "\n"; 
    
    std::cout << "\n    Formules Plat Dessert Boisson : \n";
    commande5.afficherCommande(); std::cout << "\n"; 
    commande6.afficherCommande(); std::cout << "\n"; 
    commande7.afficherCommande(); std::cout << "\n"; 
    
    std::cout << "\n    Formules Plat Boisson : \n";
    commande8.afficherCommande(); std::cout << "\n"; 
    commande9.afficherCommande(); std::cout << "\n"; 
    
    std::cout << "\n    Plats a la carte : \n";
    commande10.afficherCommande(); std::cout << "\n"; 


    std::cout << "\n------------------------------------------------------------------------------------------------\n";


    std::cout << "\n\tComparaisons entre nos clients : \n";

    //Comparaison des additions
        //Comparaison des additions formules Entree Plat Dessert Boisson
    std::cout << "\n\tComparaisons entre les additions des formules Entree, Plat, Dessert, Boisson : \n";
    Commande CommandeMax;
    if (commande1 > commande2){
        std::cout << client1.getNomClient() << " a une addition superieure a " << client2.getNomClient() << "\n";
        CommandeMax = commande1;
    }else {
        std::cout << client2.getNomClient() << " a une addition superieure a " << client1.getNomClient() << "\n";
        CommandeMax = commande2;
    }
    if (CommandeMax > commande3){
        std::cout << CommandeMax.getNomClient()->getNomClient() << " a une addition superieure a " << client3.getNomClient() << "\n";
        CommandeMax = CommandeMax;
    }else{
        CommandeMax = commande3;
    }
    if (CommandeMax > commande4){
        std::cout << CommandeMax.getNomClient()->getNomClient() << " a une addition superieure a " << client4.getNomClient() << "\n";
        CommandeMax = CommandeMax;
    }else{
        CommandeMax = commande4;
    }
    std::cout << "Donc " << CommandeMax.getNomClient()->getNomClient() << " a une addition superieure a tous les autres clients ayant la meme formule (Entree, Plat, Dessert, Boisson) " << "\n";


        //Comparaison des additions formules Plat Dessert Boisson
    std::cout << "\n\tComparaisons entre les additions des formules Plat, Dessert, Boisson : \n";
    if (commande5 > commande6){
        std::cout << client5.getNomClient() << " a une addition superieure a " << client6.getNomClient() << "\n";
        CommandeMax = commande5;
    }else {
        std::cout << client6.getNomClient() << " a une addition superieure a " << client5.getNomClient() << "\n";
        CommandeMax = commande6;
    }
    if (CommandeMax > commande7){
        std::cout << CommandeMax.getNomClient()->getNomClient() << " a une addition superieure a " << client7.getNomClient() << "\n";
        CommandeMax = CommandeMax;
    }else{
        CommandeMax = commande7;
    }
    std::cout << "Donc " << CommandeMax.getNomClient()->getNomClient() << " a une addition superieure a tous les autres clients ayant la meme formule (Plat, Dessert, Boisson) " << "\n";


        //Comparaison des additions formules Plat Boisson
    std::cout << "\n\tComparaisons entre les additions des formules Plat, Boisson : \n";
    if (commande8 > commande9){
        std::cout << client8.getNomClient() << " a une addition superieure a " << client9.getNomClient() << "\n";
    } else if (commande9 > commande8){
        std::cout << client9.getNomClient() << " a une addition superieure a " << client8.getNomClient() << "\n";
    }else  {
        std::cout << client8.getNomClient() << " et " << client9.getNomClient() << " ont une addition egale " << "\n";
    }

    
        //Comparaison des annees d'experience des chefs
    std::cout << "\n\tLes annees d'experience des chefs : \n";
    if (chefCuisinier > chefServeur){
        std::cout << chefCuisinier.getNomChef() << " a plus d'experience en tant que chef que " << chefServeur.getNomChef() << "\n";
    } else{
        std::cout << chefServeur.getNomChef() <<  " a plus d'experience en tant que chef que " << chefCuisinier.getNomChef() << "\n";
    }


        //Comparaison des annees d'experience des cuisiniers
    std::cout << "\n\tLes annees d'experience des cuisiniers : \n";
    
        //Initialisations des variables 
    std::string resultat1;
    std::string resultat2;
    std::ostringstream oss;
    Cuisinier anneeExpMax;

        //Comparaison avec operator
    if (cuisinier1 > cuisinier2){
        std::cout << cuisinier1.getNomCuisinier() << " a plus d'experience en tant que cuisinier que " << cuisinier2.getNomCuisinier() << "\n";
        anneeExpMax = cuisinier1;
        oss << cuisinier1.getNomCuisinier() << " a plus d'experience en tant que cuisinier que " << cuisinier2.getNomCuisinier();
        resultat1 = oss.str();
    } else{
        std::cout << cuisinier2.getNomCuisinier() <<  " a plus d'experience en tant que cuisinier que " << cuisinier1.getNomCuisinier() << "\n";
        anneeExpMax = cuisinier2;
        oss << cuisinier2.getNomCuisinier() <<  " a plus d'experience en tant que cuisinier que " << cuisinier1.getNomCuisinier();
        resultat1 = oss.str();
    }

        //Comparaison des annees d'experience des cuisiniers
    std::cout << "\n\tLes ages des cuisiniers : \n";

        //Réinitialisation du contenu du stringstream
    oss.str("");

        //Initialisations des variables 
    Cuisinier ageMax;

        //Comparaison avec operator
    if (cuisinier1 < cuisinier2){
        std::cout << cuisinier1.getNomCuisinier() << " est plus jeune que " << cuisinier2.getNomCuisinier() << "\n";
        ageMax = cuisinier1;
        oss << cuisinier1.getNomCuisinier() << " est plus jeune que " << cuisinier2.getNomCuisinier();        
        resultat2 = oss.str();
    } else{
        std::cout << cuisinier2.getNomCuisinier() <<  " est plus jeune que " << cuisinier1.getNomCuisinier() << "\n";
        ageMax = cuisinier2;
        oss << cuisinier2.getNomCuisinier() <<  " est plus jeune que " << cuisinier1.getNomCuisinier();
        resultat2 = oss.str();
    }

        //Comparaison Age et Annees d'experience des cuisiniers
    std::cout << "\n\t Les ages et annees d'experience des cuisiniers : \n";
    std::cout << resultat2 << " pourtant " << resultat1 << std::endl;

    return 0;
    
}