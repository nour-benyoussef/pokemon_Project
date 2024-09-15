//
// Created by NOUR on 09/09/2024.
//

#include "SetOfPokemon.h"

#include <iostream>
#include <algorithm>  // For std::sort

void SetOfPokemon::displayList() {
    std::cout << "**************************************" << std::endl;
    for (Pokemon *pokemon: ArrayOfPokemons) {
        pokemon->displayInfo();
    }
}

int SetOfPokemon::sizeSetOfPokemon() const {
    return ArrayOfPokemons.size();
}

SetOfPokemon::SetOfPokemon() {
    // Constructor implementation
}

SetOfPokemon::~SetOfPokemon() {
    // Destructor implementation
}

int SetOfPokemon::findByName(string name) const {
    for (int i = 0; i < ArrayOfPokemons.size(); i++) {
        if (ArrayOfPokemons.at(i)->getName() == name) {
            return i;
        }
    }
    return -1;
}

int SetOfPokemon::findById(int id) const {
    for (int i = 0; i < ArrayOfPokemons.size(); i++) {
        if (ArrayOfPokemons.at(i)->getId() == id) {
            return i;
        }
    }
    return -1;
}

void SetOfPokemon::sortSetOfPokemon() {
    std::sort(ArrayOfPokemons.begin(), ArrayOfPokemons.end(), [](const Pokemon *a, const Pokemon *b) {
        return a->getId() < b->getId();
        // Replace getId() with the actual method you use to get the ID or criteria for sorting
    });
}

bool SetOfPokemon::hasPokemonWithID(int id) {
    for (Pokemon *p: ArrayOfPokemons) {
        if (p->getId() == id) {
            return true;
        }
    }
    return false;
}
