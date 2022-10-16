# 1. print out odd numbers between 13 to 39

num = 13
print("Use while loop: ")
while num <= 39:
    if num % 2 != 0:
        print(num)
    num += 1

# 2. use for looop to print numbers between 13 to 39 using and range
print("Use for loop: ")
for num in range(13, 40):
    if num % 2 != 0:
        print(num)

# 3. print out 20 to 1 using while loop (reverse way)
num = 20
print("Reverse print from 20 to 1: ")
while num >= 1:
    print(num)
    num -= 1
