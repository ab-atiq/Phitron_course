from rest_framework import viewsets
from rest_framework.response import Response
from rest_framework import status
from .serializers import StudentSerializer
from .models import Student

# Create API using ViewSet. All the methods are created manually.
class StudentViewSet(viewsets.ViewSet):
    def list(self,request):
        print('**********List**********')
        print('Basename:',self.basename)
        print('Action:',self.action)
        print('Detail:',self.detail)
        print('Suffix:',self.suffix)
        print('Name:',self.name)
        print('Description:',self.description)
        stu = Student.objects.all()
        serializer = StudentSerializer(stu,many=True)
        return Response(serializer.data)
    
    def retrieve(self,request,pk=None):
        print('**********Retrieve**********')
        print('Basename:',self.basename)
        print('Action:',self.action)
        print('Detail:',self.detail)
        print('Suffix:',self.suffix)
        print('Name:',self.name)
        print('Description:',self.description)
        id = pk
        if id is not None:
            stu = Student.objects.get(id=id)
            serializer = StudentSerializer(stu)
            return Response(serializer.data)
    
    def create(self,request):
        serializer = StudentSerializer(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response({'msg':'Data Created'}, status=status.HTTP_201_CREATED)
        return Response(serializer.errors,status=status.HTTP_400_BAD_REQUEST)
    
    def update(self,request,pk=None):
        id = pk
        stu = Student.objects.get(pk=id)
        serializer = StudentSerializer(stu,data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response({'msg':'Complete Data Updated'})
        return Response(serializer.errors,status=status.HTTP_400_BAD_REQUEST)
    
    def partial_update(self,request,pk=None):
        id = pk
        stu = Student.objects.get(pk=id)
        serializer = StudentSerializer(stu,data=request.data,partial=True)
        if serializer.is_valid():
            serializer.save()
            return Response({'msg':'Partial Data Updated'})
        return Response(serializer.errors,status=status.HTTP_400_BAD_REQUEST)
    
    def destroy(self,request,pk=None):
        id = pk
        stu = Student.objects.get(pk=id)
        stu.delete()
        return Response({'msg':'Data Deleted'})
    
# Create API using ModelViewSet. It is a combination of API created using ListAPIView, RetrieveAPIView, CreateAPIView, UpdateAPIView, DestroyAPIView

class StudentModelViewSet(viewsets.ModelViewSet):
    queryset = Student.objects.all()
    serializer_class = StudentSerializer
    

# Readonly ModelViewSet API. It is a combination of API created using ListAPIView, RetrieveAPIView
class StudentReadOnlyModelViewSet(viewsets.ReadOnlyModelViewSet):
    queryset = Student.objects.all()
    serializer_class = StudentSerializer