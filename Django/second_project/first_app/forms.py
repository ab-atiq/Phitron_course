from django import forms
from django.core import validators

def len_check(value):
    if len(value)<20:
        raise forms.ValidationError("Enter a value at least 20 character")

class contactForm(forms.Form):
    # built in form validation added name, email, age and file field 
    name = forms.CharField(label="User Name", initial='Abul Bashar Atiq',help_text="Total length must be within 70 characters",required=False,disabled=True, validators=[validators.MinLengthValidator(10,message='Enter a name at least 10 character'),validators.MaxLengthValidator(20,message="Enter a name within 20 character")])
    email = forms.EmailField(label="User Email",validators=[validators.EmailValidator(message='Enter a valid Email')])
    # user defined validation function use 
    text = forms.CharField(validators=[len_check],widget=forms.Textarea(attrs={'id':'text_area','class':'description','placeholder':"Enter your own description"}))
    age = forms.IntegerField(validators=[validators.MinValueValidator(18,message='You are not eligible to access our website'),validators.MaxValueValidator(50, message='You are so old, you can not get this website pressure')])
    weight = forms.FloatField()
    balance = forms.DecimalField()
    check = forms.BooleanField()
    birthday = forms.DateField(widget=forms.DateInput(attrs={'type':'date'}))
    appointment = forms.DateTimeField(widget=forms.DateTimeInput(attrs={'type':'datetime-local'}))
    # CharField and DateField will work same when give widget 'DateInput' or 'DateTimeInput'
    birthday2 = forms.CharField(widget=forms.DateInput(attrs={'type':'date'}))
    appointment2 = forms.CharField(widget=forms.DateTimeInput(attrs={'type':'datetime-local'}))
    CHOICES =  [('S','Small'),('M',"Medium"),("L","Large")]
    size = forms.ChoiceField(choices=CHOICES)
    size1 = forms.ChoiceField(choices=CHOICES, widget=forms.RadioSelect) # form field as a radio
    MEAL = [('P',"Pepperoni"),('M','Mashroom'),('B','Beef')]
    pizza = forms.MultipleChoiceField(choices=MEAL)
    pizza1 = forms.MultipleChoiceField(choices=MEAL, widget=forms.CheckboxSelectMultiple) # multiple select with checkbox
    file = forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf','png','jpg'], message='File extention must be ended with .pdf or .png or .jpg')]) # file extention validations


class StudentForm(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    email = forms.CharField(widget=forms.EmailInput)
    
    '''Create validation of user name and email two function in class'''
    def clean_name(self):
        valName = self.cleaned_data['name']
        if len(valName) < 10:
            raise forms.ValidationError('Enter a name at least 10 character')
        return valName
    
    def clean_email(self):
        valEmail = self.cleaned_data['email']
        if '.com' not in valEmail:
            raise forms.ValidationError("Your email must contain .com")
        return valEmail

class TeacherForm(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    email = forms.CharField(widget=forms.EmailInput)
    
    '''Create validation of user name and email in one function in class'''
    def clean(self):
        # cleaned_data = super().clean()
        valName = self.cleaned_data['name']
        valEmail = self.cleaned_data['email']
        
        if len(valName) < 10:
            raise forms.ValidationError('Enter a name at least 10 character')
        if '.com' not in valEmail:
            raise forms.ValidationError("Your email must contain .com")
        