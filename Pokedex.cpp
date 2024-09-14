#include "Pokedex.h"
#include <fstream>
#include <sstream>
#include <stdexcept>

Pokedex *Pokedex::instance = nullptr;

Pokedex::Pokedex(const std::string &filename) {
    loadFromCSV(filename);
}

void Pokedex::loadFromCSV(const std::string &filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string cellule;
        std::vector<std::string> donneesLigne;
        while (std::getline(ss, cellule, ',')) {
            donneesLigne.push_back(cellule);
        }


        ArrayOfPokemons.push_back(new Pokemon(stoi(donneesLigne.at(0)), donneesLigne.at(1),stod(donneesLigne.at(5)),stod(donneesLigne.at(6)),stod(donneesLigne.at(7)),stoi(donneesLigne.at(11))));
    }

    file.close();
}

Pokedex *Pokedex::getInstance(const std::string &filename) {
    if (instance == nullptr) {
        instance = new Pokedex(filename);
    }
    return instance;
}

Pokemon * Pokedex::getPokemonbyindice(int indice) {
    int i=findById (indice);
    if (i>=0)
        return new Pokemon(*ArrayOfPokemons.at(i));

    return nullptr;


}

Pokemon * Pokedex::getPokemonbyname(std::string name) {
   int i = findByName(name);
    if (i>=0)
        return new Pokemon(*ArrayOfPokemons.at(i));
return nullptr;
}
int Pokedex::MaxIdPokemon() {
    int max = 0;
    for (int i=0; i<ArrayOfPokemons.size(); i++) {
            if (ArrayOfPokemons.at(i)->getId() > max)
                max = ArrayOfPokemons.at(i)->getId();
    }
    return max;
}


