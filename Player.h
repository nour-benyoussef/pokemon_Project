//
// Created by NOUR on 12/09/2024.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using std::string;
#include "Pokeball.h"


class Player {
    private:
    string namePlayer;
    Pokeball *p;
    public:
    Player(string name);
    string getName();
    Pokeball *getPokeball();
    ~Player();

};



#endif //PLAYER_H
