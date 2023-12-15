from django.shortcuts import render
from .forms2 import PasswordValidationProject

def password_validation_project(request):
    if request.method == 'POST':
        form = PasswordValidationProject(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = PasswordValidationProject()
    return render(request,'./first_app/pass_valid_project.html',{'form':form})