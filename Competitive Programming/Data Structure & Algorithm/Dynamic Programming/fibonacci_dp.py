fibArray = [0,1]
def fib(n):
    if n<len(fibArray):
        return fibArray[n]
    fibArray.append(fib(n-1)+fib(n-2))
    return fibArray[n]

print(fib(9))