#include <iostream>
#include"plat.hpp"
#include"restaurant.hpp"


// Exemple d'utilisation
int main() {
    // Création de plats
    Plat plat1(1, "Pizza Margherita", "Délicieuse pizza avec tomate et mozzarella", "Pizza", 10.99, 20);
    Plat plat2(2, "Salade César", "Salade fraîche avec poulet, parmesan et croutons", "Salade", 8.99, 15);

    // Création d'un restaurant avec des plats
    std::vector<Plat> platsRestaurant = {plat1, plat2};
    Restaurant restaurant(1, "La Pizzeria", "123 Rue Principale", "Villeville", 12345, platsRestaurant, "Italien");

    // Affichage du restaurant avec les noms des plats
    restaurant.afficherRestaurant();


    return 0;
}
