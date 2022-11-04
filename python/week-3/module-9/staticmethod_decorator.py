class Shopping:
    value = 50  # class attribute

    def __init__(self, customer) -> None:
        self.customer = customer  # instance attribute
        self.total = 0
        self.items = []

    # we don't need to create class instance to use. we can use it as function. It does not contain self in method.
    # static method cannot access the class attributes (value) or instance attributes(total,customer,items).
    @staticmethod
    def multiply(x, y):
        return x*y

    # @staticmethod
    # def multiply(self,x, y):
    #     return self.value*x*y

    # inner class method for set total amount
    def add_to_total(self, amount):
        self.total += amount

    # though here has self, so we need to create instance object to use
    def add_to_cart(self, item, price, quantity):
        item_total_price = price*quantity
        # self.total += item_total_price
        self.add_to_total(item_total_price)
        self.items.append(item)

    def checkout(self):
        pass


# call static method using Class
ret_mul = Shopping.multiply(34, 2)
print(ret_mul)
# call static method using Objects
shop = Shopping("atiqur")
print(shop.multiply(2, 3))
# we can not use add_to_total method. Because it is not staticmethod.
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
