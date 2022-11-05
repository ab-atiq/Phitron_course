from abc import ABC, abstractmethod
# abstract base class
# abstract is use to enforce specific requirement, otherwise it will not work

# we have to use ABC base class to derived class.


class Animal(ABC):
    @abstractmethod
    def eat(self):
        pass

    @property
    @abstractmethod
    def name(self):
        pass

    @abstractmethod
    def move(self):
        print('moving around in the zoo')


class Monkey(Animal):
    def __init__(self):
        self.__name = 'monkey'

    def sing(self):
        print('monkey is signing')

    # name attribute must use because it is abstractmethod. Though it is property, @property decorator used.
    @property
    def name(self):
        return self.__name

    # setter method 
    @name.setter
    def name(self, value):
        self.__name = value

    # eat and move method inherit from animal class. Though above eat and move method in parent class use @abstractmethod, so we have to declare these method in child/derived class.
    def eat(self):
        print('eating banana')

    def move(self):
        print('hanging on the branches of the trees')
        # super class move method use
        super().move()


class Tiger(Animal):
    def eat(self):
        pass

    # def move(self):
    #     pass


layka = Monkey()
print(layka)
layka.eat()
layka.move()
# layka.name() #we can not get using call method, because here used property decorator.
layka.name = 'moonkey'
print(layka.name)

# we can not instantiate Tiger class because move() abstractMethod is missing.
# bag = Tiger()
