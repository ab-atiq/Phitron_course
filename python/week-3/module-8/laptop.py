class Laptop:
    def __init__(self, brand, age) -> None:
        self.brand = brand
        self.age = age

    def increase_age(self, age=1):
        # self.age = 100
        self.last_age = 50
        self.age += age

    def repair(self, life_increase=-5):
        # call class method from another method
        self.increase_age(life_increase)


laptop = Laptop("Dell", 5)
laptop.increase_age()
print(laptop.age)
# print(laptop.last_age)

laptop.age = 34
laptop.increase_age()
laptop.increase_age()
print(laptop.age)
# print(laptop.last_age)

laptop.repair()
print(laptop.age)

# print all attribute of class
print(laptop.__dict__)
