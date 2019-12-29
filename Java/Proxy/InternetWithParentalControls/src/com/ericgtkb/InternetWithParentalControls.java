package com.ericgtkb;

import java.util.HashSet;
import java.util.Set;

// This is the proxy class with access control
public class InternetWithParentalControls implements Internet {
    private Internet internet = new RealInternet();
    private static Set<String> bannedSites;
    static {
        bannedSites = new HashSet<>();
        bannedSites.add("banned.com");
        bannedSites.add("notforchildren.com");
        bannedSites.add("foradults.com");
        bannedSites.add("nsfw.com");
    }

    @Override
    public void connectTO(String host) {
        if (bannedSites.contains(host.toLowerCase())) {
            System.out.println("Access denied...");
        } else {
            internet.connectTO(host);
        }
    }
}
