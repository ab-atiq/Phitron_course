from django.shortcuts import render, redirect
from .models import Student
from .forms import StudentForm

# Create your views here.

def home(request):
    student = Student.objects.all()
    print(student)
    return render(request, 'home.html',{'data':student})

def delete_student(request,roll):
    std = Student.objects.get(pk = roll).delete()
    print(std)
    return redirect('home')

def student_form(request):
    if request.method=='POST':
        form = StudentForm(request.POST)
        if form.is_valid():
            form.save(commit=True)
            print(form.cleaned_data)
    else:
        form = StudentForm()
    return render(request, 'model_form.html', {'form':form})