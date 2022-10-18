class User:
    def __init__(self, name, password, phone) -> None:
        self.name = name
        # create attribute as private
        self.__password = password
        self.__phone = phone

    # private method
    def __get_password(self):
        print(self.password)

    def user_login(self, name, password):
        if (name == self.name and password == self.__password):
            return True
        return False


abul = User("Abul Bashar", "ABC1234", '01234567989')
# print(abul.__password)
# print(abul.__phone)
# abul.__get_password()

ret = abul.user_login("Abul Bashar", "ABC1234")
print(ret)
