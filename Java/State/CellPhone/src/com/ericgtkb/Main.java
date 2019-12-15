package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        CellPhone myPhone = new CellPhone("Eric");
        myPhone.newMessage();
        myPhone.newPhoneCall();
        myPhone.newAppNotification();

        System.out.println("Going to a meeting...");
        myPhone.goSilent();
        myPhone.newMessage();
        myPhone.newPhoneCall();
        myPhone.newAppNotification();

        System.out.println("Getting on an airplane...");
        myPhone.goAirplane();
        myPhone.newMessage();
        myPhone.newPhoneCall();
        myPhone.newAppNotification();

        System.out.println("Landed at the destination...");
        myPhone.goNormal();
        myPhone.newMessage();
        myPhone.newPhoneCall();
        myPhone.newAppNotification();

    }
}
