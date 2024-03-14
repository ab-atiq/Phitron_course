from rest_framework import serializers
from .models import StudentModel
class StudentSerializer(serializers.Serializer):
    id = serializers.IntegerField() # data sent with default created id
    name = serializers.CharField(max_length=100)
    roll = serializers.IntegerField()
    city = serializers.CharField(max_length=100)
    
    def create(self, validated_data):
        return StudentModel.objects.create(**validated_data)