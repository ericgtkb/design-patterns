package com.ericgtkb;

// TODO: Thread-safe implementations
public class TheOnlyOne {
    private static TheOnlyOne onlyInstance;

    private TheOnlyOne() {}

    public static TheOnlyOne getInstance() {
        if (onlyInstance == null) {
            System.out.println("No instance exists yet, creating the only instance...");
            onlyInstance = new TheOnlyOne();
        }
        System.out.println("This is the only instance!");
        return onlyInstance;
    }
}
