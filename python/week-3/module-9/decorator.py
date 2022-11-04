import math
import time

# this is decorator function
def timer(func):
    def inner(*args, **kwargs):
        print("Time Start")
        start = time.time()
        func(*args, **kwargs)
        end = time.time()
        print(f"Time End. Total time taken {end-start}")
    return inner

# decorator is use in function methods
@timer 
def get_factorial(n):
    fact = math.factorial(n)
    print(f"Factorial of {n} number is: {fact}")

# before use decorator @timer
# timer(get_factorial)(10)
timer(get_factorial(10))
print()

# after use decorator @timer above get_factorial.
get_factorial(5)
print()

# key words args (kwargs) use
get_factorial(n=6)

# performance check
get_factorial(100)