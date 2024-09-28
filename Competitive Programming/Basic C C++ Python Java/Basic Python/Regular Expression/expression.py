import re

pattern = r"color"
text = "My favourite color is Red. color is beautiful."
if re.match(pattern, "color is beautiful."):
    print("Matched")
else:
    print("Not matched")

if re.search(pattern, text):
    print("Matched")
else:
    print("Not matched")

print(re.findall(pattern, text))

match = re.search(pattern, text)
if match:
    print(match.start())
    print(match.end())
    print(match.span())
