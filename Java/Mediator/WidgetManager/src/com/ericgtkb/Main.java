package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        WindowManager manager = new WindowManager();
        manager.getTextBox().setText("Mediator pattern!!!");
        manager.getDrawButton().clicked();
        manager.getClearButton().clicked();
        manager.getTextBox().setText("Manager is handling the communication between widgets!!!");
        manager.getClearButton().clicked();
    }
}
