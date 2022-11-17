import csv
from airport import Airport
from math import sin, cos, sqrt, radians, atan2


class AllAirports:
    def __init__(self) -> None:
        self.airports = None
        self.load_airport_data("./data/airport.csv")

    def load_airport_data(self, file_path):
        airports = {}
        currency_rates = {}
        country_currency = {}

        # get currency name <---> rate
        with open('./data/currency_rates.csv', 'r') as file:
            lines = csv.reader(file)
            for line in lines:
                # line[1]=BDT, line[2]=taka in dolar value
                currency_rates[line[1]] = line[2]
        file.close()
        # get currency name <-----> country
        with open('./data/country_currency.csv', 'r')as file:
            lines = csv.reader(file)
            for line in lines:
                # line[0]=country name, line[1]=BDT
                country_currency[line[0]] = line[1]
        file.close()

        # create airport
        with open(file_path, 'r', encoding='utf8') as file:
            lines = csv.reader(file)
            # print(lines)
            try:
                for line in lines:
                    # print(line)
                    country = line[3]
                    currency = country_currency[country]
                    rate = currency_rates[currency]
                    airports[line[4]] = Airport(
                        line[4], line[1], line[2], line[3], line[6], line[7], rate)
            except KeyError as e:
                print(e)
        self.airports = airports
        for airport in airports.items():
            print(airport)

    def get_distance_between_two_airport(self, lat1, lon1, lat2, lon2):
        radius = 6371
        dif_lat = radians(lat2 - lat1)
        dif_lon = radians(lon2 - lon1)
        a = (sin(dif_lat / 2) * sin(dif_lat / 2) +
            cos(radians(lat1)) * cos(radians(lat2)) *
            sin(dif_lon / 2) * sin(dif_lon / 2))
        c = 2 * atan2(sqrt(a), sqrt(1 - a))
        d = radius * c
        return d

    def distance_between_two_airports(self, airport1_code, airport2_code):
        airport1 = self.airports[airport1_code]
        airport2 = self.airports[airport2_code]
        distance = self.get_distance_between_two_airport(
            airport1.lat, airport2.lat, airport1.long, airport2.long)
        return distance

    def get_ticket_price(self, start, end):
        distance = self.distance_between_two_airports(start, end)
        airport1 = self.airports[start]
        fare = distance*airport1.rate
        return fare


world_tour = AllAirports()
fare = world_tour.get_ticket_price('DAC', 'PRA')
print('Ticket fare: ', fare)
