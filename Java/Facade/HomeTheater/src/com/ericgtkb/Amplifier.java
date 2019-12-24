package com.ericgtkb;

public class Amplifier {
	String name;
	Tuner tuner;
	DVDPlayer dvd;
	CDPlayer cd;
	
	public Amplifier(String name) {
		this.name = name;
	}

	public void setTuner(Tuner tuner) {
		System.out.println(name + " setting tuner to " + dvd);
		this.tuner = tuner;
	}

	public void setDVD(DVDPlayer dvd) {
		System.out.println(name + " setting DVD player to " + dvd);
		this.dvd = dvd;
	}

	public void setCD(CDPlayer cd) {
		System.out.println(name + " setting CD player to " + cd);
		this.cd = cd;
	}

	public void on() {
		System.out.println(name + " on");
	}
 
	public void off() {
		System.out.println(name + " off");
	}
 
	public void setStereoSound() {
		System.out.println(name + " stereo mode on");
	}
 
	public void setSurroundSound() {
		System.out.println(name + " surround sound on (5 speakers, 1 subwoofer)");
	}
 
	public void setVolume(int level) {
		System.out.println(name + " setting volume to " + level);
	}
}
