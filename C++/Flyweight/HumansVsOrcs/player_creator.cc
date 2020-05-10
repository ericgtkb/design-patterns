#include <iostream>
#include "player_creator.h"

std::unordered_map<std::string, std::unique_ptr<Player>>  PlayerCreator::player_map{};

Player *PlayerCreator::get_player(const std::string& player_type) {
    if (player_map.find(player_type) != player_map.end()) {
        return player_map[player_type].get();
    } else {
        Player* player {nullptr};
        if (player_type == "human") {
            std::cout << "Creating a human...\n";
            player_map[player_type] = std::make_unique<Human>();
            player = player_map[player_type].get();
        } else if (player_type == "orc") {
            std::cout << "Creating an orc...\n";
            player_map[player_type] = std::make_unique<Orc>();
            player = player_map[player_type].get();
        } else {
            std::cout << "Unknown player type...\n";
        }
        return player;
    }
}
