from django.shortcuts import render, redirect
from .models import Student
from .forms import StudentForm
from .models import Teacher1, Student1

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

# def showData(request):
    # teacher = Teacher1.objects.get(name = 'Atiqur')
    # students = teacher.student.all()
    # for s in students:
    #     print(s.name)
        
    # stu = Student1.objects.get(name = 'Sabuj')
    # teas = stu.teacher_set.all()
    # for t in teachs:
    #     print(t.name)
    # return render(request, 'show_data.html')