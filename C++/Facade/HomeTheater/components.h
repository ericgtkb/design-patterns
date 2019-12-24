//
// Created by ericchen on 12/24/19.
//

#ifndef HOMETHEATER_COMPONENTS_H
#define HOMETHEATER_COMPONENTS_H

#include <string>

class Amplifier;
class Tuner;
class DVDPlayer;
class CDPlayer;
class Projector;
class TheaterLights;
class Screen;
class PopcornPopper;

class Amplifier {
public:
    explicit Amplifier(const std::string &name);
    void set_tuner(Tuner* tuner);
    void set_dvd(DVDPlayer* dvd);
    void set_cd(CDPlayer* cd);
    void on();
    void off();
    void set_stereo_sound();
    void set_surround_sound();
    void set_volume(int level);

private:
    std::string name;
    Tuner* tuner;
    DVDPlayer* dvd;
    CDPlayer* cd;
};


class Tuner {
public:
    Tuner(const std::string &name, Amplifier *amplifier);
    void set_frequency(double frequency);
    void on();
    void off();
    void set_am();
    void set_fm();

private:
    std::string name;
    Amplifier* amplifier;
    double frequency;
};


class DVDPlayer {
public:
    DVDPlayer(const std::string& name, Amplifier* amplifier);
    void on();
    void off();
    void eject();
    void play(const std::string& movie);
    void play(int track);
    void stop();
    void pause();
    void set_two_channel_audio();
    void set_surround_audio();

private:
    std::string name;
    Amplifier* amplifier;
    std::string movie;
    int current_track;
};


class CDPlayer {
public:
    CDPlayer(const std::string& name, Amplifier* amplifier);
    void on();
    void off();
    void eject();
    void play(const std::string& title);
    void play(int track);
    void stop();
    void pause();

private:
    std::string name;
    Amplifier* amplifier;
    std::string title;
    int current_track;
};

class Projector {
public:
    Projector(const std::string& name, DVDPlayer* dvd_player);
    void on();
    void off();
    void wide_screen_mode();
    void tv_mode();
private:
    std::string name;
    DVDPlayer* dvd_player;
};

class TheaterLights {
public:
    explicit TheaterLights(const std::string& name);
    void on();
    void off();
    void dim(int level);

private:
    std::string name;
};

class Screen {
public:
    explicit Screen(const std::string& name);
    void up();
    void down();

private:
    std::string name;
};

class PopcornPopper {
public:
    explicit PopcornPopper(const std::string& name);
    void on();
    void off();
    void pop();

private:
    std::string name;
};


#endif //HOMETHEATER_COMPONENTS_H
