from django.urls import path
from . import views

urlpatterns = [
    path('student/', views.StudentList.as_view()),
    path('student/<int:pk>/', views.StudentRetrieve.as_view()),
    path('student/create/', views.StudentCreate.as_view()),
    path('student/update/<int:pk>/', views.StudentUpdate.as_view()),
    path('student/delete/<int:pk>/', views.StudentDestroy.as_view()),
    # minimize all 5 APIView in 2 APIView
    path('student/list_create/', views.StudentListCreate.as_view()),
    path('student/retrieve_update_destroy/<int:pk>/', views.StudentRetrieveUpdateDestroy.as_view()),
]
