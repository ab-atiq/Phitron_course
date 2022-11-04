# inheritance
# DRY --> Do not Repeat Yourself
# base class will have only the common attributes and methods

class Device:
    def __init__(self, brand, price, color):
        self.brand = brand
        self.price = price
        self.color = color

    def re_sale(self):
        print('ready to sell again')


class Laptop(Device):  # inherit Device Class
    def __init__(self, brand, price, color, disc_size):
        # we have to use super() method to get all attribute from parent/super/base class.
        super().__init__(brand, price, color)
        self.disc_size = disc_size

    def run(self):
        print('running the laptop')

    # which work now working it can understand using representation dunder method.
    def __repr__(self) -> str:
        return f'Laptop {self.brand} : {self.price} : {self.color}'

    # if we want to discount price it is very hart to implement every method. if we use that function in Parent class, we can get that function using inheritance.
    def purchase(self, money, discount):
        if money < (self.price - self.price * discount/100):
            return 'No laptop for you'
        else:
            print('This device is for you')
            return money - self.price


class Phone:  # here inherit Device Class in Phone, then it will create hierarchical inheritance.
    def __init__(self, brand, price, color, camera, sim_num):
        # common property is added in Device class. we can inherit that property from Device class
        self.brand = brand
        self.price = price
        self.color = color

        self.camera = camera
        self.sim_num = sim_num

    def is_dual_sim(self):
        return self.sim_num > 1

    def purchase(self, money):
        if money < self.price:
            return 'No laptop for you'
        else:
            print('This device is for you')
            return money - self.price

    # which work now working it can understand using representation dunder method.
    def __repr__(self) -> str:
        return f'Phone {self.brand} : {self.price} : {self.color}'


class Watch:
    def __init__(self, brand, price, color, watch_type):
        self.brand = brand
        self.price = price
        self.color = color
        self.watch_type = watch_type

    def is_digital(self):
        return self.watch_type == 'digital'

    def purchase(self, money):
        if money < self.price:
            return 'No laptop for you'
        else:
            print('This device is for you')
            return money - self.price


class Manager:
    def __init__(self, name, salary, experience, designation):
        pass

    def withdraw_salary(self):
        pass

    def day_total_sales(self):
        pass

    def handle_customer_complain(self):
        pass


class SalesPerson:
    def __init__(self, name, salary, experience, designation, commission):
        pass

    def withdraw_salary(self):
        pass

    def handle_customer(self):
        pass


# here Laptop all arguments is used in Device parent class.
lenovo = Laptop('Lenovo', 42000, 'black', '500gb')
hp = Laptop('HP', 35000, 'silver', '250gb')
print(lenovo)
print(hp)


# here Phone all arguments is used in Phone constructor
oppo = Phone('Oppo', 15000, 'black', '15mp', 2)
samsung = Phone('samSung', 21000, 'silver', '12mp', 1)
print(samsung)
print(oppo)

# here get re_sale() method and brand property from Device Class by inheritance.
hp.re_sale()
print(hp.brand)
