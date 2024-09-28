"""
*
**
***
****
"""

n = int(input("Enter number: "))
for x in range(n + 1):
    print(x * "*")
for x in range(n + 1):
    print((x * 2 - 1) * "*")
for x in range(n + 1):
    print((n - x) * " ", end="")
    print(x * "*")
