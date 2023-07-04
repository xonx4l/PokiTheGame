#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


std::vector<std::string>  read_pokemon_names(){
    std::vector<std::string> pokemons;
    std::ifstream file ("pokemon.txt");
    std::string pokemon;
    while (std::getline(file,pokemon)){
        pokemons.push_back(pokemon);
    }
    return pokemons
}


void catch_pokemon(int& pokeballs, int&money, std::vector<std::string>& caught_pokemon) {
    std::vector<std::string> pokemons = read_pokemon_names();
    std::string pokemon = pokemons[rand()% pokemons.size()];
    std::cout<<"a wild "<< pokemon << "appears!"<<std::endl;
    std::cout<<"enter 'c' to catch or 'R'  to run:";
    char action;
    std::cin>>action;
    if(action == "c" || action == 'c'){
        if (pokeballs >0){
            pokeballs--;
            if(static_cast<double>(rand()) / RAND_MAX < 0.5 )) {
              std::cout << "You caught the" << pokemon << "!"<< std::endl;
              caught_pokemon.push_back(pokemon)
             }else {
              std::cout << pokemon << "escaped!"<< std:: endl;
            }
        }else {
         std::cout <<"you don't have any pokeballs" << std::endl;
        }
    }
    
}
