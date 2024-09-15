//
// Created by NOUR on 12/09/2024.
//

#ifndef NODANGERZONE_H
#define NODANGERZONE_H
#include "GameState.h"


class NoDangerZone : public GameState {
public:
    void handleRequest(Player *&player1, Player *&player2) override;
};


#endif //NODANGERZONE_H
