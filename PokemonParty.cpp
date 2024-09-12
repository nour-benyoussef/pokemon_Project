//
// Created by NOUR on 11/09/2024.
//

#include "PokemonParty.h"

PokemonParty::PokemonParty(int id1, int id2, int id3, int id4, int id5, int id6, Pokeball *p) {
    RecuperePokemon(p,id1);
    RecuperePokemon(p,id2);
    RecuperePokemon(p,id3);
    RecuperePokemon(p,id4);
    RecuperePokemon(p,id5);
    RecuperePokemon(p,id6);
}

void PokemonParty::RecuperePokemon(Pokeball *p, int indice) {
    ArrayOfPokemons.push_back(p->getPokemonbyindice(indice));
}

PokemonParty::~PokemonParty() {

}
void PokemonParty::removePokemon (int k) {
    ArrayOfPokemons.erase(ArrayOfPokemons.begin()+k);
}

Pokemon * PokemonParty::getPokemonbyindice(int indice) {
    if (indice>0) {
        Pokemon *p=this->ArrayOfPokemons.at(indice);
        return p;
    }
    return nullptr;
}
Pokemon *PokemonParty::getPokemonbyname(std::string name) {
    int i=findByName(name);
    if (i>0) {
        Pokemon *p=this->ArrayOfPokemons.at(i);
        return p;
    }
    return nullptr;
}
