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


void catch_pokemon(int& pokeballs, int&money, vector<string>& caught_pokemon) {
    vector<string> pokemons = read_pokemon_names();
    string pokemon = pokemons[rand()% pokemons.size()];
    cout<<"a wild "<< pokemon << "appears!"<<endl;
    cout<<"enter 'c' to catch or 'R'  to run:";
    char action;
    cin>>action;
    if(action == "c" || action == 'c'){
        if (pokeballs >0){
            pokeballs--;
            if(static_cast<double>(rand()) / RAND_MAX < 0.5 )) {
              cout << "You caught the" << pokemon << "!"<< endl;
              caught_pokemon.push_back(pokemon)
             }else {
              cout << pokemon << "escaped!"<<  endl;
            }
        }else {
         cout <<"you don't have any pokeballs" << endl;
        }
    }
    
}
