# # Global scope
# str1 = "This is string 1"
# str2 = "This is string 2"
# print(str1)
# print(str2)

# def demo():
#     print(str2)  # here str2 can read but can't write
#     global str1  # here str1 is global scope, so here str1 can write
#     str1 = "Overriding str1"
#     print(str1)

# demo()
# print(str1)
# print(str2)


number = 0


def demo():
    # local scope
    number = 1
    print("The Number is:", number)


demo()


def outer_function():
    x = "local"

    def inner_function():
        nonlocal x
        x = "nonlocal"
        print("inner:", x)
    inner_function()
    print("outer:", x)


outer_function()
