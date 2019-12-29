import abc


class Internet(abc.ABC):
    @abc.abstractmethod
    def connect_to(self, host: str) -> None:
        pass


class RealInternet(Internet):
    def connect_to(self, host: str) -> None:
        print(f'Connecting to {host}...')


class InternetWithParentalControls(Internet):
    banned_sites = {"banned.com", "notforchildren.com", "foradults.com", "nsfw.com"}

    def __init__(self):
        self.internet = RealInternet()

    def connect_to(self, host: str) -> None:
        if host.lower() in InternetWithParentalControls.banned_sites:
            print('Access denied...')
        else:
            self.internet.connect_to(host)


if __name__ == '__main__':
    internet = InternetWithParentalControls()
    internet.connect_to("eric.com")
    internet.connect_to("google.com")
    internet.connect_to("nsfw.com")
    internet.connect_to("notforchildren.com")
    internet.connect_to("foradults.com")
    internet.connect_to("banned.com")
    internet.connect_to("facebook.com")
