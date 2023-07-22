from django.urls import path
from . import views
urlpatterns = [
    path('', views.home, name='home'),
    path('delete/<int:roll>', views.delete_student, name='delete_student'),
    path('student_form/', views.student_form, name='student_form'),
]