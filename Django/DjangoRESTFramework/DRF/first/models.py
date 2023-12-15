from django.db import models

class YourModel(models.Model):
    # Your model fields go here
    title = models.CharField(max_length=255)
    content = models.TextField()

    def __str__(self):
        return self.title


class StudentData(models.Model):
    id = models.IntegerField(primary_key=True)
    name = models.CharField(max_length=255)
    roll = models.IntegerField()

    def __str__(self):
        return self.name
    
class Course(models.Model):
    course_id = models.IntegerField(primary_key=True)
    student = models.ForeignKey(StudentData, on_delete=models.CASCADE, related_name='course', default=None)
    name = models.CharField(max_length=255)
    marks = models.IntegerField()

    def __str__(self):
        return f"{self.name} : {self.marks}"