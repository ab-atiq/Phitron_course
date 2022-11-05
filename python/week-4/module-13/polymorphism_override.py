# poly => many
# morph => form

# print(2 + 8)
# print('Hello' + 'Bondhu')
# print([45,68] + [12, 87])

# overriding
class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        print('animal making some sound')


class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print('meow meow')


class Dog(Animal):
    def __init__(self, name):
        Animal.__init__(self, name)

    def make_sound(self):
        print('Bark Bark')


class Horse(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print('ney ney')


don = Cat('don')
# don.make_sound() # make_sound() override animal class same method.

shepard = Dog('German Shepard')
# shepard.make_sound()

manik = Horse('Manik Roton')
# manik.make_sound()

don2 = Dog('Asol Don')
# don2.make_sound()

animals = [don, shepard, manik, don2]
for animal in animals:
    animal.make_sound()
