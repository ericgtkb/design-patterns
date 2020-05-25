package com.ericgtkb;

public class Book {
    String name;

    public Book(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return name;
    }
}
