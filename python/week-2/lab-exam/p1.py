l = ["This", "is", "very", "fantastic"]


def create_string(list):
    result_string = ""
    for word in list:
        result_string += word + " "
    return result_string


print(create_string(l))
