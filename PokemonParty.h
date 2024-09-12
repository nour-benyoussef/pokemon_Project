//
// Created by NOUR on 11/09/2024.
//

#ifndef POKEMONPARTY_H
#define POKEMONPARTY_H
#include "SetOfPokemon.h"
#include "Pokeball.h"


class PokemonParty :public SetOfPokemon {
public:
    PokemonParty(int id1, int id2, int id3, int id4, int id5, int id6, Pokeball *p );
    void RecuperePokemon(Pokeball *p , int indice);
    ~PokemonParty();
    Pokemon *getPokemonbyindice(int indice) override;
    Pokemon *getPokemonbyname(std::string name) override;
    void removePokemon (int k) ;
};



#endif //POKEMONPARTY_H
