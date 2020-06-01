package com.ericgtkb;

import java.util.HashMap;
import java.util.Map;

// Invoker class
public class SmartHome {
    private Map<String, Command> onCommands;
    private Map<String, Command> offCommands;

    public SmartHome() {
        onCommands = new HashMap<>();
        offCommands = new HashMap<>();
    }

    public void addCommand(String name, Command onCommand, Command offCommand) {
        onCommands.put(name, onCommand);
        offCommands.put(name, offCommand);
    }

    public void turnOn(String name) {
        onCommands.get(name).execute();
    }

    public void turnOff(String name) {
        offCommands.get(name).execute();
    }
}
