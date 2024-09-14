//
// Created by NOUR on 11/09/2024.
//

#include "PokemonParty.h"

#include <iostream>
#include <ostream>

PokemonParty::PokemonParty(int id1, int id2, int id3, int id4, int id5, int id6, Pokeball *p) {

    RecuperePokemon(p,id1);
    RecuperePokemon(p,id2);
    RecuperePokemon(p,id3);
    RecuperePokemon(p,id4);
    RecuperePokemon(p,id5);
    RecuperePokemon(p,id6);
}

void PokemonParty::RecuperePokemon(Pokeball *p, int indice) {
    Pokemon* pokemon = p->getPokemonbyindice(indice);
    if (pokemon != nullptr) {
        ArrayOfPokemons.push_back(pokemon);
    } else {
        std::cerr << "Erreur: Pokemon non trouvé pour l'indice " << indice << std::endl;
    }

}

PokemonParty::~PokemonParty() {

}
void PokemonParty::removePokemon (int k) {
    ArrayOfPokemons.erase(ArrayOfPokemons.begin()+k);
}

Pokemon * PokemonParty::getPokemonbyindice(int indice) {
        return ArrayOfPokemons.at(indice);

}
Pokemon *PokemonParty::getPokemonbyname(std::string name) {
    int i=findByName(name);
    if (i>0) {
        Pokemon *p=this->ArrayOfPokemons.at(i);
        return p;
    }
    return nullptr;
}
