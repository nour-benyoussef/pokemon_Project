//
// Created by NOUR on 12/09/2024.
//

#include "NoDangerZone.h"
#include <iostream>
#include <ostream>
#include <cstdlib>
#include <ctime>

void NoDangerZone::handleRequest(Player *& player1,Player *& player2) {
     std::cout << "********************* Game state : Welcome to no danger zone ********************" << std::endl;
    std::srand(std::time(0));
    // Define the number of iterations

    int iterations = 2;
    // Adjust the number of iterations as needed
    for (int i = 0; i < iterations; i++) {
        int randomValue = (std::rand() % pokedexInstance->MaxIdPokemon()) + 1;

        player1->getPokeball()->RecupererPokemon(pokedexInstance,randomValue);
    }
    player1->getPokeball()->displayList();
    std::cout << "fin no danger zone " <<std::endl;
    string input;
    std::cout <<"welcome Player 2 your name please : "<< std::endl;
    std::cin >> input;
    player2 = new Player(input);
    nbrwinP2=0;

 }
