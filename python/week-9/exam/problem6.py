n = int(input("Enter n= "))
for i in range(1, n+1):
    for j in range(2, i+1):
        print(j, end="")
    print("1", end="")
    for k in range(i+1, n+1):
        print(k, end="")
    print()
