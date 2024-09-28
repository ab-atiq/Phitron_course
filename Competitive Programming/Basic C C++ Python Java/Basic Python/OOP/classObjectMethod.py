class Student:  # class
    roll = ""
    gpa = ""

    def set_roll_gpa(self, r, g):  # method in class
        self.roll = r
        self.gpa = g

    def print_object(self):
        print(f"Roll: {self.roll}, GPA: {self.gpa}")  # method in class


rahim = Student()  # object
rahim.roll = 1905015
rahim.gpa = 3.58
print(f"Roll: {rahim.roll}, GPA: {rahim.gpa}")

karim = Student()
karim.roll = 1905105
karim.gpa = 3.28
print(f"Roll: {karim.roll}, GPA: {karim.gpa}")

# set roll gpa and display these using method
atiq = Student()
atiq.set_roll_gpa(1905005, 3.21)
atiq.print_object()

rakib = Student()
rakib.set_roll_gpa(1905007, 3.41)
rakib.print_object()

