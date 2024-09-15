//
// Created by NOUR on 10/09/2024.
//

#include "Pokeball.h"
#include <iostream>
#include "SetOfPokemon.h"

Pokeball::Pokeball() = default;

void Pokeball::RecupererPokemon(Pokedex *p, int id) {
    ArrayOfPokemons.push_back(p->getPokemonbyindice(id));
}

Pokemon *Pokeball::getPokemonbyindice(int indice) {
    if (int i = findById(indice); i >= 0) {
        auto *p = new Pokemon(*ArrayOfPokemons.at(i));
        ArrayOfPokemons.erase(ArrayOfPokemons.begin() + i);
        return p;
    }

    return nullptr;
}

Pokemon *Pokeball::getPokemonbyname(std::string name) {
    if (int i = findByName(name); i > 0) {
        Pokemon *p = this->ArrayOfPokemons.at(i);
        ArrayOfPokemons.erase(ArrayOfPokemons.begin() + i);
        return p;
    }
    return nullptr;
}

int Pokeball::LastValue() const {
    return ArrayOfPokemons.at(ArrayOfPokemons.size() - 1)->getId();
}

int Pokeball::FirstValue() const {
    return ArrayOfPokemons.at(0)->getId();
}
