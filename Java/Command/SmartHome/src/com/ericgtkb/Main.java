package com.ericgtkb;

public class Main {
    private static SmartHome setUpSmartHome() {
        SmartHome home = new SmartHome();
        Light light = new Light();
        TV tv = new TV();

        LightOnCommand lightOnCommand = new LightOnCommand(light);
        LightOffCommand lightOffCommand = new LightOffCommand(light);

        TVOnCommand tvOnCommand = new TVOnCommand(tv);
        TVOffCommand tvOffCommand = new TVOffCommand(tv);

        home.addCommand("light", lightOnCommand, lightOffCommand);
        home.addCommand("tv", tvOnCommand, tvOffCommand);

        return home;
    }

    public static void main(String[] args) {
        SmartHome home = setUpSmartHome();

        home.turnOn("light");
        home.turnOn("tv");

        home.turnOff("tv");
        home.turnOff("light");
    }
}
