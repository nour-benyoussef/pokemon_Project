//
// Created by NOUR on 12/09/2024.
//

#ifndef COMBAT_H
#define COMBAT_H
#include "GameState.h"


class Combat : public GameState {
public:
    void handleRequest(Player *&player1, Player *&player2) override;
};


#endif //COMBAT_H
