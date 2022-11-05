# Abstract Class
class Book:
    def __init__(self, name) -> None:
        self.name = name

    # if we call read method, then show an error. it is use instead of abstractmethod.
    def read(self):
        raise NotImplementedError

    def exercise(self):
        pass


class Physics (Book):
    def __init__(self, name) -> None:
        super().__init__(name)


topon = Physics('Shahjahan Topon rana Chowdhury')
# topon.read() # it will show NotImplementedError
topon.exercise()
