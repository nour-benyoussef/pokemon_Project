//
// Created by NOUR on 09/09/2024.
//

#include "Pokemon.h"
#include <iostream>
using namespace std;
int Pokemon::numeberOfPokemon=0;
Pokemon::Pokemon(int id, string name,double hitPoint, double attack, double defense, int generation):id(id),name(name),hitPoint(hitPoint),attack(attack),defense(defense),generation(generation) {
    numeberOfPokemon++;
}
Pokemon::Pokemon(const Pokemon &anotherPokemon):id(anotherPokemon.id),name(anotherPokemon.name),hitPoint(anotherPokemon.hitPoint),attack(anotherPokemon.attack),defense(anotherPokemon.defense),generation(anotherPokemon.generation){
    numeberOfPokemon++;
}
Pokemon::~Pokemon() {
    numeberOfPokemon--;
}
void Pokemon::displayInfo() const {
    cout<<"*****************************Pokemon affiche *********************** "<<endl;
    cout<<"Pokemon id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Hitpoint: "<<hitPoint<<endl;
    cout<<"defense: "<<defense<<endl;
    cout<<"attaque: " <<attack<<endl;
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

void Pokemon::AttaquePokemon(const Pokemon &anotherPokemon) {
    cout<<"**************************AttaquePokemon*********************************"<<endl;
    if(attack >= anotherPokemon.defense) {
        anotherPokemon.hitPoint = attack-anotherPokemon.defense;
    } else {
        cout<<"attaque missed" <<endl;
    }
    if (anotherPokemon.hitPoint == 0) {
        cout<<"**********************************Pokemon defense mort**********************"<<endl;
    }
}




