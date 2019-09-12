package com.ericgtkb;

public interface FlyBehavior {
    void fly();
}

class FlyWithWings implements FlyBehavior {
    @Override
    public void fly() {
        System.out.println("I have wings! I am flying high!!!");
    }
}

class FlyNoWay implements FlyBehavior {
    @Override
    public void fly() {
        System.out.println("I don't have wings... I can't fly...");
    }
}

