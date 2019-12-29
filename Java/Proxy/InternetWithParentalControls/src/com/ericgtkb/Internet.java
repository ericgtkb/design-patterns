package com.ericgtkb;

// This is the subject interface
public interface Internet {
    void connectTO(String host);
}


// This is the real subject class, the "free" internet, you can connect to any sites you want
class RealInternet implements Internet {
    @Override
    public void connectTO(String host) {
        System.out.println("Connecting to " + host);
    }
}
