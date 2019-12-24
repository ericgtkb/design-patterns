//
// Created by ericchen on 12/24/19.
//

#include <iostream>
#include "components.h"

Amplifier::Amplifier(const std::string &name) : name(name), tuner{nullptr}, dvd{nullptr}, cd{nullptr} {}

void Amplifier::set_tuner(Tuner* tuner) {
    this->tuner = tuner;
}

void Amplifier::set_dvd(DVDPlayer* dvd) {
    this->dvd = dvd;
}

void Amplifier::set_cd(CDPlayer* cd) {
    this->cd = cd;
}

void Amplifier::on() {
    std::cout << name << " on\n";
}

void Amplifier::off() {
    std::cout << name << " off\n";
}

void Amplifier::set_stereo_sound() {
    std::cout << name << " stereo mode on\n";
}

void Amplifier::set_surround_sound() {
    std::cout << name << " surround sound on (5 speakers, 1 subwoofer)\n";
}

void Amplifier::set_volume(int level) {
    std::cout << name << " setting volume to " << level << "\n";
}

Tuner::Tuner(const std::string& name, Amplifier* amplifier) : name(name), amplifier(amplifier), frequency(0) {}

void Tuner::set_frequency(double frequency) {
    std::cout << name << " setting frequency to " << frequency << "\n";
    this->frequency = frequency;
}

void Tuner::on() {
    std::cout << name << " on\n";
}

void Tuner::off() {
    std::cout << name << " off\n";
}

void Tuner::set_am() {
    std::cout << name << " setting AM mode\n";
}

void Tuner::set_fm() {
    std::cout << name << " setting FM mode\n";
}

DVDPlayer::DVDPlayer(const std::string& name, Amplifier* amplifier) : name(name),
        amplifier(amplifier), movie(""), current_track(0) {}

void DVDPlayer::on() {
    std::cout << name << " on\n";
}

void DVDPlayer::off() {
    std::cout << name << " off\n";
}

void DVDPlayer::eject() {
    std::cout << name << " eject\n";
}

void DVDPlayer::play(const std::string& movie) {
    this->movie = movie;
    current_track = 0;
    std::cout << name << " playing \"" << movie << "\"\n";
}

void DVDPlayer::play(int track) {
    if (movie.empty()) {
        std::cout << name << "can't play track " << track << " no dvd inserted\n";
    } else {
        current_track = track;
        std::cout << name << " playing track " << current_track << " of \"" << movie << "\"\n";
    }
}

void DVDPlayer::stop() {
    current_track = 0;
    std::cout << name << " stopped \"" << movie << "\"\n";
}

void DVDPlayer::pause() {
    std::cout << name << " paused \"" << movie << "\"\n";
}

void DVDPlayer::set_two_channel_audio() {
    std::cout << name << " set two channel audio\n";
}

void DVDPlayer::set_surround_audio() {
    std::cout << name << " set surround audio\n";
}


CDPlayer::CDPlayer(const std::string& name, Amplifier* amplifier) : name(name),
        amplifier(amplifier), title(""), current_track(0) {}

void CDPlayer::on() {
    std::cout << name << " on\n";
}

void CDPlayer::off() {
    std::cout << name << " off\n";
}

void CDPlayer::eject() {
    std::cout << name << " eject\n";
}

void CDPlayer::play(const std::string& title) {
    this->title = title;
    current_track = 0;
    std::cout << name << " playing \"" << title << "\"\n";
}

void CDPlayer::play(int track) {
    if (title.empty()) {
        std::cout << name << "can't play track " << track << " no cd inserted\n";
    } else {
        current_track = track;
        std::cout << name << " playing track " << current_track << "\n";
    }
}

void CDPlayer::stop() {
    current_track = 0;
    std::cout << name << " stopped\n";
}

void CDPlayer::pause() {
    std::cout << name << " paused \"" << title << "\"\n";
}


Projector::Projector(const std::string& name, DVDPlayer* dvd_player) : name(name), dvd_player(dvd_player) {}

void Projector::on() {
    std::cout << name << " on\n";
}

void Projector::off() {
    std::cout << name << " off\n";
}

void Projector::wide_screen_mode() {
    std::cout << name << " in widescreen mode (16x9 aspect ratio)\n";
}

void Projector::tv_mode() {
    std::cout << name << " in tv mode (4x3 aspect ratio)\n";
}

TheaterLights::TheaterLights(const std::string& name) : name(name) {}

void TheaterLights::on() {
    std::cout << name << " on\n";

}

void TheaterLights::off() {
    std::cout << name << " off\n";

}

void TheaterLights::dim(int level) {
    std::cout << name << " dimming to " << level << " %\n";
}

Screen::Screen(const std::string& name) : name(name) {}

void Screen::up() {
    std::cout << name << " going up\n";

}

void Screen::down() {
    std::cout << name << " going down\n";
}


PopcornPopper::PopcornPopper(const std::string& name) : name(name) {}

void PopcornPopper::on() {
    std::cout << name << " on\n";
}

void PopcornPopper::off() {
    std::cout << name << " off\n";
}

void PopcornPopper::pop() {

    std::cout << name << " popping popcorn!\n";
}
