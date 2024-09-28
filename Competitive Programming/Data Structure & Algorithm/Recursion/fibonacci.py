def fib(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    return fib(n-1) + fib(n-2)

n = int(input("Enter nth fibonacci number: "))
print(f'{n}th fibonacci number is: {fib(n)}')