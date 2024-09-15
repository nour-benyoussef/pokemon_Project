//
// Created by NOUR on 12/09/2024.
//

#include "Game.h"

void Game::setState(GameState *State) {
    this->state = State;
}

Game::Game() {
    state = new Attente();
}

void Game::request() {
    this->state->handleRequest(player1, player2);
}


