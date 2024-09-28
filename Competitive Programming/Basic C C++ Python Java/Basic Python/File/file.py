file = open("file.txt", "r+")  # r use read, w use write , r+ use for read and write, a use for append new line in
# txt file
print(file.readable())
print(file.writable())
print(file)  # it is not possible to read file data
# print(file.readline()) # if do this line we can not re-read that first line
# print(file.readlines()) # if do this line we can not re-read all lines
# print(file.readlines()[1])  # If do this line we can not re-read second line

# firstLine=file.readline()
# print(firstLine)
# secondLine=file.readlines()[2]
# print(secondLine)

# for line in file: # show all file information line by line
#     print(line)

text = file.read()
print(text)
size = len(text)
print(size)

# append file use
file2=open("file2.txt","a")
file2.write("\nNew man is added from file write append function")

# write file use
file3=open("file3.txt","w") # if file is not found then it will create then remove all data then add new data
file3.write("New man is added from file write append function\n")

file.close()
