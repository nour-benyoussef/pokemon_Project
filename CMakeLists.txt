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
        Pokeball.h)
