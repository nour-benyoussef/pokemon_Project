//
// Created by NOUR on 12/09/2024.
//

#include "Combat.h"

#include <iostream>

#include "PokemonParty.h"

void Combat::handleRequest(Player* player1,Player* player2) {
    std::cout << " ****************  Player 1 to Player 2 : Start Round **********************" << std::endl;
    std::cout << " **************** Every Player choose 6 pokemons **********************" << std::endl;
    int id1;
    int i=0;
    std::vector<int> idParty;
    while (i<6) {
        std::cout<< "Player 1 choose one pokemon , ID : "<<std::endl;
        std::cin >> id1;
        player1->getPokeball()->sortSetOfPokemon();

        if (id1>=player1->getPokeball()->FirstValue() && id1<=player1->getPokeball()->LastValue()&& player1->getPokeball()->hasPokemonWithID(id1)) {
            idParty.push_back(id1);
            i++;
        }else {
            std::cout<< "Pokemon no existing "<<std::endl;
        }

    }
    PokemonParty *party1 =  new PokemonParty(idParty.at(0),idParty.at(1),idParty.at(2),idParty.at(3),idParty.at(4),idParty.at(5),player1->getPokeball());

    int id2;
    int j=0;
    std::vector<int> idParty2;
    while (j<6) {
        std::cout<< "Player 2 choose one pokemon , ID : "<<std::endl;
        std::cin >> id2;
        player2->getPokeball()->sortSetOfPokemon();

        if (id2>=player2->getPokeball()->FirstValue() && id1<=player2->getPokeball()->LastValue()&& player2->getPokeball()->hasPokemonWithID(id2)) {
            idParty2.push_back(id2);
            j++;
        }else {
            std::cout<< "Pokemon no existing"<<std::endl;
        }

    }
    PokemonParty *party2 =  new PokemonParty(idParty2.at(0),idParty2.at(1),idParty2.at(2),idParty2.at(3),idParty2.at(4),idParty2.at(5),player2->getPokeball());

    for (int k=0;k<party1->sizeSetOfPokemon();k++) {
        while (party1->getPokemonbyindice(k)->getHitPoint()!=0 && party2->getPokemonbyindice(k)->getHitPoint()!=0) {
            party1->getPokemonbyindice(k)->AttaquePokemon(party2->getPokemonbyindice(k));

        }
        if (party1->getPokemonbyindice(k)->getHitPoint()==0) {
            party1->removePokemon(k);
        }
        if (party2->getPokemonbyindice(k)->getHitPoint()==0) {
            party2->removePokemon(k);
        }
    }

    if (party1->sizeSetOfPokemon()>party2->sizeSetOfPokemon()) {
        std::cout<< "player 1 win the round , player 2 lose the round"<<std::endl;
        nbrwinP1++;
    }else if (party1->sizeSetOfPokemon()==party2->sizeSetOfPokemon()) {
        std::cout<< "player 1 , player 2 equality in this round "<<std::endl;
    }else {
        std::cout<< "player 2 win the round , player 1 lose the round"<<std::endl;
        nbrwinP2++;
    }
}

