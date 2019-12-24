//
// Created by ericchen on 12/24/19.
//

#ifndef HOMETHEATER_HOME_THEATER_H
#define HOMETHEATER_HOME_THEATER_H


#include "components.h"

class HomeTheater {
public:
    HomeTheater(Amplifier* amp, Tuner* tuner, DVDPlayer* dvd, CDPlayer* cd, Projector* projector, TheaterLights* lights,
                Screen* screen, PopcornPopper* popper);

    void watch_movie(const std::string& movie);
    void end_movie();
private:
    Amplifier* amp;
    Tuner* tuner;
    DVDPlayer* dvd;
    CDPlayer* cd;
    Projector* projector;
    TheaterLights* lights;
    Screen* screen;
    PopcornPopper* popper;

};


#endif //HOMETHEATER_HOME_THEATER_H
