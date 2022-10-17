class Shopper:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        self.cart.append({'item': item, 'price': price, 'quantity': quantity})

    def checkout(self, amount):
        price = 0
        for item in self.cart:
            price += item['price']*item['quantity']
        if price > amount:
            return f'your money is sort. please, give more money {price-amount}'
        elif price < amount:
            return f'your money is high. please, give take back money {amount-price}'
        else:
            return "Take your product"


shop = Shopper("Abul Bashar")
shop.add_to_cart('tShirt', 300, 5)
shop.add_to_cart('pant', 1400, 1)
shop.add_to_cart('shoes', 800, 2)
print(shop.cart)
reply = shop.checkout(5500)
print(reply)
