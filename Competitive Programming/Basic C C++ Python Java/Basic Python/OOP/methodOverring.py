class Phone:
    def __init__(self):
        print("I am phone class")


class IPhone(Phone):
    # pass # default Phone parent class constructor get from here
    def __init__(self):  # it will override Phone parent class default constructor
        super(IPhone, self).__init__()  # it can use Phone parent class default constructor
        print("I am IPhone class")


i = IPhone()
print(issubclass(IPhone, Phone))
