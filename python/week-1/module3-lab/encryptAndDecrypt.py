# encrypt the following code so that no one can get your strategy. (here follow the next character of any alphabets)

data = "firebaby"
# data = 'az'
print(data)

shift = 1
output = ''

for char in data:
    # print(chr(((ord(char)+shift-97) % 26)+97))
    output += chr(((ord(char)+shift-97) % 26)+97)
print(output)

re_output = ''
for c in output:
    char = chr(ord(c)-shift)
    if char >= 'a' and char <= 'z':
        print(char, end="")
    else:
        print(chr(ord(char)+26), end="")
