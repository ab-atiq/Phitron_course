class Airport:
    def __init__(self, code, name, city, country, latitude, longitude, rate) -> None:
        self.code = code
        self.name = name
        self.city = city
        self.country = country
        self.lat = float(latitude)
        self.long = float(longitude)
        self.rate = float(rate)

    def __repr__(self) -> str:
        return f'Airport: {self.name} in: {self.country} latitude:{self.lat} longitude: {self.long} rate: {self.rate}'
