# encrypt the following code so that no one can get your strategy. (here follow the next character of any alphabets)

# data = "firebaby"
data = 'az'
print(data)

shift = 1
encrypt = ''

for char in data:
    # print(chr(((ord(char)+shift-97) % 26)+97))
    encrypt += chr(((ord(char)+shift-97) % 26)+97) # 26 modulus use to take character from a to z.
print(encrypt)

decrypt = ''
for c in encrypt:
    char = chr(ord(c)-shift)
    if char >= 'a' and char <= 'z':
        print(char, end="")
    else:
        print(chr(ord(char)+26), end="") # this line only for a. convert a to z.
