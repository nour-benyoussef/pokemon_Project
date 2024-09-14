//
// Created by NOUR on 12/09/2024.
//

#include "EndGame.h"

#include <iostream>

void EndGame::handleRequest(Player*&player1,Player*& player2) {
    if(nbrwinP1>=2) {
        std::cout<<" End Game : Player 1, you win the game " <<std::endl;
    } else {
        std::cout<<" End Game : Player 1, you lose the game " <<std::endl;
    }
    if(nbrwinP2>=2) {
        std::cout<<" End Game : Player 2, you win the game " <<std::endl;
    } else {
        std::cout<<" End Game : Player 2, you lose the game " <<std::endl;
    }
}
