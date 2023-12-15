from rest_framework import generics, viewsets
from . import models
from . import serializers

class StudentListCreateView(generics.ListCreateAPIView):
    # get, post
    queryset = models.StudentData.objects.all()
    serializer_class = serializers.StudentDataSerializer
    
# create StudentList views using viewsets. it can operate all CRUD operations. it can also operate all operations of single student.
# class StudentListViewSet(viewsets.ModelViewSet):
class StudentListViewSet(viewsets.ReadOnlyModelViewSet): # it can show all of single student. but, it can't operate all CRUD operations.
    queryset = models.StudentData.objects.all()
    serializer_class = serializers.StudentDataSerializer
    
class StudentRetrieveUpdateDestroyView(generics.RetrieveUpdateDestroyAPIView):
    # get, put, delete
    queryset = models.StudentData.objects.all()
    serializer_class = serializers.StudentDataSerializer

class CourseListCreateView(generics.ListCreateAPIView):
    # get, post
    queryset = models.Course.objects.all()
    serializer_class = serializers.CourseSerializer
    
class CourseRetrieveUpdateDestroyView(generics.RetrieveUpdateDestroyAPIView):
    # get, put, delete
    queryset = models.Course.objects.all()
    serializer_class = serializers.CourseSerializer
