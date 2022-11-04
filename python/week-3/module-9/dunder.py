# dunder magic method
# special method

class Person:
    def __init__(self, name, age, money, height=65) -> None:
        self.name = name
        self.age = age
        self.money = money
        self.height = height

    def __call__(self):
        print(
            f'This is {self.name}, I am {self.age} years old and I have {self.money}')

    def __repr__(self) -> str:
        return "Print our string object"

    def __eq__(self, __o: object) -> bool:
        return self.age == __o.age

    def __len__(self):
        return self.height

    def __add__(self, other):
        # return self.money+other.money
        # return self.age+other.age
        # return self.name+other.name
        return [self.name, self.age, self.money, other.name, other.age, other.money]


person1 = Person("Abul", 22, 400, 102)
person2 = Person("Bashar", 23, 500)

# default address return from object, but when use __repr__() then we can see return string from __repr__.
print(person1)
print(person2)

# which property will addition that declare in class with __add__() method.
print(person1 + person2)

# before create __call__ dunder method we can not get any return or print to call an objects
person1()

# here is compare two person age is equal or not
print(person1 == person2)

# objects len identify, here output will height of the objects
print(len(person1))
