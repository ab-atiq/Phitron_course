from random import randint


class BRTA:
    def __init__(self) -> None:
        self.__license = {}

    def take_driving_test(self, email):
        score = randint(0, 100)
        if score >= 33:
            # print("congratulations, you have passed.", score)
            license_number = randint(5000, 9999)
            self.__license[email] = license_number
            return license_number
        else:
            # print("Sorry, You failed", score)
            return False

    def validate_license(self, email, license):
        for key, value in self.__license.items():
            if key == email and value == license:
                return True
        return False
