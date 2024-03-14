from django.contrib import admin
from GS_Serializer.models import StudentModel
# Register your models here.

@admin.register(StudentModel)
class StudentAdmin(admin.ModelAdmin):
    list_display = ["id", "name", "roll", "city"]
    ordering = ["id"]