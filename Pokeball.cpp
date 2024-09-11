//
// Created by NOUR on 10/09/2024.
//

#include "Pokeball.h"
#include "SetOfPokemon.h".
Pokeball::Pokeball() {

}

void Pokeball::RecupererPokemon(Pokedex *p , int id) {

    ArrayOfPokemons.push_back(p->getPokemonbyindice(id));

}

Pokemon * Pokeball::getPokemonbyindice(int indice) {
    int i=findById(indice);
    if (i>0) {
        Pokemon *p=this->ArrayOfPokemons.at(i);
        ArrayOfPokemons.erase(ArrayOfPokemons.begin()+i);
        return p;
    }

    return nullptr;
}
Pokemon *Pokeball::getPokemonbyname(std::string name) {
    int i=findByName(name);
    if (i>0) {
        Pokemon *p=this->ArrayOfPokemons.at(i);
        ArrayOfPokemons.erase(ArrayOfPokemons.begin()+i);
        return p;
    }
    return nullptr;
}
