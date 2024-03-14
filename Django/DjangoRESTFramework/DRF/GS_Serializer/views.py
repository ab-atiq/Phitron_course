from django.shortcuts import render
from rest_framework.renderers import JSONRenderer

from .serializers import StudentSerializer
from .models import StudentModel as Student

# Create your views here.
def students_info(request):
    students = Student.objects.all()
    print(students) # output is Query Set
    serializer = StudentSerializer(students, many=True) # many=True is used for Query Set
    print(serializer) # output is Serializer
    print(serializer.data) # output is OrderedDict
    json_data = JSONRenderer().render(serializer.data)
    print(json_data) # output is JSON Data
    return HttpResponse(json_data, content_type="application/json")

def single_student_info(request, pk):
    student = Student.objects.get(id=pk)
    print(student) # output is single Student Object
    serializer = StudentSerializer(student)
    print(serializer) # output is Serializer
    print(serializer.data) # output is OrderedDict
    json_data = JSONRenderer().render(serializer.data)
    print(json_data) # output is JSON Data
    return HttpResponse(json_data, content_type="application/json")

from django.http import HttpResponse, JsonResponse
# All data sent using JsonResponse
def students_info_json_response(request):
    students = Student.objects.all()
    serializer = StudentSerializer(students, many=True) # many=True is used for Query Set
    return JsonResponse(serializer.data, safe=False) # must use safe=False. because it is list of dictionary, not single dictionary data

# Single student data sent using JsonResponse
def single_student_info_json_response(request, pk):
    student = Student.objects.get(id=pk)
    serializer = StudentSerializer(student)
    return JsonResponse(serializer.data) # by default safe = True, it will be able to sent because it is dictionary data.

import io
from rest_framework.parsers import JSONParser
from django.views.decorators.csrf import csrf_exempt
# create/post a new student data
@csrf_exempt
def student_create(request):
    if request.method=="POST":
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        serializer = StudentSerializer(data=python_data)
        if serializer.is_valid():
            serializer.save()
            res = {'data':"Data created successfully"}
            # json_res= JSONRenderer().render(res)
            # return HttpResponse(json_res, content_type="application/json")
            return JsonResponse(res, safe=False)
        
        # json_error = JSONRenderer().render(serializer.errors)
        # return HttpResponse(json_error, content_type="application/json")
        return JsonResponse(serializer.errors, safe=False)