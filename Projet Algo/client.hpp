// Fichier hpp
#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <string>

class Client {
private:
    int idClient;
    std::string nomClient;
    int telClient;

public:
    // Constructeur
    Client(int idClient,std::string nomClient, int telClient);

    // Méthode publique
    void afficherClient() const;

    // les getters
    int getIdClient() const;
    std::string getNomClient() const;
    int getTelClient() const;

    // les setters
    void setIdClient(int idClient);
    void setNomClient(std::string nomClient);
    void setTelClient(int telClient);

};

#endif //CLIENT_HPP