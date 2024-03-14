from rest_framework import serializers
from .models import Student

""" 
# Validators
def start_with_m(value):
    if value[0].lower() != 'm':
        raise serializers.ValidationError('Name should be start with M')
    

class StudentSerializer(serializers.Serializer):
    name = serializers.CharField(max_length=100, validators=[start_with_m])
    roll = serializers.IntegerField()
    city = serializers.CharField(max_length=100)
    
    def create(self, validated_data):
        return Student.objects.create(**validated_data)
    
    def update(self, instance, validated_data):
        print(instance.name) # old data from database
        instance.name = validated_data.get('name', instance.name) # if user not provide name then old name will be there
        print(instance.name) # new data from user save in database
        instance.roll = validated_data.get('roll', instance.roll)
        instance.city = validated_data.get('city', instance.city)
        instance.save()
        return instance
    
    # Field level validation
    def validate_roll(self, value):
        if value >= 200:
            raise serializers.ValidationError('Seat Full')
        return value

    # Object level validation
    def validate(self, data):
        nm = data.get('name')
        ct = data.get('city')
        if nm.lower() == 'mahboob' and ct.lower() != 'kolkata':
            raise serializers.ValidationError('City must be kolkata')
        return data 
"""
# ModelSerializer class is a shortcut to create serializer class. It will create all the fields automatically and also create create() and update() method automatically.
class StudentSerializer(serializers.ModelSerializer):
    # validators 
    def start_with_m(value):
        if value[0].lower() != 'm':
            raise serializers.ValidationError('Name should be start with M')
        
    name = serializers.CharField(max_length=100, validators=[start_with_m])
    # name = serializers.CharField(read_only=True) # read only single field
    class Meta:
        model = Student
        fields = ['id', 'name', 'roll', 'city']
        # read_only_fields = ['name', 'roll'] # read only multiple fields
        extra_kwargs = {'name':{'read_only':True}} # read only single field
        
    # update and create method not required if we use ModelSerializer. Because ModelSerializer has default create and update method.
    
    # Field level validation
    def validate_roll(self, value):
        if value >= 200:
            raise serializers.ValidationError('Seat Full')
        return value
    
    # Object level validation
    def validate(self, data):
        nm = data.get('name')
        ct = data.get('city')
        if nm.lower() == 'mahboob' and ct.lower() != 'kolkata':
            raise serializers.ValidationError('City must be kolkata')
        return data