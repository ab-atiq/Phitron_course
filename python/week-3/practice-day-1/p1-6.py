# Create a class with instance attributes.
# Use this code below to practice 2, 3, 4, 5 and 6:

class Vehicle:
    define_property = "Same always"

    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity


class Bus(Vehicle):
    def getter(self):
        return self.name, self.capacity

    def setter(self, name):
        self.name = name

    def __str__(self):
        return f'Vehicle({self.name}, {self.mileage}, {self.capacity})'


School_bus = Bus("School Volvo", 12, 50)

# Check the type of the object school_bus
print(type(School_bus))

# Check if School_bus is also an instance of the Vehicle class.
print(isinstance(School_bus, Vehicle))

# Define a property that must have the same value for every class instance (object)
object1 = Bus("object1", 3, 33)
object2 = Bus("object2", 4, 33)
print(object1.define_property)
print(object2.define_property)

# Write getter and setter methods for Vehicle class.
name, capacity = object1.getter()
print(name, capacity)
object2.setter("Setter use")
print(object2.name)

# Add an __str__ method to the code.
print(School_bus)
