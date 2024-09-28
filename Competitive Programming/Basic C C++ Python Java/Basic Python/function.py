def add(x, y):
    sum = x + y
    print(sum)


def sub(x, y):
    s = x - y
    return s


def addition(x, y, z):
    sum = x + y + z
    print(sum)


def additionXArguments(*numbers):
    print(numbers)
    sum = 0
    for num in numbers:
        sum += num
    print(sum)


def message():
    print("No parameter get this function")


add(20, 40)

# return from function
ret = sub(20, 40)
print(ret)

addition(20, 40, 60)
# xx arguments
additionXArguments(20, 40, 60, 80, 100)

# set function in new variable
newMessage = message
newMessage()


# function use
def student(id, name, cgpa):
    print(id, name, cgpa)


student(1905004, "Atiqur Rahman", 3.21)
student(1905001, "Tarek jaman labu", 3.5)
student(1905004, "sajib kumar", 3.58)


# x args
def student(*info):
    print("Information show using x arguments: ")
    print(info)


student(1905004, "Atiqur Rahman", 3.21)
student(1905001, "Tarek jaman labu", 3.5)
student(1905004, "sajib kumar", 3.58)


# xxargs use like key pairs and dictionary

def preXXargs(id,name):
    print("Pre xx arg: ",id,name)


preXXargs(10101, "Atiqur Rahman")
preXXargs(id=101, name="Atiqur")

def xxargs(**details):
    print(details)
    print(details["id"])
    print(details["name"])


xxargs(id=101, name="Atiqur")
