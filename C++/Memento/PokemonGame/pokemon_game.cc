#include <iostream>
#include "pokemon_game.h"

PokemonGame::PokemonGame() : _game_state{std::make_unique<GameState>()},
                             _rd(), _gen(_rd()),
                             _int_dist(1, 10), _double_dist(0, 1) {
    std::cout << "Starting a new pokemon game...\n";
}

std::unique_ptr<GameStateMemento> PokemonGame::save_game() const {
    std::cout << "Saving the game...Done!\n";
    // Can't use make_unique with private constructor
    auto* game_state_memento {new GameStateMemento(_game_state)};
    return std::unique_ptr<GameStateMemento>(game_state_memento);
}

void PokemonGame::load_game(const std::unique_ptr<GameStateMemento>& game_state_memento) {
    std::cout << "Loading the game from a saved state...Done!\n";
    _game_state = std::make_unique<GameState>(*game_state_memento->get_saved_state());
}

void PokemonGame::progress_summary() const {
    _game_state->summary();
}

void PokemonGame::catch_pokemon(const std::string& pokemon) {
    std::cout << "A wild " << pokemon << " appeared!!!\n";
    if (_get_chance() > 0.5) {
        std::cout << pokemon << " was caught!!!\n";
        _game_state->add_to_dex(pokemon);
    } else {
        std::cout << pokemon << " ran away...\n";
    }
}

void PokemonGame::challenge_gym(int gym_number) {
    if (gym_number < 1 || gym_number > 8) {
        std::cout << "Gym " << gym_number << " doesn't exist...\n";
    } else {
        std::cout << "Challenging gym " << gym_number << "...\n";
        if (_get_strength() >= gym_number) {
            std::cout << "Gym " << gym_number << " was defeated!!!\n";
            _game_state->gym_defeated(gym_number);
        } else {
            std::cout << "Gym leader for gym " << gym_number << " was too strong for you...\n";
            std::cout << "Try to challenge them again when you are stronger...\n";
        }
    }
}

int PokemonGame::_get_strength() {
    return _int_dist(_gen);
}

double PokemonGame::_get_chance() {
    return _double_dist(_gen);
}


GameStateMemento::GameStateMemento(const std::unique_ptr<GameState>& game_state) : _game_state(std::make_unique<GameState>(*game_state)) {}

const std::unique_ptr<GameState>& GameStateMemento::get_saved_state() const {
    return _game_state;
}

