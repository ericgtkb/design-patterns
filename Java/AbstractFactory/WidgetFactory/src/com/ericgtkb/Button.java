package com.ericgtkb;

public interface Button {
    void click();
}

class WindowsStyleButton implements Button {
    @Override
    public void click() {
        System.out.println("This Windows-style button is clicked!!!");
    }
}

class MacStyleButton implements Button {
    @Override
    public void click() {
        System.out.println("This Mac-style button is clicked!!!");
    }
}

