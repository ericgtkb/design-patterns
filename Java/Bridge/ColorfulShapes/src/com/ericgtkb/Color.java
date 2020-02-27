package com.ericgtkb;

public interface Color {
    void fillColor();
}


class RedColor implements Color {
    @Override
    public void fillColor() {
        System.out.println("Filling the space with red...");
    }
}


class GreenColor implements Color {
    @Override
    public void fillColor() {
        System.out.println("Filling the space with green...");
    }
}


class BlueColor implements Color {
    @Override
    public void fillColor() {
        System.out.println("Filling the space with blue...");
    }
}

