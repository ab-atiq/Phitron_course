import csv
from aircraft import Aircraft


class Airlines:
    def __init__(self) -> None:
        self.air_crafts = None
        self.load_air_crafts_data('./data/aircraft.csv')

    def load_air_crafts_data(self, csv_file_path):
        air_crafts = {}
        with open(csv_file_path, 'r') as file:
            lines = csv.reader(file)
            next(lines)
            for line in lines:
                air_crafts[line[0]] = Aircraft(
                    line[3], line[0], line[1], line[4])
        self.air_crafts = air_crafts
        file.close()
        # for air in air_crafts.items():
        #     print(air)

    def get_aircraft(self, code):
        return self.air_crafts[code]


Airlines()
