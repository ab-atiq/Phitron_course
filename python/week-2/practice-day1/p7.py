"""  We know how to check if the key exists in a dictionary. Sometimes it is required to check if the given value is present.
Write a Python program to check if value 100 exists in the following dictionary. If it is present print “present” otherwise print “not present”

Sample Dictionary:
sample_dict = {'a': 100, 'b': 200, 'c': 300}

Expected Output:
present
"""
sample_dict = {'a': 500, 'b': 200, 'c': 300}
exist = False

for k in sample_dict:
    if sample_dict[k] == 100:
        exist = True

if exist:
    print('Present')
else:
    print("Not Present")

# short 
if 200 in sample_dict.values():
    print("Present 200 value in dictionary")
else:
    print("Not present 200 value in dictionary")