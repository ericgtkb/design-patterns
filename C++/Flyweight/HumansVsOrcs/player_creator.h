#ifndef HUMANSVSORCS_PLAYER_CREATOR_H
#define HUMANSVSORCS_PLAYER_CREATOR_H


#include <string>
#include <unordered_map>
#include <memory>
#include "player.h"

class PlayerCreator {
public:
    static Player* get_player(const std::string&);

private:
    static std::unordered_map<std::string, std::unique_ptr<Player>> player_map;
};


#endif //HUMANSVSORCS_PLAYER_CREATOR_H
