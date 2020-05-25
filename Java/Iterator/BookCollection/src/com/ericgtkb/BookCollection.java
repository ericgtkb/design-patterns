package com.ericgtkb;

import java.util.ArrayList;
import java.util.List;

public interface BookCollection {
    CollectionIterator createIterator();
}

class ScienceCollection implements BookCollection {
    private Book[] books;

    public ScienceCollection() {
        books = new Book[3];
        books[0] = new Book("Physics");
        books[1] = new Book("Math");
        books[2] = new Book("Chemistry");
    }

    @Override
    public CollectionIterator createIterator() {
        return new ScienceCollectionIterator(books);
    }
}

class MusicCollection implements BookCollection {
    private List<Book> bookList;

    public MusicCollection() {
        bookList = new ArrayList<>();
        bookList.add(new Book("Scales and Modes"));
        bookList.add(new Book("Jazz History"));
        bookList.add(new Book("Contemporary Harmony"));
        bookList.add(new Book("Music Theory"));
    }

    @Override
    public CollectionIterator createIterator() {
        return new MusicCollectionIterator(bookList);
    }
}


