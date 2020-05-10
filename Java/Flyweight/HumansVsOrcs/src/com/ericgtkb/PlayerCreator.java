package com.ericgtkb;

import java.util.HashMap;
import java.util.Map;

public class PlayerCreator {
    private static Map<String, Player> playerMap = new HashMap<>();

    public static Player getPlayer(String playerType) throws Exception {
        if (playerMap.containsKey(playerType)) {
            return playerMap.get(playerType);
        } else {
            Player player = null;

            switch (playerType) {
                case "human":
                    System.out.println("Creating a human...");
                    player = new Human();
                    playerMap.put(playerType, player);
                    break;
                case "orc":
                    System.out.println("Creating an orc...");
                    player = new Orc();
                    playerMap.put(playerType, player);
                    break;
                default:
                    throw new Exception("Unknown player type...");
            }
            return player;
        }
    }
}
