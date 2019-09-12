// Observer: Define a one-to-many dependency between objects so that when one object
// changes state, all its dependents are notified and updated automatically.
package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        DataSource ds = new DataSource();
        Add addDisplay = new Add(ds);
        Average averageDisplay = new Average(ds);
        ds.updateData(1, 5);
        ds.updateData(3, 12);
        ds.removeObserver(addDisplay);
        ds.updateData(32, 1);
        ds.updateData(22, -3);
    }
}
