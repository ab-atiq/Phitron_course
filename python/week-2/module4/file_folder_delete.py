import os

# file delete 
if os.path.exists("check.txt"):
    os.remove("check.txt")
else:
    print("File does not exists.")
    
# folder delete
if os.path.exists("new folder"):
    os.rmdir("new folder")
else:
    print("Folder does not exist.")