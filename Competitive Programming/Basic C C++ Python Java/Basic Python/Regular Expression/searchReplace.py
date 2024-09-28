import re

pattern = "colour"
text1 = "My favourite colour is Red. colour is beautiful. colour is false in programming text"
text2 = re.sub(pattern, "color", text1)
print(text2)
text3 = re.sub(pattern, "color", text1, count=1)
print(text3)
text4 = re.sub(pattern, "color", text1, count=3)
print(text4)
