def do_something(x, y):
    print(f'x: {x} y: {y}')


do_something(13, 64)
do_something("Abul", "Bashar")
print()

# function parameter is now a function
def do_something2(work_fun):
    print("Start the work")
    print(work_fun)
    work_fun()
    print("Done the work")


def work():
    print("I am working right now!!!")


do_something2(work)
