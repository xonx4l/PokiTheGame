#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>


std::std::vector<std::string>  read_pokemon_names(){
    std::vector<std::string> pokemons;
    std::ifstream file ("pokemon.txt");
    std::string pokemon;
    while (std::getline(file,pokemon)){
        pokemons.push_back(pokemon);
    }
    return pokemons
}


void catch_pokemon(int& pokeballs, int&money, std:std::vector<std::string>& caught_pokemon) {
    
}
