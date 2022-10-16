def clean_string(text):
    output = ""
    for c in text:
        if (c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'):
            output += c
    return output


s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)
