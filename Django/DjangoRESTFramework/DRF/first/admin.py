from django.contrib import admin
from .models import YourModel, StudentData, Course
# Register your models here.
admin.site.register(YourModel)
admin.site.register(StudentData)
admin.site.register(Course)