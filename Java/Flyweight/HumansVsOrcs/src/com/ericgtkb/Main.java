package com.ericgtkb;

import java.util.Random;

public class Main {
    private static String[] weapons = {"sword", "axe", "mace", "dagger"};
    private static String[] playerTypes = {"human", "orc"};

    public static String getRandomPlayerType() {
        Random rand = new Random();
        int index = rand.nextInt(playerTypes.length);
        return playerTypes[index];
    }

    public static String getRandomWeapon() {
        Random rand = new Random();
        int index = rand.nextInt(weapons.length);
        return weapons[index];
    }

    public static void main(String[] args) throws Exception {
        System.out.println("=========================Humans vs Orcs=========================");
        System.out.println("Starting the game...");
        for (int i = 0; i < 10; i++) {
            Player player = PlayerCreator.getPlayer(getRandomPlayerType());
            player.setWeapon(getRandomWeapon());
            player.fight();
        }
        System.out.println("The winning team is the " + getRandomPlayerType() + "s!!!");
    }
}
