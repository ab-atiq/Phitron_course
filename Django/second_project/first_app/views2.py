from django.shortcuts import render
from .forms import StudentForm, TeacherForm
from .forms2 import PasswordValidationProject

def student_form(request):
    if request.method == 'POST':
        form = StudentForm(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = StudentForm()
    return render(request,'./first_app/student_form.html',{'form':form})

def teacher_form(request):
    if request.method == 'POST':
        form = TeacherForm(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = TeacherForm()
    return render(request,'./first_app/teacher_form.html',{'form':form})

def password_validation_project(request):
    if request.method == 'POST':
        form = PasswordValidationProject(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = PasswordValidationProject()
    return render(request,'./first_app/pass_valid_project.html',{'form':form})