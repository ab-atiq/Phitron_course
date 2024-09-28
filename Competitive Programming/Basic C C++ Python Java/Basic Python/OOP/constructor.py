class Student:  # class
    roll = ""
    gpa = ""

    def __init__(self, rl, ga):  # default constructor
        self.roll = rl
        self.gpa = ga
        print(f"Roll: {self.roll}, GPA: {self.gpa}")

    def printInfo(self):
        print(f"Roll: {self.roll}, GPA: {self.gpa}")


# set roll gpa in class using default constructor
rony = Student(1905037, 3.31)
print(f"Roll: {rony.roll}, GPA: {rony.gpa}")
rony.printInfo()

sabuj = Student(1905040, 3.20)
print(f"Roll: {sabuj.roll}, GPA: {sabuj.gpa}")
sabuj.printInfo()
