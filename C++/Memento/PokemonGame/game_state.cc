#include <iostream>
#include "game_state.h"

GameState::GameState() : _pokedex(), _gym_badges() {
    _pokedex["Bulbasaur"] = false;
    _pokedex["Charmander"] = false;
    _pokedex["Squirtle"] = false;
    for (int i = 1; i <= 8; ++i) {
        _gym_badges[i] = false;
    }
}

void GameState::add_to_dex(const std::string& pokemon) {
    if (_pokedex.find(pokemon) != _pokedex.end()) {
        _pokedex[pokemon] = true;
    }
}

void GameState::gym_defeated(int gym_number) {
    if (_gym_badges.find(gym_number) != _gym_badges.end()) {
        _gym_badges[gym_number] = true;
    }
}

void GameState::summary() const {
    std::cout << "===========================Game Summary============================\n";
    std::cout << "==============================Pokedex==============================\n";
    for (const auto& [key, val] : _pokedex) {
        std::cout << key << ": " << (val ? "O\n" : "X\n");
    }
    std::cout << "=============================Gym Badges============================\n";
    for (const auto& [key, val] : _gym_badges) {
        std::cout << "Gym badge " << key << ": " << (val ? "O\n" : "X\n");
    }
    std::cout << "===================================================================\n";
}
