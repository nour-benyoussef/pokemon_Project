//
// Created by NOUR on 12/09/2024.
//

#include "Player.h"
Player::Player(string name) {
    this->namePlayer = name;
    this->p=new Pokeball();
}

string Player::getName() {
    return namePlayer;
}
Pokeball* Player::getPokeball() {
        return p;
}
 Player::~Player() {
     delete p;
 }
