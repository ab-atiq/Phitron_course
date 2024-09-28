# sum of number from string
n = input("Enter a string with only number: ")  # 10 20 30 40 50
list = n.split()  # [ 10,20,30,40,50]
sum = 0
for num in list:
    sum += int(num)
print("Sum of string number is: ", sum)

# total digit, letter, word find from string
digitOfString = 0
letterOfString = 0
wordOfString = 0
userString = input("Enter a string to find digit, letter, word: ")
for x in userString:
    l = x.lower()
    if l >= 'a' and l <= 'z':
        letterOfString += 1
    elif l >= '0' and l <= '9':
        digitOfString += 1
    elif l == " ":
        wordOfString += 1
print("Letter of the String: ", letterOfString)
print("Digit of the String: ", digitOfString)
print("Word of the String: ", wordOfString+1)
