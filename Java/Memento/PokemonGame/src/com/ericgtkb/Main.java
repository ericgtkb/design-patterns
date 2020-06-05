package com.ericgtkb;

import java.util.HashMap;
import java.util.Map;

public class Main {

    public static void main(String[] args) throws CloneNotSupportedException {
        Map<String, PokemonGame.GameStateMemento> savedMementos = new HashMap<>();
        PokemonGame pokemonGame = new PokemonGame();
        pokemonGame.progressSummary();

        pokemonGame.catchPokemon("Charmander");
        pokemonGame.challengeGym(1);
        pokemonGame.progressSummary();
        System.out.println("First save...");
        savedMementos.put("first", pokemonGame.saveGame());

        pokemonGame.catchPokemon("Squirtle");
        pokemonGame.challengeGym(2);
        pokemonGame.catchPokemon("Bulbasaur");
        pokemonGame.challengeGym(3);
        pokemonGame.challengeGym(8);
        pokemonGame.progressSummary();
        System.out.println("Second save...");
        savedMementos.put("second", pokemonGame.saveGame());

        System.out.println("Loading from the first save...");
        pokemonGame.loadGame(savedMementos.get("first"));
        pokemonGame.progressSummary();

        System.out.println("Loading from the second save...");
        pokemonGame.loadGame(savedMementos.get("second"));
        pokemonGame.progressSummary();

        pokemonGame.challengeGym(4);
        pokemonGame.challengeGym(5);
        pokemonGame.challengeGym(6);
        pokemonGame.challengeGym(7);
        pokemonGame.progressSummary();

        System.out.println("I didn't save the game but I want to go back to the second save...");
        pokemonGame.loadGame(savedMementos.get("second"));
        pokemonGame.progressSummary();

    }
}
