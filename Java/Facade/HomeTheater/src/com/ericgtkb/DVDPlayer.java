package com.ericgtkb;

public class DVDPlayer {
	String name;
	Amplifier amplifier;
	String movie;
	int currentTrack;

	public DVDPlayer(String name, Amplifier amplifier) {
		this.name = name;
		this.amplifier = amplifier;
	}
 
	public void on() {
		System.out.println(name + " on");
	}
 
	public void off() {
		System.out.println(name + " off");
	}

	public void eject() {
        movie = null;
        System.out.println(name + " eject");
	}
 
	public void play(String movie) {
		this.movie = movie;
		currentTrack = 0;
		System.out.println(name + " playing \"" + movie + "\"");
	}

	public void play(int track) {
		if (movie == null) {
			System.out.println(name + " can't play track " + track + " no dvd inserted");
		} else {
			currentTrack = track;
			System.out.println(name + " playing track " + currentTrack + " of \"" + movie + "\"");
		}
	}

	public void stop() {
		currentTrack = 0;
		System.out.println(name + " stopped \"" + movie + "\"");
	}
 
	public void pause() {
		System.out.println(name + " paused \"" + movie + "\"");
	}

	public void setTwoChannelAudio() {
		System.out.println(name + " set two channel audio");
	}
 
	public void setSurroundAudio() {
		System.out.println(name + " set surround audio");
	}
}
