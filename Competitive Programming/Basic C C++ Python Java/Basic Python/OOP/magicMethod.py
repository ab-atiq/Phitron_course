class Bike:
    def __init__(self, n, c):
        self.name = n
        self.color = c

    def __eq__(self, other):
        return self.name == other.name and self.color == other.color

    def __str__(self):
        return (f"Name: {self.name}, Color: {self.color}")

    def display(self):
        print(f"Name: {self.name}, Color: {self.color}")


bike1 = Bike("Yamaha R15", "Blue")
bike2 = Bike("Yamaha FZ", "Red")
print(str(bike1))
print(bike1 == bike2)

bike3 = Bike("Yamaha R15", "Blue")
bike4 = Bike("Yamaha R15", "Blue")
print(bike4 == bike3)
