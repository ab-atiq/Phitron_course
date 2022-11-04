def outer_function():
    print("This is outer function...!!")
    def inner_function():
        print("This is inner function. That is present in outer function.")
    inner_function()

# outer_function()

# return a function from a function
def outer_function2():
    print("This is outer function...!!")
    def inner_function():
        print("This is inner function. That is present in outer function.")
    return inner_function

# outer_function2()

ret = outer_function2()
ret()

# short form of call outer and inner function
outer_function2()()