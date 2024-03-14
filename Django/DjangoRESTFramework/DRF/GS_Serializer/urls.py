from django.urls import path
from . import views

urlpatterns = [
    path("students/", views.students_info, name="student_list"),
    path("students_json/", views.students_info_json_response, name="student_list_json"),
    path("student/<int:pk>/", views.single_student_info, name="single_student"),
    path("student_json/<int:pk>/", views.single_student_info_json_response, name="single_student_json"),
    
    path('student_create/', views.student_create)
]
