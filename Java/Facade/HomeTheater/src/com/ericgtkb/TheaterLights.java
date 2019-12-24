package com.ericgtkb;

public class TheaterLights {
	String name;

	public TheaterLights(String name) {
		this.name = name;
	}

	public void on() {
		System.out.println(name + " on");
	}

	public void off() {
		System.out.println(name + " off");
	}

	public void dim(int level) {
		System.out.println(name + " dimming to " + level  + "%");
	}
}
