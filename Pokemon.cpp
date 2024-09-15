//
// Created by NOUR on 09/09/2024.
//

#include "Pokemon.h"
#include <iostream>
using namespace std;
int Pokemon::numeberOfPokemon = 0;

Pokemon::Pokemon(int id, string name, double hitPoint, double attack, double defense, int generation): id(id),
    name(name), hitPoint(hitPoint), attack(attack), defense(defense), generation(generation) {
    numeberOfPokemon++;
}

Pokemon::Pokemon(const Pokemon &anotherPokemon): id(anotherPokemon.id), name(anotherPokemon.name),
                                                 hitPoint(anotherPokemon.hitPoint), attack(anotherPokemon.attack),
                                                 defense(anotherPokemon.defense),
                                                 generation(anotherPokemon.generation) {
    numeberOfPokemon++;
}

Pokemon::~Pokemon() {
    numeberOfPokemon--;
}

void Pokemon::displayInfo() const {
    cout << "Pokemon id: " << id;
    cout << " Name: " << name;
    cout << " Hitpoint: " << hitPoint;
    cout << " Defense: " << defense;
    cout << " Attaque: " << attack << endl;
}

int Pokemon::getId() const {
    return id;
}

string Pokemon::getName() const {
    return name;
}

double Pokemon::getHitPoint() const {
    return hitPoint;
}

double Pokemon::getAttack() const {
    return attack;
}

double Pokemon::getDefense() const {
    return defense;
}

int Pokemon::getGeneration() const {
    return generation;
}

int Pokemon::getNumberOfPokemon() {
    return numeberOfPokemon;
}


int Pokemon::AttaquePokemon(Pokemon *anotherPokemon) {
    if (this->attack > anotherPokemon->defense) {
        anotherPokemon->sustainDamage(this->attack - anotherPokemon->defense);
        return 1;
    } else {
        std::cout << "Attack missed ! " << std::endl;
        return 0;
    }
}

void Pokemon::sustainDamage(int value) {
    hitPoint = (hitPoint - value) > 0 ? hitPoint - value : 0;
    std::cout << "Pokemon " << name << " sustained a " << value <<
            " damage. New hitPoint : " << hitPoint << std::endl;
}
