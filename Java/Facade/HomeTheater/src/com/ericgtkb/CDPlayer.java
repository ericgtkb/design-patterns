package com.ericgtkb;

public class CDPlayer {
	String name;
	Amplifier amplifier;
	String title;
	int currentTrack;

	public CDPlayer(String name, Amplifier amplifier) {
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
		title = null;
		System.out.println(name + " eject");
	}
 
	public void play(String title) {
		this.title = title;
		currentTrack = 0;
		System.out.println(name + " playing \"" + title + "\"");
	}

	public void play(int track) {
		if (title == null) {
			System.out.println(name + " can't play track " + currentTrack +
					", no cd inserted");
		} else {
			currentTrack = track;
			System.out.println(name + " playing track " + currentTrack);
		}
	}

	public void stop() {
		currentTrack = 0;
		System.out.println(name + " stopped");
	}
 
	public void pause() {
		System.out.println(name + " paused \"" + title + "\"");
	}
}
