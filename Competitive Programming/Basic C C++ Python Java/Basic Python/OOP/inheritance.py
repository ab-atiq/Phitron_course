# parent or base or super class
class Phone:
    def call(self):
        print("Can call")

    def message(self):
        print("Can message each other")


# chield or sub or derived class
'''
class Samsung:
    def call(self):
        print("Can call")

    def message(self):
        print("Can message each other")

    def camera(self):
        print("Can take photo")
'''


class Samsung(Phone):
    # here derived or inherit phone class in samsung class

    def camera(self):
        print("Can take photo")


p = Phone()
p.call()
p.message()

s = Samsung()
s.call()
s.message()
s.camera()
