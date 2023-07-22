from typing import Any, Dict
from django import forms
from django.core import validators

class PasswordValidationProject(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    password = forms.CharField(widget=forms.PasswordInput)
    con_password = forms.CharField(widget=forms.PasswordInput)
    
    def clean(self) -> Dict[str, Any]:
        cleaned_data = super().clean()
        valName = self.cleaned_data['name']
        valPassword = self.cleaned_data['password']
        valCon_password = self.cleaned_data['con_password']
        if len(valName) < 15:
            raise forms.ValidationError('Enter a name at least 15 characters')
        if valPassword != valCon_password:
            raise forms.ValidationError("Password doesn't match")