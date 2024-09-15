//
// Created by NOUR on 12/09/2024.
//

#ifndef ENDGAME_H
#define ENDGAME_H
#include "Game.h"


class EndGame : public GameState {
public:
    void handleRequest(Player *&player1, Player *&player2) override;
};


#endif //ENDGAME_H
