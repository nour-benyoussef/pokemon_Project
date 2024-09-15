//
// Created by NOUR on 12/09/2024.
//

#ifndef ATTENTE_H
#define ATTENTE_H
#include "GameState.h"


class Attente : public GameState {
public:
    void handleRequest(Player *&player1, Player *&player2) override;

    Attente();

};


#endif //ATTENTE_H
