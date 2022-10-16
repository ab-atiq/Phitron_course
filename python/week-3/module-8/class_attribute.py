class Shop:
    cart = []

    def __init__(self, buyer):
        self.buyer = buyer

    def add_to_cart(self, product):
        self.cart.append(product)


person_1 = Shop("Ali khan")
person_1.add_to_cart("Phone")
print(person_1.cart)

person_2 = Shop("Abul khan")
person_2.add_to_cart("tShirt")
print(person_2.cart)
