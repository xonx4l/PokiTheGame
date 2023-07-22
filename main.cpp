#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


vector<string>  read_pokemon_names(){
    vector<string> pokemons;
    ifstream file ("pokemon.txt");
    string pokemon;
    while (getline(file,pokemon)){
        pokemons.push_back(pokemon);
    }
    return pokemons
}


void catch_pokemon(int& pokeballs, int&money, vector<std::string>& caught_pokemon) {
    vector<string> pokemons = read_pokemon_names();
    string pokemon = pokemons[rand()% pokemons.size()];
    cout<<"a wild "<< pokemon << "appears!"<<endl;
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
