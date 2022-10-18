# difference between staticmethod and classmethod

class Shopping:
    mall = 'Basundara shopping complex'

    def __init__(self, customer) -> None:
        self.customer = customer
        self.total = 0
        self.items = []

    def opening_hour(cls, day):
        return cls.mall

    # we don't need to create class instance to use
    @staticmethod
    def multiply(x, y):
        return x*y

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


# use class method from any website