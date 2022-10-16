# clean the data and get a string output 'a e i o u'
data = "aNtEriOur\n\t>>"
data = data.lower()
new_data = ""
for char in data:
    if (char == 'a') or (char == 'e') or (char == 'i') or (char == 'o') or (char == 'u'):
        new_data += char+"_"
new_data = new_data[:-1]
print(new_data)
