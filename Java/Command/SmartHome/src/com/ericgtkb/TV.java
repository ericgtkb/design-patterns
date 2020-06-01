package com.ericgtkb;

// A receiver class. Receivers can be any class
public class TV {
    public void on() {
        System.out.println("Turning the tv on...");
    }

    public void switchChannel(int channelNumber) {
        if (channelNumber < 0 || channelNumber > 100) {
            System.out.println("Channel number out of range...\nSwitching to channel 0...");
        } else {
            System.out.println("Switching to channel " + channelNumber + "...");
        }
    }

    public void off() {
        System.out.println("Turning the tv off...");
    }
}

