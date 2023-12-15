from django.urls import path
from . import views
urlpatterns = [
    path('', views.home, name='home'),
    path('delete/<int:roll>', views.delete_student, name='delete_student'),
    path('student_form/', views.student_form, name='student_form'),
    path('show_students/', views.show_students, name='show_students'),
    path('show_teachers/', views.show_teachers, name='show_teachers'),
]