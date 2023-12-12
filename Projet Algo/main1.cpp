#include <iostream>
#include <string>
#include "client.hpp"
#include "commande.hpp"
#include "plat.hpp"

int main(){
    Client client1(1,"Client A",061);
    Client client2(2,"Client B ",062);

    Plat plat1(1, "Spaghetti Bolognese", "Delicieuses pates avec une sauce a la viande", "Plat Principal", 12.99, 20);
    Plat plat2(2, "Salade Caesar", "Salade avec poulet, parmesan et croutons", "Plat Principal", 8.99, 15);
    
    Commande commande1(1, plat1, &client1);
    Commande commande2(2, plat2,&client2);


    client1.setCommande(&commande1);
    client2.setCommande(&commande2);


    client1.afficherClient();
    client1.getCommande()->afficherCommande();
    std::cout << std::endl; 

    client2.afficherClient();
    client2.getCommande()->afficherCommande();






   
  /* client1.afficherClient();
    client2.afficherClient();
    std::cout << std::endl; 
    client1.afficherCommande();
    client2.afficherCommande();   */

    return 0;


}