"""  
Write a program to display all prime numbers within a range. You will be given two integers l and r . You have to print all the prime numbers present in the given range l and r.

Input : 25 50

Output :
29
31
37
41
43
47
"""
print("Enter range for prime number: ")
l = int(input())
r = int(input())

for n in range(l, r+1):
    # print(n)
    prime = True
    for d in range(2, int((n/2)+1)):
        if n % d == 0:
            prime = False
    if prime == True:
        print(n)
