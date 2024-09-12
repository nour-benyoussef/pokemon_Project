cmake_minimum_required(VERSION 3.29)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        Pokemon.cpp
        Pokemon.h
        SetOfPokemon.cpp
        SetOfPokemon.h
        Pokedex.cpp
        Pokedex.h
        Pokeball.cpp
        Pokeball.h
        PokemonParty.cpp
        PokemonParty.h
        GameState.cpp
        GameState.h
        Attente.cpp
        Attente.h
        Init.cpp
        Init.h
        Player.cpp
        Player.h
        Game.cpp
        Game.h
        NoDangerZone.cpp
        NoDangerZone.h
        DangerZone.cpp
        DangerZone.h
        Combat.cpp
        Combat.h
        EndGame.cpp
        EndGame.h)
