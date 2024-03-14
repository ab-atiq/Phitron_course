from rest_framework import serializers
from .models import Student

# ModelSerializer class is a shortcut to create serializer class. It will create all the fields automatically and also create create() and update() method automatically.
class StudentSerializer(serializers.ModelSerializer):
    class Meta:
        model = Student
        fields = ['id', 'name', 'roll', 'city']
     