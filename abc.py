def lengthOfLastWord(s):
    s = " ".join(s.split())
    return len(s.split()[-1])

print(lengthOfLastWord("Hello World    "))