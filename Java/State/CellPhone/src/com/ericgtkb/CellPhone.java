package com.ericgtkb;

public class CellPhone {
    private String name;

    // States are often singletons. Here for simplicity they are just normal objects.
    private CellPhoneMode normalMode;
    private CellPhoneMode silentMode;
    private CellPhoneMode airplaneMode;

    private CellPhoneMode mode;

    public CellPhone(String name) {
        this.name = name;
        normalMode = new NormalMode(this);
        silentMode = new SilentMode(this);
        airplaneMode = new AirplaneMode(this);
        mode = normalMode;
    }

    public String getName() {
        return name;
    }

    // Methods for changing modes (states). This is sometimes delegated to the states.
    public void goNormal() {
        mode = normalMode;
        System.out.println("Switching to normal mode...");
    }
    public void goSilent() {
        mode = silentMode;
        System.out.println("Switching to silent mode...");
    }

    public void goAirplane() {
        mode = airplaneMode;
        System.out.println("Switching to airplane mode...");
    }

    public void newMessage() {
        mode.newMessage();
    }
    public void newPhoneCall(){
        mode.newPhoneCall();
    }
    public void newAppNotification() {
        mode.newAppNotification();
    }
}
