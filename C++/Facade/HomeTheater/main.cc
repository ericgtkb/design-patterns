#include "components.h"
#include "home_theater.h"

int main() {
    Amplifier amp{"Eric's Amplifier"};
    Tuner tuner{"Eric's AM/FM Tuner", &amp};
    DVDPlayer dvd{"Eric's DVD Player", &amp};
    CDPlayer cd{"Eric's CD Player", &amp};
    Projector projector{"Eric's Projector", &dvd};
    TheaterLights lights{"Eric's Theater Ceiling Lights"};
    Screen screen{"Eric's Theater Screen"};
    PopcornPopper popper{"Eric's Popcorn Popper"};

    HomeTheater homeTheater{&amp, &tuner, &dvd, &cd, &projector, &lights, &screen, &popper};
    homeTheater.watch_movie("Man In Black");
    homeTheater.end_movie();

    return 0;
}
