package com.ericgtkb;

public interface Observer {
    void update();
}

interface Display {
    void display();
}

class Add implements Observer, Display {
    private Subject subject;
    private int a;
    private int b;
    private int sum;

    public Add(Subject subject) {
        this.subject = subject;
        subject.addObserver(this);
    }

    private void calculateSum() {
        sum = a + b;
    }

    @Override
    public void update() {
        DataSource dataSource = (DataSource) subject;
        a = dataSource.getA();
        b = dataSource.getB();
        calculateSum();
        display();
    }

    @Override
    public void display() {
        System.out.println("Calculating sum...");
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("a + b = " + sum);
    }
}

class Average implements Observer, Display {
    private Subject subject;
    private double aAve;
    private double bAve;
    private int count;

    public Average(Subject subject) {
        this.subject = subject;
        subject.addObserver(this);
    }

    private void calculateAverage(int a, int b) {
        aAve = (aAve * count + a) / (count + 1);
        bAve = (bAve * count + b) / (count + 1);
        count++;
    }

    @Override
    public void update() {
        DataSource dataSource = (DataSource) subject;
        calculateAverage(dataSource.getA(), dataSource.getB());
        display();
    }

    @Override
    public void display() {
        System.out.println("Calculating average...");
        System.out.println("The average of a so far is: " + aAve);
        System.out.println("The average of b so far is: " + bAve);
    }
}