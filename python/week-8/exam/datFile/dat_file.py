file = open('words.dat', 'w')
word = input('Enter a word (enter empty string to quit): ')
while word != '':
    if word != "":
        file.write(word + '\n')
    word = input('Enter a word (enter empty string to quit): ')
file.close()

file = open('words.dat', 'r')
lines = file.readlines()
for idx, line in enumerate(lines):
    new_line = f"{idx+1}: {line}"
    print(new_line, end="")
file.close()
