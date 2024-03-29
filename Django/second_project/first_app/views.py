from django.shortcuts import render
from .forms import contactForm, StudentForm, TeacherForm
# Create your views here.
def course(request):
    course_lst = [{'id':1,'course':"Data Stucture",'teacher':"Mizanur Rahoman"},{'id':2,'course':"Algorithm",'teacher':"Ileas Pramanik"},{'id':3,'course':"Operating System",'teacher':"Shamsuzzaman Sabuj"}]
    return render(request, './first_app/course.html',context={'name':'Atiqur Rahman','courses':course_lst})

def about(request):
    return render(request, './first_app/about.html', {'player':"Glenn Maxwell"})

'''No validation use in this html form'''
def form_html(request):
    print(request.POST)
    if request.method == 'POST':
        '''this will show when action is not use. that means submitted data show in same page'''
        name = request.POST.get('name')
        email = request.POST.get('email')
        pass1 = request.POST.get('password1')
        pass2 = request.POST.get('password2')
        select = request.POST.get('select')
        return render(request, './first_app/form_html.html',{'name':name,'email':email,'pass1':pass1,'pass2':pass2,'select':select})
    else:    
        return render(request, './first_app/form_html.html')
    
def submitted_data_get(request):
    '''this data will show when data submit from html form page'''
    if request.method == 'POST':
        name = request.POST.get('name')
        email = request.POST.get('email')
        pass1 = request.POST.get('password1')
        pass2 = request.POST.get('password2')
        select = request.POST.get('select')
        return render(request, './first_app/submitted_data.html',{'name':name,'email':email,'pass1':pass1,'pass2':pass2,'select':select})
    else:
        return render(request, './first_app/submitted_data.html',{'name':name,'email':email,'pass1':pass1,'pass2':pass2,'select':select})
        
def form_django(request):
    if request.method == 'POST':
        form = contactForm(request.POST, request.FILES)
        print(form) # data show in table form 
        if form.is_valid():
            print(form.cleaned_data)
            file = form.cleaned_data['file']
            with open('./first_app/upload/'+file.name,'wb+') as destination:
                for chunk in file.chunks():
                    destination.write(chunk)
            return render(request, './first_app/form_django.html',{'form':form})
    else: 
        form = contactForm()
    return render(request, './first_app/form_django.html',{'form':form})

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
