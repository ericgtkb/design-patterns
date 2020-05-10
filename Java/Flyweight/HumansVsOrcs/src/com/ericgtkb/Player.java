package com.ericgtkb;

public interface Player {
    void fight();
    void setWeapon(String weapon);
}

class Human implements Player {
    private String weapon;

    @Override
    public void fight() {
        System.out.println("I am a human wielding a(n) " + weapon + "! I will defeat you orcs!!!");
    }

    @Override
    public void setWeapon(String weapon) {
        this.weapon = weapon;
    }
}


class Orc implements Player {
    private String weapon;

    @Override
    public void fight() {
        System.out.println("I am an orc wielding a(n) " + weapon + "! I will defeat you humans!!!");
    }

    @Override
    public void setWeapon(String weapon) {
        this.weapon = weapon;
    }
}
