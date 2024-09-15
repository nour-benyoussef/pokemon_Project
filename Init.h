//
// Created by NOUR on 12/09/2024.
//

#ifndef INIT_H
#define INIT_H
#include "GameState.h"


class Init : public GameState {
public:
    void handleRequest(Player *&player1, Player *&player2) override;
};


#endif //INIT_H
