package com.ericgtkb;


import java.util.List;

// This is an implementation of the GoF iterator
// first moves the iterator to the first item
// next advances the iterator to the next element but doesn't return it
// currentItem returns current element
public interface CollectionIterator {
    void first();
    void next();
    boolean isDone();
    Book currentItem() throws Exception;
}

class ScienceCollectionIterator implements CollectionIterator {
    private Book[] books;
    private int currentIndex;

    public ScienceCollectionIterator(Book[] books) {
        this.books = books;
        currentIndex = 0;
    }

    @Override
    public void first() {
        currentIndex = 0;
    }

    @Override
    public void next() {
        currentIndex++;
    }

    @Override
    public boolean isDone() {
        return currentIndex >= books.length;
    }

    @Override
    public Book currentItem() throws Exception {
        if (isDone()) {
            throw new Exception("Iterator out of bounds...");
        } else {
            return books[currentIndex];
        }
    }
}

class MusicCollectionIterator implements CollectionIterator {
    private List<Book> bookList;
    private int currentIndex;

    public MusicCollectionIterator(List<Book> bookList) {
        this.bookList = bookList;
        currentIndex = 0;
    }

    @Override
    public void first() {
        currentIndex = 0;
    }

    @Override
    public void next() {
        currentIndex++;
    }

    @Override
    public boolean isDone() {
        return currentIndex >= bookList.size();
    }

    @Override
    public Book currentItem() throws Exception {
        if (isDone()) {
            throw new Exception("Iterator out of bounds...");
        } else {
            return bookList.get(currentIndex);
        }
    }
}

