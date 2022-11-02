import pyjokes

while True:
    print("Do you want to hear a joke? Y/N: ", end=" ")
    s = input()
    if s == "Y":
        print(pyjokes.get_joke())
        print()
    else:
        break
