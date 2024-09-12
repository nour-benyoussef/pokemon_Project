//
// Created by NOUR on 09/09/2024.
//

#ifndef POKEDEX_H
#define POKEDEX_H
#include "SetOfPokemon.h"

class Pokedex : public SetOfPokemon {
private:
    static Pokedex *instance;
    Pokedex(const std::string &filename);
    void loadFromCSV(const std::string &filename);

public:
    static Pokedex *getInstance(const std::string &filename);
    Pokemon *getPokemonbyindice(int indice) override;
    Pokemon *getPokemonbyname(std::string name) override;
    int MaxIdPokemon ();
};




#endif //POKEDEX_H
