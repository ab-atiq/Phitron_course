class Phone:
    # class attribute
    manufactured = 'china'

    # default constructor
    def __init__(self, brand, price, color):
        # method attribute
        self.brand = brand
        self.price = price
        self.color = color

    # method in class
    def send_sms(self, num, text):
        sms = f'sending: {text} to: {num}'
        return sms


my_phone = Phone("Oppo", 23000, "Green")
her_phone = Phone("iPhone", 83000, "Golden")
dad_phone = Phone("Nokia", 1500, "Black")

print(my_phone.brand, my_phone.price, my_phone.color, my_phone.manufactured)
print(her_phone.brand, her_phone.price,
      her_phone.color, her_phone.manufactured)
print(dad_phone.brand, dad_phone.price,
      dad_phone.color, dad_phone.manufactured)
