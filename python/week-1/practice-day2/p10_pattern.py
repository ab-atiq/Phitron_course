"""  
Write a program to print the following star pattern using the for loop
Input : 5
Output :
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
*
"""

num = int(input("Enter number for pattern: "))
for i in range(0, num):
    for j in range(0, i + 1):
        print("*", end=' ')
    print()

for i in range(num, 0, -1): # reverse for loop
    for j in range(0, i - 1):
        print("*", end=' ')
    print("")
