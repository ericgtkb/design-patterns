package com.ericgtkb;

public class Tuner {
	String name;
	Amplifier amplifier;
	double frequency;

	public Tuner(String name, Amplifier amplifier) {
		this.name = name;
		this.amplifier = amplifier;
	}

	public void setFrequency(double frequency) {
		System.out.println(name + " setting frequency to " + frequency);
		this.frequency = frequency;
	}

	public void on() {
		System.out.println(name + " on");
	}

	public void off() {
		System.out.println(name + " off");
	}

	public void setAM() {
		System.out.println(name + " setting AM mode");
	}

	public void setFM() {
		System.out.println(name + " setting FM mode");
	}
}
