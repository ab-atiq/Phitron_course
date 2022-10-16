with open('message.txt','a') as fileWrite:
    fileWrite.write("My name is atiqur rahman.")

with open('message.txt','r') as fileRead:
    txt = fileRead.read()
    print(txt)