"""  
Display Fibonacci series up to 10 terms

0  1  1  2  3  5  8  13  21  34
"""

n = int(input("How much you want to fibonacci series: "))


def fibo(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibo(n-1)+fibo(n-2)


for i in range(n):
    x = fibo(i)
    print(x, end=" ")
