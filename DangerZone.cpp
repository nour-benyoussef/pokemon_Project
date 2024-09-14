//
// Created by NOUR on 12/09/2024.
//
#include <iostream>
#include <ostream>
#include <cstdlib>
#include <ctime>
#include "DangerZone.h"
void DangerZone::handleRequest(Player*& player1,Player*& player2) {
    std::cout << "************* Game state : Welcome to  danger zone another player is here ****************" << std::endl;



    std::srand(std::time(0));
    // Define the number of iterations
    int iterations = 6;  // Adjust the number of iterations as needed
    for (int i = 0; i < iterations; i++) {
        int randomValue1 = (std::rand() % pokedexInstance->MaxIdPokemon()) + 1;
        player1->getPokeball()->RecupererPokemon(pokedexInstance,randomValue1);

        int randomValue2 = (std::rand() % pokedexInstance->MaxIdPokemon()) + 1;
        player2->getPokeball()->RecupererPokemon(pokedexInstance,randomValue2);

    }
    std::cout << "Player 1" <<std::endl;

    player1->getPokeball()->displayList();
    std::cout << "Player 2" <<std::endl;

    player2->getPokeball()->displayList();
std::cout << "fin danger zone" <<std::endl;
}

