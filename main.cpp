#include <iostream>

#include "Combat.h"
#include "DangerZone.h"
#include "EndGame.h"
#include "Pokedex.h"
#include "Pokemon.h"
#include "Game.h"
#include "Init.h"
#include "NoDangerZone.h"

int main() {
    std::cout << "****************Pokemon test**************************" << std::endl;
    /*Pokemon Premier(123,"Nour",12,10,5,3);
   Pokemon deuxieme (Premier);
    Pokemon Premier2(12,"Khawla",12,5,10,3);
    //Premier.displayInfo();
    //Premier2.displayInfo();
    Premier.AttaquePokemon(Premier2);
    //Premier.displayInfo();
    //Premier2.displayInfo();
    std::cout << "nombre des instances des pokemons :" <<Pokemon::getNumberOfPokemon()<< std::endl;*/
    /*Pokedex *pok = Pokedex::getInstance("../ressources/pokedex.csv");

    //pok->displayList();
    Pokemon *p1 = pok ->getPokemonbyname("Bulbasaur");
    p1->displayInfo();
    Pokemon *p2 = pok ->getPokemonbyindice(700);
    p2->displayInfo();*/

    /*std::cout << "******* Pokemon test *******" << std::endl;

    Pokedex* pokedexInstance = Pokedex::getInstance("../ressources/pokedex.csv");
    Pokedex* pokedexInstanceNumber2 = Pokedex::getInstance("../ressources/pokedex.csv");

    std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl;

    Pokemon* testGet = Pokedex::getInstance("../ressources/pokedex.csv")->getPokemonbyindice(15);

    testGet->displayInfo();

    testGet = Pokedex::getInstance("../ressources/pokedex.csv")->getPokemonbyname("Mewtwo");
    testGet->displayInfo();

    std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl;
*/

    Game *g1 = new Game();
    g1->setState(new Init());
    g1->request();
    g1->setState(new NoDangerZone());
    g1->request();
    while (GameState::getNbrOfwinP1() < 2 && GameState::getNbrOfwinP2() < 2) {
        g1->setState(new DangerZone());
        g1->request();
        g1->setState(new Combat());
        g1->request();
    }
    g1->setState(new EndGame());
    g1->request();

    return 0;
}
