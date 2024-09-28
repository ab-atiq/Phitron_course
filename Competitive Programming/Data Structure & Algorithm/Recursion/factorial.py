def fac(n):
    if n<=1:
        return 1
    return n*fac(n-1)

n=int(input("Enter number for factorial calculation: "))
print("Factorial is: ",fac(n))

