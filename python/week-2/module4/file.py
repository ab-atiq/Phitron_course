# f = open("message.txt","rt") # open() function return a file object
f = open("I://Phitron/python/week-2/module4/message.txt","rt") # file is located in a different location
print(f.read())              # read() method for reading the content of the file
f = open("I://Phitron/python/week-2/module4/message.txt","rt") 
print(f.read(10))              # specify how many characters you want to return
f = open("I://Phitron/python/week-2/module4/message.txt","rt") 
print(f.readline())          # return one line by using the readline()
f = open("I://Phitron/python/week-2/module4/message.txt","rt") 
print(f.readlines())
f = open("I://Phitron/python/week-2/module4/message.txt","rt") 
for singleLine in f:  # looping through the lines of the file and read the whole file, line by line.
    print(singleLine)

f.close() # good practice to always close the file when you are done with it

# write a line in file
with open('message.txt','a') as fileWrite:
    fileWrite.write("My name is atiqur rahman.")

# read file as present in the file
with open('message.txt','r') as fileRead:
    txt = fileRead.read()
    print(txt)

# all single line show
with open("message.txt", "r") as allLineFile:
    for singleLine in allLineFile:
        print(singleLine, end="")

# all line in one line with space separated
with open('message.txt', 'r') as allLineFile:
    data = allLineFile.read().replace('\n', ' ') # replace new line with space
    print(data)
    
# all line in one line with space separated
file = open("message.txt", "r")
lst=file.readlines()
for line in lst:
    print(line.replace('\n'," "), end="")