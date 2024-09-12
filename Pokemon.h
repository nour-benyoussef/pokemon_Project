
#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using std::string;

class Pokemon {
private:
    int id;
    string name;
    mutable double hitPoint;
    double attack;
    double defense;
    int generation;
    static int numeberOfPokemon;

public:
    Pokemon(int id, string name,double hitPoint, double attack, double defense, int generation);
    Pokemon( const Pokemon & anotherPokemon);
    ~Pokemon();
    //getters
    int getId() const;
    string getName() const;
    double getHitPoint() const;
    double getAttack ()const;
    double getDefense()const;
    int getGeneration() const;
    void AttaquePokemon(const Pokemon * anotherPokemon);
    void displayInfo() const;
    static int getNumberOfPokemon();


};



#endif //POKEMON_H
