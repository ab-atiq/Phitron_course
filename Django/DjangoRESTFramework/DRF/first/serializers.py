from rest_framework import serializers
from .models import YourModel, StudentData, Course

class YourModelSerializer(serializers.ModelSerializer):
    class Meta:
        model = YourModel
        fields = '__all__'

class CourseSerializer(serializers.ModelSerializer):
    class Meta:
        model = Course
        fields = '__all__'

class StudentDataSerializer(serializers.ModelSerializer):
    # course = CourseSerializer(many=True, read_only=True) # plane serializer for nested data 
    # course = serializers.StringRelatedField(many=True, read_only=True) # string representation of nested data
    # course = serializers.PrimaryKeyRelatedField(many=True, read_only=True) # primary key representation of nested data
    course = serializers.HyperlinkedRelatedField(many=True, read_only=True, view_name='course_detail') # hyperlinked representation of nested data
    class Meta:
        model = StudentData
        fields = '__all__'
