package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        Internet internet = new InternetWithParentalControls();
        internet.connectTO("eric.com");
        internet.connectTO("google.com");
        internet.connectTO("nsfw.com");
        internet.connectTO("notforchildren.com");
        internet.connectTO("foradults.com");
        internet.connectTO("banned.com");
        internet.connectTO("facebook.com");

    }
}
