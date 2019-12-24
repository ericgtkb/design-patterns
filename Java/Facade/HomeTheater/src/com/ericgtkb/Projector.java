package com.ericgtkb;

public class Projector {
	String name;
	DVDPlayer dvdPlayer;
	
	public Projector(String name, DVDPlayer dvdPlayer) {
		this.name = name;
		this.dvdPlayer = dvdPlayer;
	}
 
	public void on() {
		System.out.println(name + " on");
	}
 
	public void off() {
		System.out.println(name + " off");
	}

	public void wideScreenMode() {
		System.out.println(name + " in widescreen mode (16x9 aspect ratio)");
	}

	public void tvMode() {
		System.out.println(name + " in tv mode (4x3 aspect ratio)");
	}
}
