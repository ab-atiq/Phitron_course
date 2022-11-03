def add(n1, n2):
    sum = n1+n2
    print(f"Number 1: {n1}, Number 2: {n2}")
    return sum


result = add(n2=15, n1=35)  # give parameter your own wish
print(result)


def multiply(num1, num2=1):  # default value set in function parameter
    result = num1*num2
    return result


mul_output = multiply(15)
print(mul_output)


def multiply2(*numbers):  # many argument pass in function parameter
    print(numbers)
    mul = 1
    for n in numbers:
        mul *= n
    return mul


many_args_multiply = multiply2(1, 2, 3, 4, 5)
print(many_args_multiply)


# first two number assign as num1 and num2. other all additional numbers will store in tuple.
def add2(num1, num2, *numbers):
    print(num1, num2)
    print(numbers)


add2(10, 20, 25, 30, 50)

# set values of object (geek for geeks)


class car():  # defining car class
    def __init__(self, *args):  # args receives unlimited no. of arguments as an array
        self.speed = args[0]  # access args index like array does
        self.color = args[1]

# creating objects of car class


audi = car(200, 'red')
bmw = car(250, 'black')
mb = car(190, 'white')

print(audi.color)
print(bmw.speed)
