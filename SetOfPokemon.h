//
// Created by NOUR on 09/09/2024.
//

#ifndef SETOFPOKEMON_H
#define SETOFPOKEMON_H
#include <vector>

#include "Pokemon.h"



class SetOfPokemon {
protected:
    std::vector<Pokemon *> ArrayOfPokemons;
    int findByName (string name);
    int findById (int id);

public:
    virtual Pokemon * getPokemonbyindice (int indice) = 0;
    virtual Pokemon * getPokemonbyname (string name) = 0 ;
    SetOfPokemon();
    void displayList();

    virtual ~SetOfPokemon() ;
    int sizeSetOfPokemon();
    void sortSetOfPokemon();
    bool hasPokemonWithID(int id);


};



#endif //SETOFPOKEMON_H
