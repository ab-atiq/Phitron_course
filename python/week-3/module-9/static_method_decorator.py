class Shopping:
    def __init__(self, customer) -> None:
        self.customer = customer
        self.total = 0
        self.items = []

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


ret_mul = Shopping.multiply(34, 2)
print(ret_mul)

# we can not use add_to_total method.
# Shopping.add_to_total(654)

# if we want we first need to create an instance of class
my_shopping = Shopping('Atiqur')
my_shopping.add_to_total(500)
print(my_shopping.total)
my_shopping.add_to_total(400)
print(my_shopping.total)

# we also can use multiply method to create instance
result = my_shopping.multiply(15, 5)
print(result)
