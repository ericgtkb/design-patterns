#include <iostream>
#include "home_theater.h"

HomeTheater::HomeTheater(Amplifier* amp, Tuner* tuner, DVDPlayer* dvd, CDPlayer* cd, Projector* projector,
                         TheaterLights* lights, Screen* screen, PopcornPopper* popper) : amp(amp), tuner(tuner),
                                                                                         dvd(dvd), cd(cd),
                                                                                         projector(projector),
                                                                                         lights(lights),
                                                                                         screen(screen),
                                                                                         popper(
                                                                                                 popper) {}

void HomeTheater::watch_movie(const std::string& movie) {
    std::cout << "Get ready to watch a movie...\n";

    popper->on();
    popper->pop();

    lights->dim(10);
    screen->down();

    projector->on();
    projector->wide_screen_mode();

    amp->on();
    amp->set_dvd(dvd);
    amp->set_surround_sound();
    amp->set_volume(5);

    dvd->on();
    dvd->play(movie);
}

void HomeTheater::end_movie() {
    std::cout << "Shutting movie theater down...\n";
    popper->off();
    lights->on();
    screen->up();
    projector->off();
    amp->off();
    dvd->stop();
    dvd->eject();
    dvd->off();
}
