def name(f_name, l_name):
    return f"First name: {f_name}, Last name: {l_name}"


# set parameter your own wish
f_l_name = name(l_name="Atiqur", f_name="Rahman")
print(f_l_name)


def all_names(**kargs):  # kargs (key value pair) use
    print(kargs)  # print the dictionary


all_names(first_name="Abul", last_name="Atiq", title="Pramanik")


def name_mixed(first, second, **others):  # single name and kargs use
    print(first, second, others)


name_mixed("Rony", "islam", title="Dr.", edu="P.H.D")


def all_types(name, *args, **kargs):  # use both args and kargs
    print(name, args, kargs)


all_types("Rakib", "Hasan", "Monir", "Alif",
          good="Atiq", better="Rony", best="No one")


def loop_all_types(name, *args, **kargs):  # use both args and kargs
    print(name)
    for n in args:
        print(n)
    print(kargs)
    for key, value in kargs.items():  # key and value print, first we have to make kargs as item
        print(key, value)


loop_all_types("Rakib", "Hasan", "Monir", "Alif",
               good="Atiq", better="Rony", best="No one")
