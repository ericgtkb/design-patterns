import copy
import random


class GameState:
    def __init__(self):
        self._pokedex = {'Bulbasaur': False, 'Charmander': False, 'Squirtle': False}
        self._gym_badges = {i: False for i in range(1, 9)}

    def add_to_dex(self, pokemon: str) -> None:
        if pokemon in self._pokedex:
            self._pokedex[pokemon] = True

    def gym_defeated(self, gym_number: int) -> None:
        if gym_number in self._gym_badges:
            self._gym_badges[gym_number] = True

    def summary(self):
        print('===========================Game Summary============================')
        print('==============================Pokedex==============================')
        for pokemon, caught in self._pokedex.items():
            print(f'{pokemon}: {"O" if caught else "X"}')
        print('=============================Gym Badges============================')
        for gym_number, defeated in self._gym_badges.items():
            print(f'Gym badge {gym_number}: {"O" if defeated else "X"}')
        print('===================================================================')


class GameStateMemento:
    def __init__(self, game_state: GameState):
        self._game_state = copy.deepcopy(game_state)  # Make sure it's a copy, deep copy


class PokemonGame:
    def __init__(self):
        print('Starting a new pokemon game...')
        self._game_state = GameState()

    def save_game(self) -> GameStateMemento:
        print('Saving the game...Done!')
        return GameStateMemento(self._game_state)

    def load_game(self, game_state_memento: GameStateMemento) -> None:
        print('Loading the game from a saved state...Done!')
        # Use memento's protected member as if memento class mark this class as a friend
        self._game_state = copy.deepcopy(game_state_memento._game_state)  # Make sure it's a copy, a deep copy

    def progress_summary(self) -> None:
        self._game_state.summary()

    def catch_pokemon(self, pokemon: str):
        print(f'A wild {pokemon} appeared!!!')
        if self._get_chance() > 0.5:
            print(f'{pokemon} was caught!!!')
            self._game_state.add_to_dex(pokemon)
        else:
            print(f'{pokemon} ran away...')

    def challenge_gym(self, gym_number: int) -> None:
        if gym_number < 1 or gym_number > 8:
            print(f'Gym {gym_number} doesn\'t exist...')
        else:
            if self._get_strength() >= gym_number:
                print(f'Gym {gym_number} was defeated!!!')
                self._game_state.gym_defeated(gym_number)
            else:
                print(f'Gym leader for gym {gym_number} was too strong for you...')
                print('Try to challenge them again when you are stronger...')

    def _get_strength(self) -> int:
        return random.randrange(1, 11)

    def _get_chance(self) -> float:
        return random.random()


# Caretaker
def main():
    saved_mementos = {}
    pokemon_game = PokemonGame()
    pokemon_game.progress_summary()

    pokemon_game.catch_pokemon('Charmander')
    pokemon_game.challenge_gym(1)
    pokemon_game.progress_summary()
    print('First save...')
    saved_mementos['first'] = pokemon_game.save_game()

    pokemon_game.catch_pokemon('Squirtle')
    pokemon_game.challenge_gym(2)
    pokemon_game.catch_pokemon('Bulbasaur')
    pokemon_game.challenge_gym(3)
    pokemon_game.challenge_gym(8)
    pokemon_game.progress_summary()
    print('Second save...')
    saved_mementos['second'] = pokemon_game.save_game()

    print('Loading from the first save...')
    pokemon_game.load_game(saved_mementos['first'])
    pokemon_game.progress_summary()

    print('Loading from the second save...')
    pokemon_game.load_game(saved_mementos['second'])
    pokemon_game.progress_summary()

    pokemon_game.challenge_gym(4)
    pokemon_game.challenge_gym(5)
    pokemon_game.challenge_gym(6)
    pokemon_game.challenge_gym(7)
    pokemon_game.progress_summary()

    print('I didn\'t save the game but I want to go back to the second save...')
    pokemon_game.load_game(saved_mementos['second'])
    pokemon_game.progress_summary()


if __name__ == '__main__':
    main()

