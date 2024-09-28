def printSum(n):
    if n==0:
        # n also right
        return 0 
    return n + printSum(n-1)

n = int(input("Enter a number: "))
print("Sum is: ",printSum(n))