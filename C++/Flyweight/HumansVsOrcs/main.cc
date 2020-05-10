#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "player_creator.h"

std::vector<std::string> weapons = {"sword", "axe", "mace", "dagger"};
std::vector<std::string> player_types = {"human", "orc"};

std::random_device rd;
std::mt19937 gen(rd());

std::string get_random_player_type() {
    std::uniform_int_distribution<> distribution(0, player_types.size() - 1);
    return player_types[distribution(gen)];
}

std::string get_random_weapon() {
    std::uniform_int_distribution<> distribution(0, weapons.size() - 1);
    return weapons[distribution(gen)];
}


int main() {
    std::cout << std::string(25, '=') << "Humans vs Orcs" << std::string(25, '=') << "\n";
    std::cout << "Starting the game...\n";
    for (int i = 0; i < 10; ++i) {
        Player* player = PlayerCreator::get_player(get_random_player_type());
        player->set_weapon(get_random_weapon());
        player->fight();
    }
    std::cout << "The winning team is the " << get_random_player_type() << "s!!!\n";

    return 0;
}
