#include <iostream>
#include "internet.h"

void RealInternet::connect_to(const std::string &host) const {
    std::cout << "Connecting to " << host << "\n";
}


// TODO: fix clang-tidy complaint
std::unordered_set<std::string> InternetWithParentalControls::banned_sites {"banned.com", "notforchildren.com",
                                                                            "foradults.com", "nsfw.com"};

InternetWithParentalControls::InternetWithParentalControls() : internet{std::make_unique<RealInternet>()} {}

void InternetWithParentalControls::connect_to(const std::string &host) const {

    if (banned_sites.find(host) != banned_sites.end()) {
        std::cout << "Access denied...\n";
    } else {
        internet->connect_to(host);
    }
}

