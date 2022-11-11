class RideManager:
    def __init__(self) -> None:
        print("Ride manager activated")
        self.__income = 0
        self.__trip_history = []
        self.__available_cars = []
        self.__available_bikes = []
        self.__available_cng = []

    def add_a_vehicle(self, vehicle_type, vehicle):
        if vehicle_type == 'car':
            self.__available_cars.append(vehicle)
        elif vehicle_type == 'bike':
            self.__available_bikes.append(vehicle)
        if vehicle_type == 'cng':
            self.__available_cng.append(vehicle)

    def get_available_cars(self):
        return self.__available_cars

    def total_income(self):
        return self.__income

    def trip_history(self):
        return self.__trip_history

    def find_a_vehicle(self, rider, vehicle_type, destination):
        if vehicle_type == 'car':
            vehicles = self.__available_cars
        elif vehicle_type == 'bike':
            vehicles = self.__available_bikes
        else:
            vehicles = self.__available_cng
        if len(vehicles) == 0:
            print('Sorry no cars is available')
            return False
        for vehicle in vehicles:
            # print("Potential: rider = ", rider.location,
            #   "driver = ", car.driver.location)
            if abs(rider.location - vehicle.driver.location) < 10:
                distance = abs(rider.location - destination)
                fare = distance*vehicle.rate
                if rider.balance < fare:
                    print("You do not have enough money for this trip",
                          rider.balance, fare)
                    return False
                if vehicle.status == 'available':
                    vehicle.status = 'unavailable'
                    trip_info = f'match {vehicle_type} for {rider.name} for fare: {fare} with {vehicle.driver.name} started: {rider.location} to: {destination}'
                    # print('available cars: ', len(vehicles))
                    vehicles.remove(vehicle)
                    # print('available cars: ', len(vehicles))
                    rider.start_a_trip(fare, trip_info)
                    # driver earn
                    vehicle.driver.start_a_trip(
                        rider.location, destination, fare*.8, trip_info)
                    # company earn
                    self.__income += fare*.2
                    self.__trip_history.append(trip_info)
                    print(trip_info)
                    # print('find a match for you. cost: ', fare)
                    return True


# crate an instance of ride manager
uber = RideManager()
