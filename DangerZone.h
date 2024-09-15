//
// Created by NOUR on 12/09/2024.
//

#ifndef DANGERZONE_H
#define DANGERZONE_H
#include "GameState.h"


class DangerZone : public GameState {
public:
    void handleRequest(Player *&player1, Player *&player2) override;
};


#endif //DANGERZONE_H
