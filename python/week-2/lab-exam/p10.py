"""  
Given a string ‘s’ you need to find the words that are in list ‘a’ and use the next words on string ‘s’ to create a new string. Save it inside a file called ‘out.txt’. Remember to close the file after writing.

Write a function named create_new_string() and write your code inside this function.

a = ['oh', 'Emelia', 'to']

s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

output = "I love Bangladesh" (inside a file)


"""

import re
a = ['oh', 'Emelia', 'to']

s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

list_s = re.split(', | ', s)
# print(list_s)


def create_new_string(str_list):
    emt_lst = []
    for find_word in a:
        for idx, word in enumerate(str_list):
            if find_word.lower() == word.lower():
                emt_lst.append(str_list[idx+1])
    del emt_lst[2]
    return ' '.join(emt_lst)


ret_string = create_new_string(list_s)
print(ret_string)
