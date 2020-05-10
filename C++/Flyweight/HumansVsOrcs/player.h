#ifndef HUMANSVSORCS_PLAYER_H
#define HUMANSVSORCS_PLAYER_H


#include <string>

class Player {
public:
    virtual ~Player() = default;
    virtual void fight() const = 0;
    virtual void set_weapon(const std::string&) = 0;

};


class Human : public Player {
public:
    void fight() const override;
    void set_weapon(const std::string& weapon) override ;

private:
    std::string weapon;
};


class Orc : public Player {
public:
    void fight() const override;
    void set_weapon(const std::string& weapon) override ;

private:
    std::string weapon;
};

#endif //HUMANSVSORCS_PLAYER_H
