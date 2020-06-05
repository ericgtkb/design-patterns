#include <iostream>
#include <string>
#include <unordered_map>
#include <memory>
#include "pokemon_game.h"

int main() {
    std::unordered_map<std::string, std::unique_ptr<GameStateMemento>> saved_mementos {};
    PokemonGame pokemon_game {};
    pokemon_game.progress_summary();

    pokemon_game.catch_pokemon("Charmander");
    pokemon_game.challenge_gym(1);
    pokemon_game.progress_summary();
    std::cout << "First save...\n";
    saved_mementos["first"] = pokemon_game.save_game();

    pokemon_game.catch_pokemon("Squirtle");
    pokemon_game.challenge_gym(2);
    pokemon_game.catch_pokemon("Bulbasaur");
    pokemon_game.challenge_gym(3);
    pokemon_game.challenge_gym(8);
    pokemon_game.progress_summary();
    std::cout << "Second save...\n";
    saved_mementos["second"] = pokemon_game.save_game();

    std::cout << "Loading from the first save...\n";
    pokemon_game.load_game(saved_mementos["first"]);
    pokemon_game.progress_summary();

    std::cout << "Loading from the second save...\n";
    pokemon_game.load_game(saved_mementos["second"]);
    pokemon_game.progress_summary();

    pokemon_game.challenge_gym(4);
    pokemon_game.challenge_gym(5);
    pokemon_game.challenge_gym(6);
    pokemon_game.challenge_gym(7);
    pokemon_game.progress_summary();

    std::cout << "I didn't save the game but I want to go back to the second save...\n";
    pokemon_game.load_game(saved_mementos["second"]);
    pokemon_game.progress_summary();

    return 0;
}
