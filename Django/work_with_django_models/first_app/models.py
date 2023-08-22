from django.db import models

# Create your models here.
class Student(models.Model):
    name = models.CharField(max_length=20)
    roll = models.IntegerField(primary_key=True)
    address = models.TextField()
    father_name = models.TextField(default='Atiq')
    
    def __str__(self):
        return self.name

# without using inheritance and abstract

# class StudentInfoModel(models.Model):
#     name = models.CharField(max_length=20)
#     roll = models.IntegerField()
#     payment = models.IntegerField()
#     city = models.CharField(max_length=20)
#     section = models.CharField(max_length=20)
    
# class TeacherInfoModel(models.Model):
#     name = models.CharField(max_length=20)
#     city = models.CharField(max_length=20)
#     salary = models.IntegerField()


# model inheritance and abstract base class
class CommonInfoClass(models.Model):
    name = models.CharField(max_length=20)
    city = models.CharField(max_length=20)
    class Meta:
        abstract = True

class StudentInfoModel(CommonInfoClass):
    roll = models.IntegerField()
    payment = models.IntegerField()
    section = models.CharField(max_length=20)
    
class TeacherInfoModel(CommonInfoClass):
    salary = models.IntegerField()
    
# multitable Inheritance
class EmployeeModel(models.Model):
    name = models.CharField(max_length=20)
    city = models.CharField(max_length=30)
    designation = models.CharField(max_length=40)
class ManagerModel(EmployeeModel):
    take_interview = models.BooleanField()
    hiring = models.BooleanField()
    
# proxy model 
class Friend(models.Model):
    school = models.CharField(max_length=40)
    section = models.CharField(max_length=10)
    attendence = models.BooleanField()
    hw = models.CharField(max_length=50)
    
class Me(Friend):
    class Meta:
        proxy = True
        ordering = ['id']

# one to one relationship 
class Person(models.Model):
    name = models.CharField(max_length=30)
    city = models.CharField(max_length=50)
    email = models.EmailField(max_length=30)
    def __str__(self) -> str:
        return self.name
    
class Passport(models.Model):
    user = models.OneToOneField(to=Person, on_delete=models.CASCADE)
    pass_number = models.IntegerField()
    page = models.IntegerField()
    validity = models.IntegerField()

# many to one relationship
class Post(models.Model):
    user = models.ForeignKey(Person, on_delete=models.SET_NULL, null=True)
    post_cap = models.CharField(max_length=50)
    post_details = models.CharField(max_length=100)
    
# many to many relationship
class Student1(models.Model):
    name = models.CharField(max_length=30)
    roll = models.IntegerField()
    class_name = models.CharField(max_length=10)
    def __str__(self) -> str:
        return self.name
    
class Teacher1(models.Model):
    student = models.ManyToManyField(Student1)
    name = models.CharField(max_length=30)
    subject = models.CharField(max_length=20)
    mobile = models.CharField(max_length=11)
    def student_list(self):
        return ",".join([str(i) for i in self.student.all()])