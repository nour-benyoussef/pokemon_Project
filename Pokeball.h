//
// Created by NOUR on 10/09/2024.
//

#ifndef POKEBALL_H
#define POKEBALL_H
#include "SetOfPokemon.h"
#include"Pokedex.h"

class Pokeball : public SetOfPokemon {
public:
    Pokeball();
    void RecupererPokemon(Pokedex *p, int id);
    Pokemon *getPokemonbyindice(int indice) override;
    Pokemon *getPokemonbyname(std::string name) override;
};



#endif //POKEBALL_H
