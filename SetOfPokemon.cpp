//
// Created by NOUR on 09/09/2024.
//

#include "SetOfPokemon.h"

#include <iostream>

void SetOfPokemon::displayList() {
    std::cout<<"**************************************"<<std::endl;
    for (Pokemon * pokemon : ArrayOfPokemons) {
        pokemon -> displayInfo();
    }
}
SetOfPokemon::SetOfPokemon() {
    // Constructor implementation
}

SetOfPokemon::~SetOfPokemon() {
    // Destructor implementation
}

int SetOfPokemon::findByName (string name) {
    for (int i=0;i<ArrayOfPokemons.size();i++) {
        if (ArrayOfPokemons.at(i)->getName() == name) {
            return i;
        }
    }
    return -1;
}
int SetOfPokemon::findById (int id) {
    for (int i=0;i<ArrayOfPokemons.size();i++) {
        if (ArrayOfPokemons.at(i)->getId() == id) {
            return i;
        }
    }
    return -1;

}

