package com.ericgtkb;

import java.util.Random;

public class PokemonGame {
    private GameState gameState;
    private Random rand;

    public static class GameStateMemento {
        private final GameState gameState;

        private GameStateMemento(GameState gameState) throws CloneNotSupportedException {
            this.gameState = gameState.clone();  // Make sure it a copy, a deep copy
        }

        private GameState getSavedState() {
            return gameState;
        }
    }

    public PokemonGame() {
        System.out.println("Starting a new pokemon game...");
        gameState = new GameState();
        rand = new Random();
    }

    public GameStateMemento saveGame() throws CloneNotSupportedException {
        System.out.println("Saving the game...Done!");
        return new GameStateMemento(gameState);
    }

    public void loadGame(GameStateMemento gameStateMemento) throws CloneNotSupportedException {
        System.out.println("Loading the game from a saved state...Done!");
        gameState = gameStateMemento.getSavedState().clone();  // Make sure it's a copy, deep copy
    }

    public void progressSummary() {
        gameState.summary();
    }

    public void catchPokemon(String pokemon) {
        System.out.println("A wild " + pokemon + " appeared!!!");
        if (getChance() > 0.5) {
            System.out.println(pokemon + " was caught!!!");
            gameState.addToDex(pokemon);
        } else {
            System.out.println(pokemon + " ran away...");
        }
    }

    public void challengeGym(int gymNumber) {
        if (gymNumber < 1 || gymNumber > 8) {
            System.out.println("Gym " + gymNumber + " doesn't exist...");
        } else {
            System.out.println("Challenging gym " + gymNumber + "...");
            // strength is between on to 10, if strength is greater than gymNumber player wins.
            if (getStrength() >= gymNumber) {
                System.out.println("Gym " + gymNumber + " was defeated!!!");
                gameState.gymDefeated(gymNumber);
            } else {
                System.out.println("Gym leader for gym " + gymNumber + " was too strong for you...");
                System.out.println("Try to challenge them again when you are stronger...");
            }
        }
    }

    private int getStrength() {
        // 1 to 10
        return rand.nextInt(10) + 1;
    }

    private double getChance() {
        return rand.nextDouble();
    }
}
