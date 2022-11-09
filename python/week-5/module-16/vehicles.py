from abc import ABC, abstractmethod


class Vehicle:
    speed = {
        "car": 30,
        "bike": 50,
        "cng": 20
    }

    def __init__(self, vehicle_type, vehicle_plate, rate, driver) -> None:
        self.vehicle_type = vehicle_type
        self.vehicle_plate = vehicle_plate
        self.rate = rate
        self.driver = driver
        self.speed = self.speed[vehicle_type]
        self.status = 'Available'

    @abstractmethod
    def start_driving(self):
        pass

    def trip_finished(self):
        pass


class Car(Vehicle):
    def __init__(self, vehicle_type, vehicle_plate, rate, driver) -> None:
        super().__init__(vehicle_type, vehicle_plate, rate, driver)

    def start_driving(self):
        self.status = 'Unavailable'
        print(self.vehicle_type, self.vehicle_plate, "started")

    def trip_finished(self):
        self.status = 'Available'
        print(self.vehicle_type, self.vehicle_plate, "completed trip")


class Bike(Vehicle):
    def __init__(self, vehicle_type, vehicle_plate, rate, driver) -> None:
        super().__init__(vehicle_type, vehicle_plate, rate, driver)

    def start_driving(self):
        self.status = 'Unavailable'
        print(self.vehicle_type, self.vehicle_plate, "started")

    def trip_finished(self):
        self.status = 'Available'
        print(self.vehicle_type, self.vehicle_plate, "completed trip")


class CNG(Vehicle):
    def __init__(self, vehicle_type, vehicle_plate, rate, driver) -> None:
        super().__init__(vehicle_type, vehicle_plate, rate, driver)

    def start_driving(self):
        self.status = 'Unavailable'
        print(self.vehicle_type, self.vehicle_plate, "started")

    def trip_finished(self):
        self.status = 'Available'
        print(self.vehicle_type, self.vehicle_plate, "completed trip")
