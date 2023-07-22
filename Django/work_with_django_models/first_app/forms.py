from django import forms
from .models import Student

class StudentForm(forms.ModelForm):
    class Meta:
        model = Student
        fields = '__all__'
        labels = {
            'name':'Student Name',
            'roll':"Your ID",
        }
        widgets = {
            'name':forms.TextInput(attrs={'class':'btn btn-primary'})
        }
        help_texts = {
            'address':"Give your full address. Like, (village, post, upzella, zella, district, country) "
        }
        error_messages={
            'name':{'required':'Your name is required'}
        }