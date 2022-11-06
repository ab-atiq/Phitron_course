"""  
2. Write a program center_align.py to centre align all lines in the given file.
Example output: 
I am sure that the shells are seashore shells. 
So if she sells seashells on the seashore, 
The shells that she sells are seashells, 
I am sure She sells seashells on the seashore;
"""
str1 = "I am sure that the shells are seashore shells. "
str2 = "So if she sells seashells on the seashore, "
str3 = "The shells that she sells are seashells, "
str4 = "I am sure She sells seashells on the seashore;"

str1 = str1.center(100)
str2 = str2.center(100)
str3 = str3.center(100)
str4 = str4.center(100)

print(str1)
print(str2)
print(str3)
print(str4)
