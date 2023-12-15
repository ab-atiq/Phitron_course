from django.shortcuts import render, redirect
from .models import Student
from .forms import StudentForm
from .models import Teacher1, Student1

def home(request):
    student = Student.objects.all()
    print(student)
    return render(request, 'home.html',{'data':student})

def delete_student(request, roll):
    std = Student.objects.get(pk = roll).delete()
    print(std)
    return redirect('home')

def student_form(request):
    if request.method=='POST':
        form = StudentForm(request.POST)
        if form.is_valid():
            form.save(commit=True)
            print(form.cleaned_data)
        return redirect('home')
    else:
        form = StudentForm()
        return render(request, 'model_form.html', {'form':form})

def show_students(request):
    teacher = Teacher1.objects.get(name = 'Atiqur')
    students = teacher.student.all()
    for s in students:
        print(s.name)
    return render(request, 'show_students.html', {'students':students})

def show_teachers(request):
    stu = Student1.objects.get(name = 'Sabuj')
    # teas = stu.teacher1_set.all()
    teas = stu.teacher1.all() # related_name = 'teacher1' in Teacher1 Model
    for t in teas:
        print(t.name)
    return render(request, 'show_teachers.html', {'teachers':teas})