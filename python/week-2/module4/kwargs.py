def name(f_name, l_name):
    return f"First name: {f_name}, Last name: {l_name}"


# set parameter your own wish
f_l_name = name(l_name="Atiqur", f_name="Rahman")
print(f_l_name)


def all_names(**kwargs):  # kwargs (key value pair) use
    print(kwargs)  # print the dictionary


all_names(first_name="Abul", last_name="Atiq", title="Pramanik")


def name_mixed(first, second, **others):  # single name and kwargs use
    print(first, second, others)


name_mixed("Rony", "islam", title="Dr.", edu="P.H.D")


def all_types(name, *args, **kargs):  # use both args and kwargs
    print(name, args, kargs)


all_types("Rakib", "Hasan", "Monir", "Alif",
          good="Atiq", better="Rony", best="No one")


def loop_all_types(name, *args, **kwargs):  # use both args and kwargs
    print(name)
    for n in args:
        print(n)
    print(kwargs)
    for key, value in kwargs.items():  # key and value print, first we have to make kwargs as item
        print(key, value)


loop_all_types("Rakib", "Hasan", "Monir", "Alif",
               good="Atiq", better="Rony", best="No one")


# geek for geeks
def myFun(arg1, arg2, arg3):
    print("arg1:", arg1)
    print("arg2:", arg2)
    print("arg3:", arg3)


args = ("Geeks", "for", "Geeks")
myFun(*args)

kwargs = {"arg1": "Geeks", "arg2": "for", "arg3": "Geeks"}
myFun(**kwargs)


# set value in object (geek for geeks)


class car():  # defining car class
    def __init__(self, **kwargs):  # args receives unlimited no. of arguments as an array
        self.speed = kwargs['s']  # access args index like array does
        self.color = kwargs['c']

# creating objects of car class


audi = car(s=200, c='red')
bmw = car(s=250, c='black')
mb = car(s=190, c='white')

print(audi.color)
print(bmw.speed)
