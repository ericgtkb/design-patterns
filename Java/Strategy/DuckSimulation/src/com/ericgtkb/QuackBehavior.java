package com.ericgtkb;

public interface QuackBehavior {
    void quack();
}

class Quack implements QuackBehavior {
    @Override
    public void quack() {
        System.out.println("Quack!!!");
    }
}

class MuteQuack implements QuackBehavior {
    @Override
    public void quack() {
        System.out.println("...");
    }
}

class Squeak implements QuackBehavior {
    @Override
    public void quack() {
        System.out.println("Squeak!!!");
    }
}