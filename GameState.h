//
// Created by NOUR on 12/09/2024.
//

#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "Player.h"


class GameState {
protected:
     int nbrwinP1;
     int nbrwinP2;

    Pokedex* pokedexInstance = Pokedex::getInstance("../ressources/pokedex.csv");
    public:
    virtual void handleRequest (Player*& player1,Player*& player2) =0;
    virtual ~GameState() = default;
};



#endif //GAMESTATE_H
