//
// Created by NOUR on 12/09/2024.
//

#include "Init.h"
#include <iostream>
#include <ostream>
#include <string>
#include "Player.h"
using std::string;

void Init::handleRequest(Player *&player1, Player *&player2) {
    std::cout << "Game State : Init " << std::endl;
    string input;

    std::cout << " * welcome Player 1 your name please : ";
    std::cin >> input;
    player1 = new Player(input);
}
