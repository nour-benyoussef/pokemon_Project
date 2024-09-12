//
// Created by NOUR on 12/09/2024.
//

#ifndef GAME_H
#define GAME_H
#include "Attente.h"
#include "GameState.h"


class Game {
  private:
  GameState *state = new Attente();
  Player *player1;
  Player *player2;
public:
  void setState(GameState * newState);
  void request();
  void setPlayer(Player* player);
  Player* getPlayer();
};


#endif //GAME_H
