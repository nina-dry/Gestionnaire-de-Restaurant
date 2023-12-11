#include <iostream>
#include "boisson.cpp"
#include "chefService.cpp"
#include "client.cpp"
#include "commande.cpp"
#include "cuisinier.cpp"
#include "dessert.cpp"
#include "entree.cpp"
#include "plat.cpp"
#include "platPrincipal.cpp"
#include "reservation.cpp"
#include "restaurant.cpp"
#include "serveur.cpp"
 

int main (int argc, char const* argv[]){
    Restaurant* restaurant=new Restaurant("Restaurant : ")
    restaurant->plat.afficher();
    delete restaurant;
    restaurant=0;
    return 0;

 
}