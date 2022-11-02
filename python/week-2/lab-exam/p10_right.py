def create_new_string(s, a):
    s = s.replace(',', '')
    s = s.replace('.', '')
    lst = s.split(" ")
    ans = ''
    for i, word in enumerate(a):
        w = ''
        for j, val in enumerate(lst):
            if word.lower() == val.lower():
                w = lst[j+1]
        ans += w+' '
    return ans


a = ['oh', 'Emelia', 'to']
s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."
f = open("out.txt", "w")
new_string = create_new_string(s, a)
f.write(new_string)
f.close()
