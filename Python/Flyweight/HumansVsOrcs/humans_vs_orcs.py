import abc
import random


class Player(abc.ABC):
    @abc.abstractmethod
    def fight(self):
        pass

    @abc.abstractmethod
    def set_weapon(self, weapon: str) -> None:
        pass


class Human(Player):
    def __init__(self):
        self._weapon = None

    def fight(self):
        print(f'I am a human wielding a(n) {self._weapon}! I will defeat you orcs!!!')

    def set_weapon(self, weapon: str) -> None:
        self._weapon = weapon


class Orc(Player):
    def __init__(self):
        self._weapon = None

    def fight(self):
        print(f'I am an orc wielding a(n) {self._weapon}! I will defeat you humans!!!')

    def set_weapon(self, weapon: str) -> None:
        self._weapon = weapon


class PlayerCreator:
    player_map = {}

    @staticmethod
    def get_player(player_type: str) -> Player:
        try:
            return PlayerCreator.player_map[player_type]
        except KeyError:
            if player_type == 'human':
                print('Creating a human...')
                player = Human()
                PlayerCreator.player_map['human'] = player
            elif player_type == 'orc':
                print('Creating an orc...')
                player = Orc()
                PlayerCreator.player_map['orc'] = player
            else:
                raise Exception('Unknown player type...')
            return player


_weapons = ['sword', 'axe', 'mace', 'dagger']
_player_types = ['human', 'orc']


def get_random_player_type():
    return random.choice(_player_types)


def get_random_weapon():
    return random.choice(_weapons)


if __name__ == '__main__':
    print('=' * 25 + 'Humans vs Orcs' + '=' * 25)
    print('Starting the game...')

    for _ in range(10):
        active_player = PlayerCreator.get_player(get_random_player_type())
        active_player.set_weapon(get_random_weapon())
        active_player.fight()

    print(f'The winning team is the {get_random_player_type()}s!!!')



