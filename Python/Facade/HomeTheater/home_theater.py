

class Amplifier:
    def __init__(self, name):
        self.name = name
        self.tuner = None
        self.dvd = None
        self.cd = None

    def set_tuner(self, tuner):
        self.tuner = tuner

    def set_dvd(self, dvd):
        self.dvd = dvd

    def set_cd(self, cd):
        self.cd = cd

    def on(self):
        print(f'{self.name} on')

    def off(self):
        print(f'{self.name} off')

    def set_stereo_sound(self):
        print(f'{self.name} set stereo mode on')

    def set_surround_sound(self):
        print(f'{self.name} surround sound on (5 speakers, 1 subwoofer)')

    def set_volume(self, level):
        print(f'{self.name} setting volume to {level}')


class Tuner:
    def __init__(self, name, amplifier):
        self.name = name
        self.amplifier = amplifier
        self.frequency = None

    def set_frequency(self, frequency):
        print(f'{self.name} setting frequency to {frequency}')
        self.frequency = frequency

    def on(self):
        print(f'{self.name} on')

    def off(self):
        print(f'{self.name} off')

    def set_am(self):
        print(f'{self.name} setting AM mode')

    def set_fm(self):
        print(f'{self.name} setting FM mode')


class DVDPlayer:
    def __init__(self, name, amplifier):
        self.name = name
        self.amplifier = amplifier
        self.current_track = None
        self.movie = None

    def on(self):
        print(f'{self.name} on')

    def off(self):
        print(f'{self.name} off')

    def eject(self):
        self.movie = None
        print(f'{self.name} eject')

    def play_movie(self, movie):
        self.movie = movie
        self.current_track = 0
        print(f'{self.name} playing "{self.movie}"')

    def play_track(self, track):
        if self.movie:
            self.current_track = track
            print(f'{self.name} playing track {self.current_track} of "{self.movie}"')
        else:
            print(f"{self.name} can't play track {track} no DVD inserted")

    def stop(self):
        self.current_track = 0
        print(f'{self.name} stopped "{self.movie}"')

    def pause(self):
        self.current_track = 0
        print(f'{self.name} paused "{self.movie}"')

    def set_two_channel_audio(self):
        print(f'{self.name} set two channel audio')

    def set_surround_audio(self):
        print(f'{self.name} set surround audio')


class CDPlayer:
    def __init__(self, name, amplifier):
        self.name = name
        self.amplifier = amplifier
        self.current_track = None
        self.title = None

    def on(self):
        print(f'{self.name} on')

    def off(self):
        print(f'{self.name} off')

    def eject(self):
        self.title = None
        print(f'{self.name} eject')

    def play_title(self, title):
        self.title = title
        self.current_track = 0
        print(f'{self.name} playing "{self.title}"')

    def play_track(self, track):
        if self.title:
            self.current_track = track
            print(f'{self.name} playing track {self.current_track} of "{self.title}"')
        else:
            print(f"{self.name} can't play track {track} no DVD inserted")

    def stop(self):
        self.current_track = 0
        print(f'{self.name} stopped "{self.title}"')

    def pause(self):
        self.current_track = 0
        print(f'{self.name} paused "{self.title}"')


class Projector:
    def __init__(self, name, dvd_player):
        self.name = name
        self.dvd_player = dvd_player
       
    def on(self):
        print(f'{self.name} on')

    def off(self):
        print(f'{self.name} off')

    def wide_screen_mode(self):
        print(f'{self.name} in widescreen mode (16x9 aspect ratio)')

    def tv_mode(self):
        print(f'{self.name} in tv mode (4x3 aspect ratio)')


class TheaterLights:
    def __init__(self, name):
        self.name = name
       
    def on(self):
        print(f'{self.name} on')

    def off(self):
        print(f'{self.name} off')

    def dim(self, level):
        print(f'{self.name} dimming to {level} %')


class Screen:
    def __init__(self, name):
        self.name = name
       
    def up(self):
        print(f'{self.name} going up')

    def down(self):
        print(f'{self.name} going down')


class PopcornPopper:
    def __init__(self, name):
        self.name = name
       
    def on(self):
        print(f'{self.name} on')

    def off(self):
        print(f'{self.name} off')

    def pop(self):
        print(f'{self.name} popping popcorn!')


# The actual facade class
class HomeTheater:
    def __init__(self, amp, tuner, dvd, cd, projector, lights, screen, popper):
        self.amp = amp
        self.tuner = tuner
        self.dvd = dvd
        self.cd = cd
        self.projector = projector
        self.lights = lights
        self.screen = screen
        self.popper = popper

    def watch_movie(self, movie):
        print('Get ready to watch a movie...')
        self.popper.on()
        self.popper.pop()

        self.lights.dim(10)
        self.screen.down()

        self.projector.on()
        self.projector.wide_screen_mode()

        self.amp.on()
        self.amp.set_dvd(dvd)
        self.amp.set_surround_sound()
        self.amp.set_volume(5)

        self.dvd.on()
        self.dvd.play_movie(movie)

    def end_movie(self):
        print('Shutting movie theater down...')
        self.popper.off()
        self.lights.on()
        self.screen.up()
        self.projector.off()
        self.amp.off()
        self.dvd.stop()
        self.dvd.eject()
        self.dvd.off()


if __name__ == '__main__':
    amp = Amplifier("Eric's Amplifier")
    tuner = Tuner("Eric's AM/FM Tuner:", amp)
    dvd = DVDPlayer("Eric's DVD Player", amp)
    cd = CDPlayer("Eric's CD Player", amp)
    projector = Projector("Eric's Projector", dvd)
    lights = TheaterLights("Eric's Theater Ceiling Lights")
    screen = Screen("Eric's Theater Screen")
    popper = PopcornPopper("Eric's Popcorn Popper")

    home_theater = HomeTheater(amp, tuner, dvd, cd, projector, lights, screen, popper)

    home_theater.watch_movie("Man In Black")
    home_theater.end_movie()

