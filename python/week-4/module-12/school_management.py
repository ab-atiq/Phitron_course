import time


class School:
    # constructor
    def __init__(self, name, address, principal=''):
        self.name = name
        self.address = address
        self.principal = principal
        self.grades = []

    # we can create a new class from a class
    def add_grade(self, name, teacher):
        new_grade = Grade(name, teacher) # here store the string which return from __repr__ dunder method.
        self.grades.append(new_grade)

    def remove_grade(self, name):
        idx = 0
        for i, grade in enumerate(self.grades):
            if grade.name == name:  # find which index of element we want to delete.
                idx = i
        del self.grades[idx] # when this line will work with delete, show return string from __del__ dunder method.


class Grade:  # We can use Class instead of Grade.
    # constructor
    def __init__(self, name, teacher):
        self.students = []
        self.name = name
        self.teacher = teacher

    def __repr__(self) -> str:
        return f'{self.name} with teacher {self.teacher}'

    # destructor = we can delete class from this class
    def __del__(self):
        print(f'Deleting {self.name} with teacher {self.teacher}')


oxford = School('Oxford Kid Academy', 'Mirpur', 'Obayed Alam')
oxford.add_grade('class 3', 'Osman Gani')
oxford.add_grade('class 5', 'Nazma Mam')
oxford.add_grade('class 8', 'Razib sir')

print(oxford.grades)
oxford.remove_grade('class 5')
print(oxford.grades)

print('My code running is done')
time.sleep(10)

# after 10 sec sleep we will see that another two grades are deleting. Thats reason is, when program execution complete then all file will remove from memory(garbage collection).
