cmake_minimum_required(VERSION 3.16)
project(PokemonGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(PokemonGame main.cc game_state.cc game_state.h pokemon_game.cc pokemon_game.h)