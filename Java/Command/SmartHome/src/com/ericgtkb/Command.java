package com.ericgtkb;

import java.util.Scanner;

public interface Command {
    void execute();
}


class LightOnCommand implements Command {
    private Light light;

    public LightOnCommand(Light light) {
        this.light = light;
    }

    @Override
    public void execute() {
        light.on();
    }
}


class LightOffCommand implements Command {
    private Light light;

    public LightOffCommand(Light light) {
        this.light = light;
    }

    @Override
    public void execute() {
        light.off();
    }
}


class TVOnCommand implements Command {
    private TV tv;

    public TVOnCommand(TV tv) {
        this.tv = tv;
    }

    @Override
    public void execute() {
        tv.on();
        switchChannel();
    }

    private void switchChannel() {
        int channelNumber;

        System.out.println("Choose a channel...");
        try (Scanner scanner = new Scanner(System.in)) {
            channelNumber = scanner.nextInt();
        } catch (Exception e) {
            System.out.println("Invalid channel number...\nSetting channel number to 0...");
            channelNumber = 0;
        }

        tv.switchChannel(channelNumber);
    }
}


class TVOffCommand implements Command {
    private TV tv;

    public TVOffCommand(TV tv) {
        this.tv = tv;
    }

    @Override
    public void execute() {
        tv.off();
    }
}


