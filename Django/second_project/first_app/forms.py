from django import forms

class contactForm(forms.Form):
    name = forms.CharField(label="User Name", initial='Abul',help_text="Total length must be within 70 characters",required=False,disabled=True)
    email = forms.EmailField(label="User Email")
    text = forms.CharField(widget=forms.Textarea(attrs={'id':'text_area','class':'description','placeholder':"Enter your own description"}))
    age = forms.IntegerField()
    weight = forms.FloatField()
    balance = forms.DecimalField()
    check = forms.BooleanField()
    birthday = forms.DateField(widget=forms.DateInput(attrs={'type':'date'}))
    appointment = forms.DateTimeField(widget=forms.DateTimeInput(attrs={'type':'datetime-local'}))
    birthday2 = forms.CharField(widget=forms.DateInput(attrs={'type':'date'}))
    appointment2 = forms.CharField(widget=forms.DateTimeInput(attrs={'type':'datetime-local'}))
    CHOICES =  [('S','Small'),('M',"Medium"),("L","Large")]
    size = forms.ChoiceField(choices=CHOICES)
    size1 = forms.ChoiceField(choices=CHOICES, widget=forms.RadioSelect)
    MEAL = [('P',"Pepperoni"),('M','Mashroom'),('B','Beef')]
    pizza = forms.MultipleChoiceField(choices=MEAL)
    pizza1 = forms.MultipleChoiceField(choices=MEAL, widget=forms.CheckboxSelectMultiple)
    file = forms.FileField()
    