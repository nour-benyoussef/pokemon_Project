//
// Created by NOUR on 12/09/2024.
//

#include "Game.h"
void Game::setState(GameState *State) {
    this->state =State;
}
void Game::request() {
    this->state->handleRequest(player1,player2);
}


void Game::setPlayer(Player* player) {
    player1 = player;
}

Player* Game::getPlayer() {
    return player1;
}
