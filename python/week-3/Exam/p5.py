"""  
Write a python program to read student_name and mark from keyboard and store the data in a text file with an unique student_id .
"""
id = 190000
while True:
    name = input("Name: ")
    mark = input("Mark: ")
    
    if (name == '') and (mark == ''):
        break

    id += 1
    str = f'{name} {mark} {id}\n'
    file = open("student.txt", 'at')
    file.write(str)
    file.close()
