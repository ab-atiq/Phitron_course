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

num = int(input("Enter number for patter: "))
for i in range(0, num):
    for j in range(0, i + 1):
        print("*", end=' ')
    print("\r")

for i in range(num, 0, -1):
    for j in range(0, i - 1):
        print("*", end=' ')
    print("\r")
