package com.ericgtkb;

public class Main {

    public static void main(String[] args) throws Exception {
        BookCollection science = new ScienceCollection();
        BookCollection music = new MusicCollection();

        CollectionIterator iterator = science.createIterator();
        System.out.println("Iterating through the science collection...");
        for (iterator.first(); !iterator.isDone(); iterator.next()) {
            System.out.println(iterator.currentItem());
        }
        System.out.println();

        iterator = music.createIterator();
        System.out.println("Iterating through the music collection...");
        while (!iterator.isDone()) {
            System.out.println(iterator.currentItem());
            iterator.next();
        }
        System.out.println();
    }
}
