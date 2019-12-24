package com.ericgtkb;

public class Screen {
	String name;

	public Screen(String name) {
		this.name = name;
	}

	public void up() {
		System.out.println(name + " going up");
	}

	public void down() {
		System.out.println(name + " going down");
	}
}
