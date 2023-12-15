from django.contrib import admin
from .models import Student, StudentInfoModel, TeacherInfoModel, EmployeeModel, ManagerModel, Friend, Me, Person, Passport, Post, Student1, Teacher1

# Register your models here.
admin.site.register(Student)
admin.site.register(StudentInfoModel)
admin.site.register(TeacherInfoModel)
# admin.site.register(EmployeeModel)
# admin.site.register(ManagerModel)

# multitable Inheritance
@admin.register(EmployeeModel)
class EmployeeModelAdmin(admin.ModelAdmin):
    list_display = ['id','name','city','designation']

@admin.register(ManagerModel)
class ManagerModelAdmin(admin.ModelAdmin):
    list_display = ['id','name','city','designation','take_interview','hiring']
    
# proxy model 
@admin.register(Friend)
class FriendModelAdmin(admin.ModelAdmin):
    list_display = ['id','school','section','attendence','hw']

@admin.register(Me)
class MeModelAdmin(admin.ModelAdmin):
    list_display = ['id','school','section','attendence','hw']
    
# one to one relationship
@admin.register(Person)
class PersonModelAdmin(admin.ModelAdmin):
    list_display = ['id','name','city','email']

@admin.register(Passport)
class PassportModelAdmin(admin.ModelAdmin):
    list_display = ['id','user','pass_number','page','validity']
    
# many to one relationship
@admin.register(Post)
class PostModelAdmin(admin.ModelAdmin):
    list_display = ['id','user','post_cap','post_details']

# many to many relationship
@admin.register(Student1)
class Student1ModelAdmin(admin.ModelAdmin):
    list_display = ['id','name','roll','class_name']
    
@admin.register(Teacher1)
class Teacher1ModelAdmin(admin.ModelAdmin):
    list_display = ['id','name','subject','student_list','mobile']