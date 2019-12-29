#include "internet.h"

int main() {
    InternetWithParentalControls internet {};
    internet.connect_to("eric.com");
    internet.connect_to("google.com");
    internet.connect_to("nsfw.com");
    internet.connect_to("notforchildren.com");
    internet.connect_to("foradults.com");
    internet.connect_to("banned.com");
    internet.connect_to("facebook.com");
    return 0;
}
