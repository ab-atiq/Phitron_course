from django.http import Http404
from rest_framework import generics
from rest_framework.views import APIView
from rest_framework.response import Response
from rest_framework import status

from .models import YourModel, StudentData
from .serializers import YourModelSerializer, StudentDataSerializer

class YourModelListCreateView(generics.ListCreateAPIView):
    queryset = YourModel.objects.all()
    serializer_class = YourModelSerializer

class StudentView(APIView):
    def get(self, request, format=None):
        students = StudentData.objects.all()
        serializer = StudentDataSerializer(students, many=True)
        return Response(serializer.data)

    def post(self, request, format=None):
        serializer = StudentDataSerializer(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
    
class StudentDetailView(APIView):
    def get(self, request, pk, format=None):
        student = StudentData.objects.get(pk=pk)
        serializer = StudentDataSerializer(student)
        return Response(serializer.data)
    
    def put(self, request, pk, format=None):
        student = StudentData.objects.get(pk=pk)
        serializer = StudentDataSerializer(student, data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data)
        return Response(serializer.errors, status = status.HTTP_400_BAD_REQUEST)
    
    def delete(self, request, pk, format=None):
        student = StudentData.objects.get(pk=pk)
        student.delete()
        return Response(status=status.HTTP_204_NO_CONTENT)