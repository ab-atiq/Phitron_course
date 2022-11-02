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
