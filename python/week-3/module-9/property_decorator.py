class User:
    def __init__(self, f_name, s_name) -> None:
        self.first = f_name
        self.second = s_name
        self.email = f'{f_name}.{s_name}@gmail.com'

    # use as a method
    # def full_name(self):
    #     return f'{self.first} {self.second}'

    @property  # class method use as a property
    def full_name(self):
        return f'{self.first} {self.second}'

    # use full name property as setter property
    @full_name.setter 
    def full_name(self, value):
        # self.first = value.split(' ')[0]
        # self.second = value.split(' ')[1]
        first,second = value.split(' ')
        self.first=first
        self.second=second
        self.email=f'{first}.{second}.user@gmail.com'

    # delete property 
    @full_name.deleter
    def full_name(self):
        del self.first
        del self.second
    
    def get_email(self):
        return self.email


atiq = User('Atiqur', 'Rahman')
print(atiq.first)
print(atiq.second)
print(atiq.email)
email = atiq.get_email()
print(email)

# ret_ful_name=atiq.full_name()
# print(ret_ful_name)

print(atiq.full_name)

atiq.full_name = 'Abul Bashar'
print(atiq.full_name)
print(atiq.email)

# del atiq.full_name
# print(atiq.full_name)
# print(atiq.first)
# print(atiq.second)