# difference between staticmethod and classmethod

class Shopping:
    mall = 'Basundara shopping complex'  # class attribute
    value = 50

    def __init__(self, customer) -> None:
        self.customer = customer  # instance attribute
        self.total = 0
        self.items = []

    def opening_hour(cls, day):
        return cls.mall

    # we don't need to create class instance to use. it has a cls parameter that will access this class attribute, not instance attribute.
    # It can be used to declare a factory method that returns objects of the class.
    @classmethod
    def multiply(cls, x, y):
        return cls.value*x*y

    @classmethod
    def getObject(cls):
        # here parameter will be same as __init__ parameter.
        return cls('Steve')

    # inner class method for set total amount
    def add_to_total(self, amount):
        self.total += amount

    # though here has self, so we need to create instance object to use
    def add_to_cart(self, item, price, quantity):
        item_total_price = price*quantity
        # self.total += item_total_price
        self.add_to_cart(item_total_price)
        self.items.append(item)

    def checkout(self):
        pass


# call class method using Class
mul = Shopping.multiply(1, 2)
print(mul)
# call static method using Object
shop = Shopping("Abul")
print(shop.multiply(3, 5))

# class method as factory method
shop2 = Shopping.getObject()
print(shop2.customer)


class Student:

    def __init__(self, name, age):
        self.name = name  # instance attribute
        self.age = age  # instance attribute

    @classmethod
    # It can be used to declare a factory method that returns objects of the class.
    def getobject(cls):
        # here parameter will be same as __init__ parameter.
        return cls('Steve', 25)


std = Student.getobject()
print(std.name)
print(std.age)
