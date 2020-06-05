package com.ericgtkb;

import java.util.HashMap;
import java.util.Map;

public class GameState implements Cloneable {
    private Map<String, Boolean> pokedex;
    private Map<Integer, Boolean> gymBadges;

    public GameState() {
        pokedex = new HashMap<>();
        pokedex.put("Bulbasaur", false);
        pokedex.put("Charmander", false);
        pokedex.put("Squirtle", false);
        gymBadges = new HashMap<>();
        for (int i = 1; i <= 8; i++) {
            gymBadges.put(i, false);
        }
    }

    @Override
    public GameState clone() throws CloneNotSupportedException {
        GameState newGameState = (GameState) super.clone();
        newGameState.pokedex = new HashMap<>();
        newGameState.gymBadges = new HashMap<>();
        for (var entry : this.pokedex.entrySet()) {
            newGameState.pokedex.put(entry.getKey(), entry.getValue());
        }

        for (var entry : this.gymBadges.entrySet()) {
            newGameState.gymBadges.put(entry.getKey(), entry.getValue());
        }
        return newGameState;
    }

    public void addToDex(String pokemon) {
        pokedex.replace(pokemon, true);
    }

    public void gymDefeated(Integer gymNumber) {
        gymBadges.replace(gymNumber, true);
    }

    public void summary() {
        System.out.println("===========================Game Summary============================");
        System.out.println("==============================Pokedex==============================");
        for (var entry : pokedex.entrySet()) {
            System.out.println(entry.getKey() + ": " + (entry.getValue() ? "O" : "X"));
        }
        System.out.println("=============================Gym Badges============================");
        for (var entry : gymBadges.entrySet()) {
            System.out.println("Gym badge " + entry.getKey() + ": " + (entry.getValue() ? "O" : "X"));
        }
        System.out.println("===================================================================");
    }
}
