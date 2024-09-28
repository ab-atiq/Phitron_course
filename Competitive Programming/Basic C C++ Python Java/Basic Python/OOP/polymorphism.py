# Builtin polymorphic function

print(len("Atiqur Rahman"))
print(len([10, 20, 30, 40, 50]))


# user defined polymorphic function
def add(x, y, z=0):
    return x + y + z


print(add(10, 25))
print(add(10, 25, 35))
