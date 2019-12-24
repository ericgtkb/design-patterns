package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        Amplifier amp = new Amplifier("Eric's Amplifier");
        Tuner tuner = new Tuner("Eric's AM/FM Tuner", amp);
        DVDPlayer dvd = new DVDPlayer("Eric's DVD Player", amp);
        CDPlayer cd = new CDPlayer("Eric's CD Player", amp);
        Projector projector = new Projector("Eric's Projector", dvd);
        TheaterLights lights = new TheaterLights("Eric's Theater Ceiling Lights");
        Screen screen = new Screen("Eric's Theater Screen");
        PopcornPopper popper = new PopcornPopper("Eric's Popcorn Popper");

        HomeTheater homeTheater = new HomeTheater(amp, tuner, dvd, cd, projector, lights, screen, popper);
        homeTheater.watchMovie("Man In Black");
        homeTheater.endMovie();
    }
}
