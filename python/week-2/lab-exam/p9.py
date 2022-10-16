replace_with = ["chief", "thief", "superintendent", "sweeper", "married", "left", "tried", "died"]

s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."


convert_list_to_string = s.split(" ")


def create_new_string(list_str):
    for idx, element in enumerate(list_str):
        if element in replace_with:
            index = replace_with.index(element)
            list_str[idx] = replace_with[index+1]

    print(" ".join(list_str))


create_new_string(convert_list_to_string)
