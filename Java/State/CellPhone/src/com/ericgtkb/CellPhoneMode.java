package com.ericgtkb;

public interface CellPhoneMode {
    void newMessage();
    void newPhoneCall();
    void newAppNotification();
}

class NormalMode implements CellPhoneMode {
    private CellPhone phone;

    public NormalMode(CellPhone phone) {
        this.phone = phone;
    }

    @Override
    public void newMessage() {
        System.out.println("Beep! " + phone.getName() + "! You have a new message!");
    }

    @Override
    public void newPhoneCall() {
        System.out.println("Ring ring! " + phone.getName() + "! You are getting a new phone call!");
    }

    @Override
    public void newAppNotification() {
        System.out.println("Ding! " + phone.getName() + "! You have a new app notification!");
    }
}

class SilentMode implements CellPhoneMode {
    private CellPhone phone;

    public SilentMode(CellPhone phone) {
        this.phone = phone;
    }

    @Override
    public void newMessage() {
        System.out.println("Vibrating! " + phone.getName() + "! You have a new message!");
    }

    @Override
    public void newPhoneCall() {
        System.out.println("Vibrating Vibrating!!! " + phone.getName() + "! You are getting a new phone call!");
    }

    @Override
    public void newAppNotification() {
        System.out.println("Vibrating! " + phone.getName() + "! You have a new app notification!");
    }
}

class AirplaneMode implements CellPhoneMode {
    private CellPhone phone;

    public AirplaneMode(CellPhone phone) {
        this.phone = phone;
    }

    @Override
    public void newMessage() {
        System.out.println("In airplane mode... Cannot receive any messages...");
    }

    @Override
    public void newPhoneCall() {
        System.out.println("In airplane mode... Cannot receive any phone calls...");
    }

    @Override
    public void newAppNotification() {
        System.out.println("... " + phone.getName() + "! You have a new app notification!");
    }
}