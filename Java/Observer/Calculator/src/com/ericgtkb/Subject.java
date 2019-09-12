package com.ericgtkb;

import java.util.HashSet;

public interface Subject {
    void addObserver(Observer obs);
    void removeObserver(Observer obs);
    void notifyObservers();
}

class DataSource implements Subject {
    private HashSet<Observer> observers;
    private int a;
    private int b;

    public DataSource() {
        observers = new HashSet<>();
    }

    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }

    public void updateData(int a, int b) {
        this.a = a;
        this.b = b;
        notifyObservers();
    }

    @Override
    public void addObserver(Observer obs) {
        observers.add(obs);
    }

    @Override
    public void removeObserver(Observer obs) {
        observers.remove(obs);
    }

    @Override
    public void notifyObservers() {
        for (var observer : observers) {
            observer.update();
        }
    }
}
