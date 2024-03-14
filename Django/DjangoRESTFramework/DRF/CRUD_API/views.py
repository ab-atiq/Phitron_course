from django.shortcuts import render
import io
from rest_framework.parsers import JSONParser
from rest_framework.renderers import JSONRenderer
from django.http import HttpResponse, JsonResponse
from .models import Student
from .serializers import StudentSerializer
from django.views.decorators.csrf import csrf_exempt

# Create your views here.
@csrf_exempt
def student_crud_api_FBV(request):
    if request.method == "GET":
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        id = python_data.get('id', None)
        if id is not None:
            stu = Student.objects.get(id=id)
            serializer = StudentSerializer(stu)
            json_data = JSONRenderer().render(serializer.data)
            return HttpResponse(json_data, content_type='application/json')
            # return JsonResponse(serializer.data, safe=False)
        stu = Student.objects.all()
        serializer = StudentSerializer(stu, many=True) # many=True for multiple data
        json_data = JSONRenderer().render(serializer.data)
        return HttpResponse(json_data, content_type='application/json')
        # return JsonResponse(serializer.data, safe=False)
        
    if request.method == "POST":
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        serializer = StudentSerializer(data=python_data)
        if serializer.is_valid():
            serializer.save()
            res = {'msg':'Data Created'}
            json_data = JSONRenderer().render(res)
            return HttpResponse(json_data, content_type='application/json')
            # return JsonResponse(res, safe=False)
        json_data = JSONRenderer().render(serializer.errors)
        return HttpResponse(json_data, content_type='application/json')        
        # return JsonResponse(serializer.errors, safe=False)
    
    if request.method == "PUT":
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        id = python_data.get('id', None)
        stu = Student.objects.get(id=id)
        serializer = StudentSerializer(stu, data=python_data, partial=True) # partial=True for update data where one or more field can be miss
        if serializer.is_valid():
            serializer.save()
            res = {'msg':'Data Updated'}
            json_data = JSONRenderer().render(res)
            return HttpResponse(json_data, content_type='application/json')
            # return JsonResponse(res, safe=False)
        json_data = JSONRenderer().render(serializer.errors)
        return HttpResponse(json_data, content_type='application/json')
        # return JsonResponse(serializer.errors, safe=False)
    
    if request.method == "DELETE":
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        id = python_data.get('id', None)
        if id is not None:
            stu = Student.objects.get(id=id)
            stu.delete()
            res = {'msg':'Data Deleted'}
            # json_data = JSONRenderer().render(res)
            # return HttpResponse(json_data, content_type='application/json')
            return JsonResponse(res, safe=False)
        res = {'msg':'Please Provide right ID'}
        return JsonResponse(res, safe=False)
    
from django.views import View
from django.utils.decorators import method_decorator

# Class Based Views
@method_decorator(csrf_exempt, name='dispatch')
class Student_CRUD_API_CBV(View):
    def get(self, request, *args, **kwargs):
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        id = python_data.get('id', None)
        if id is not None:
            stu = Student.objects.get(id=id)
            serializer = StudentSerializer(stu)
            json_data = JSONRenderer().render(serializer.data)
            return HttpResponse(json_data, content_type='application/json')
            # return JsonResponse(serializer.data, safe=False)
        stu = Student.objects.all()
        serializer = StudentSerializer(stu, many=True) # many=True for multiple data
        json_data = JSONRenderer().render(serializer.data)
        return HttpResponse(json_data, content_type='application/json')
        # return JsonResponse(serializer.data, safe=False)
        
    def post(self, request, *args, **kwargs):
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        serializer = StudentSerializer(data=python_data)
        if serializer.is_valid():
            serializer.save()
            res = {'msg':'Data Created'}
            json_data = JSONRenderer().render(res)
            return HttpResponse(json_data, content_type='application/json')
            # return JsonResponse(res, safe=False)
        json_data = JSONRenderer().render(serializer.errors)
        return HttpResponse(json_data, content_type='application/json')        
        # return JsonResponse(serializer.errors, safe=False)
    
    def put(self, request, *args, **kwargs):
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        id = python_data.get('id', None)
        stu = Student.objects.get(id=id)
        serializer = StudentSerializer(stu, data=python_data, partial=True) # partial=True for update data where one or more field can be miss
        if serializer.is_valid():
            serializer.save()
            res = {'msg':'Data Updated'}
            json_data = JSONRenderer().render(res)
            return HttpResponse(json_data, content_type='application/json')
            # return JsonResponse(res, safe=False)
        json_data = JSONRenderer().render(serializer.errors)
        return HttpResponse(json_data, content_type='application/json')
        # return JsonResponse(serializer.errors, safe=False)
    
    def delete(self, request, *args, **kwargs):
        json_data = request.body
        stream = io.BytesIO(json_data)
        python_data = JSONParser().parse(stream)
        id = python_data.get('id', None)
        if id is not None:
            stu = Student.objects.get(id=id)
            stu.delete()
            res = {'msg':'Data Deleted'}
            # json_data = JSONRenderer().render(res)
            # return HttpResponse(json_data, content_type='application/json')
            return JsonResponse(res, safe=False)
        res = {'msg':'Please Provide right ID'}
        return JsonResponse(res, safe=False)