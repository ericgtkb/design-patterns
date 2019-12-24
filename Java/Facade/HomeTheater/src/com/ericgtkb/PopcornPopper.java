package com.ericgtkb;

public class PopcornPopper {
    String name;

    public PopcornPopper(String name) {
        this.name = name;
    }

    public void on() {
        System.out.println(name + " on");
    }

    public void off() {
        System.out.println(name + " off");
    }

    public void pop() {
        System.out.println(name + " popping popcorn!");
    }
}
