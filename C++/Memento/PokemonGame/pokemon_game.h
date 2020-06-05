#ifndef POKEMONGAME_POKEMON_GAME_H
#define POKEMONGAME_POKEMON_GAME_H

#include <memory>
#include <random>
#include "game_state.h"

class GameStateMemento;

class PokemonGame {
public:
    PokemonGame();
    std::unique_ptr<GameStateMemento> save_game() const;
    void load_game(const std::unique_ptr<GameStateMemento>& game_state_memento);
    void progress_summary() const;
    void catch_pokemon(const std::string& pokemon);
    void challenge_gym(int gym_number);

private:
    int _get_strength();
    double _get_chance();
    std::unique_ptr<GameState> _game_state;
    std::random_device _rd;
    std::mt19937 _gen;
    std::uniform_int_distribution<> _int_dist;
    std::uniform_real_distribution<> _double_dist;
};


class GameStateMemento {
private:
    friend class PokemonGame;
    GameStateMemento(const std::unique_ptr<GameState>& game_state);
    const std::unique_ptr<GameState>& get_saved_state() const;
    const std::unique_ptr<GameState> _game_state;
};


#endif //POKEMONGAME_POKEMON_GAME_H
