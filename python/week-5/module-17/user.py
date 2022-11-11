import hashlib
from brta import BRTA
from vehicles import Car, Bike, CNG
from ride_manager import uber
from random import randint, choice
import threading

# create license authority
license_authority = BRTA()


class UserAlreadyExists(Exception):  # crate custom exception
    def __init__(self, email, *args: object) -> None:
        print(f'User: {email} already exists.')
        super().__init__(*args)


class User:
    def __init__(self, name, email, password) -> None:
        self.name = name
        self.email = email
        encrypt_pass = hashlib.md5(password.encode()).hexdigest()
        already_exist_in_txt_file = False
        with open("email_password.txt", 'r') as file:
            if email in file.read():
                # raise UserAlreadyExists(email)
                # print(f'User: {email} already exists.')
                already_exist_in_txt_file = True
        file.close()
        if already_exist_in_txt_file == False:
            with open("email_password.txt", "a") as file:
                file.write(f"{email} {encrypt_pass}\n")
            file.close()
        # print(self.name, "user created successfully.")

    @staticmethod
    def log_in(email, password):
        stored_password = ''
        with open('email_password.txt', 'r') as file:
            lines = file.readlines()
            for line in lines:
                if email in line:
                    # print(line)
                    # stored_password = line.split(' ')[1]
                    _, stored_password = line.split(' ')
        file.close()

        # login password from txt file
        print("Login password is: ", stored_password)

        # login password matched or not with the stored password
        hashed_password = hashlib.md5(password.encode()).hexdigest()
        if hashed_password == stored_password:
            print("You are valid user.")
        else:
            print("Don't try again!!! You are not valid user.")


class Rider(User):
    def __init__(self, name, email, password, location, balance) -> None:
        super().__init__(name, email, password)
        self.location = location
        self.balance = balance
        self.__trip_history = []

    def set_location(self, location):
        self.location = location

    def get_location(self):
        return self.location

    def request_trip(self, destination):
        pass

    def get_trip_history(self):
        return self.__trip_history

    def start_a_trip(self, fare, trip_info):
        print(f'A trip started for {self.name}')
        self.balance -= fare
        self.__trip_history.append(trip_info)


class Driver(User):
    def __init__(self, name, email, password, location, license) -> None:
        super().__init__(name, email, password)
        self.location = location
        self.__trip_history = []
        self.license = license
        self.valid_driver = license_authority.validate_license(email, license)
        self.earning = 0
        self.vehicle = None

    def take_driving_test(self):
        result = license_authority.take_driving_test(self.email)
        if result == False:
            # print("Sorry you failed, Try again later.")
            pass
        else:
            self.license = result
            self.valid_driver = True

    def register_a_vehicle(self, vehicle_type, vehicle_plate, rate):
        if self.valid_driver is True:
            if vehicle_type == 'car':
                self.vehicle = Car(
                    vehicle_type, vehicle_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
            elif vehicle_type == 'bike':
                self.vehicle = Bike(
                    vehicle_type, vehicle_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
            else:
                self.vehicle = CNG(
                    vehicle_type, vehicle_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
        else:
            pass
            # print("you are not a valid driver")

    def start_a_trip(self, start, destination, fare, trip_info):
        self.earning += fare
        self.location = destination
        self.__trip_history.append(trip_info)
        # self.vehicle.start_driving(start, destination)
        # thread implement
        trip_thread = threading.Thread(
            target=self.vehicle.start_driving, args=(start, destination))
        trip_thread.start()


    # def get_trip_history(self):
    #     return self.__trip_history


'''
# user create
abul = User("Abul", "abul@gmail.com", "AbUl12345")

# log in user
abul.log_in('abul@gmail.com', 'AbUl12345')
# abul.log_in('abul@gmail.com', '123') # did not matched

# driver
polash = Driver('polash', 'polash@gmail.com', 'polashArNai', 'Rajshahi', 5002)
res = license_authority.validate_license(polash.email, polash.license)
print('Valid License: ', res)

# driving test
polash.take_driving_test()

res = license_authority.validate_license(polash.email, polash.license)
print('Valid License: ', res)
'''

rider1 = Rider('rider1', 'rider1@gmail.com', 'rider1', randint(0, 100), 1000)
# print(dir(rider1))
rider2 = Rider('rider2', 'rider2@gmail.com', 'rider2', randint(0, 100), 2000)
rider3 = Rider('rider3', 'rider3@gmail.com', 'rider3', randint(0, 100), 4000)
rider4 = Rider('rider4', 'rider4@gmail.com', 'rider4', randint(0, 100), 2000)
rider5 = Rider('rider5', 'rider5@gmail.com', 'rider5', randint(0, 100), 4000)

for i in range(1, 100):
    driver1 = Driver(f'driver{i}', f'driver{i}@gmail.com',
                     'driver{i}', randint(0, 100), 5665)
    driver1.take_driving_test()
    driver1.register_a_vehicle(
        choice(['bike', 'car', 'cng']), randint(10000, 99999), 10)

# driver2 = Driver('driver2', 'driver2@gmail.com',
#                  'driver2', randint(0, 100), 5665)
# driver2.take_driving_test()
# driver2.register_a_vehicle('car', 2341, 10)

# driver3 = Driver('driver3', 'driver3@gmail.com',
#                  'driver3', randint(0, 100), 5665)
# driver3.take_driving_test()
# driver3.register_a_vehicle('car', 3412, 10)

# driver4 = Driver('driver4', 'driver4@gmail.com',
#                  'driver4', randint(0, 100), 5665)
# driver4.take_driving_test()
# driver4.register_a_vehicle('car', 4123, 10)

# get all available cars
# print(uber.get_available_cars())

# find a vehicle
uber.find_a_vehicle(rider1, choice(['bike', 'car', 'cng']), randint(1, 100))
uber.find_a_vehicle(rider2, choice(['bike', 'car', 'cng']), randint(1, 100))
uber.find_a_vehicle(rider3, choice(['bike', 'car', 'cng']), randint(1, 100))
uber.find_a_vehicle(rider4, choice(['bike', 'car', 'cng']), randint(1, 100))
uber.find_a_vehicle(rider5, choice(['bike', 'car', 'cng']), randint(1, 100))

# trip history of rider
print(rider1.get_trip_history())
