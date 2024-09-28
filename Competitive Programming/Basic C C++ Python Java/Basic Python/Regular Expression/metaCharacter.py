import re

pattern = r"colo..r" # number of . can miss in string. can not miss above.
if re.match(pattern, "colourr"):
    print("Matched")
else:
    print("Not matched")

pattern1 = r"^colo..r$" # first will start colo and last will finish r
if re.match(pattern1, "coloaar"):
    print("Matched")
else:
    print("Not matched")

pattern2 = r"co+" # 0 or 1
if re.match(pattern2, "color"):
    print("Matched")
else:
    print("Not matched")

pattern3 = r"co*" # 1 or more
if re.match(pattern3, "color"):
    print("Matched")
else:
    print("Not matched")

pattern4 = r"co-?lor" # we can give - or not. ? means 0 or 1
if re.match(pattern4, "color"):
    print("Matched")
else:
    print("Not matched")

pattern5 = r"col{1,2}" # col can take 1 or 2 times. not more than 2.
if re.match(pattern5, "color"):
    print("Matched")
else:
    print("Not matched")

pattern6 = r"[A-Z][a-z][0-9]" # first letter have A-Z, second letter have a-z, third letter have 0-9
if re.match(pattern6, "Co9lor"):
    print("Matched")
else:
    print("Not matched")
