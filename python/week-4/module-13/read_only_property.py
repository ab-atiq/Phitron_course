class Student:
    def __init__(self, name, id, marks) -> None:
        self._name = name # protected
        self.__id = id # private
        self.marks = marks # public

    # read only -> we can read this property But we can not set student id from object call.
    @property
    def student_id(self):
        return self.__id

    @property
    def name(self):
        return self._name

    # when we want to delete attribute from class, we have create first same name property.
    # if delete one time, then we can not access another time.
    @name.deleter
    def name(self):
        del self._name


chowdhury = Student('choto chowdhury', 15, 55)

print(chowdhury.student_id)
# chowdhury.student_id = 77 # if we want to set student_id then we have to set @property.setter in class.
print(chowdhury.student_id)

print(chowdhury.name)
del chowdhury.name
# print(chowdhury.name)
print(dir(chowdhury))
