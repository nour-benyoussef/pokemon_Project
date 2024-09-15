//
// Created by NOUR on 12/09/2024.
//

#ifndef GAME_H
#define GAME_H
#include "Attente.h"
#include "GameState.h"


class Game {
private:
    GameState *state;
    Player *player1 = nullptr;
    Player *player2 = nullptr;

public:
    Game();
    void setState(GameState *newState);

    void request();
};


#endif //GAME_H
