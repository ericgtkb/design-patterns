#ifndef POKEMONGAME_GAME_STATE_H
#define POKEMONGAME_GAME_STATE_H

#include <string>
#include <unordered_map>


class GameState {
public:
    GameState();
    void add_to_dex(const std::string& pokemon);
    void gym_defeated(int gym_number);
    void summary() const;

private:
    std::unordered_map<std::string, bool> _pokedex;
    std::unordered_map<int, bool> _gym_badges;
};


#endif //POKEMONGAME_GAME_STATE_H
