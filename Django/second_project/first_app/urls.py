from django.urls import path
from .views import course, about, form_html, form_django, submitted_data_get, student_form, teacher_form
from .views2 import password_validation_project
urlpatterns = [
    path('course/',course,name='course'),
    path('about/',about),
    
    path('form_html/',form_html, name='form_html'),
    path('submitted_data_get/',submitted_data_get, name='submitted_data_get'),
    path('form_django/',form_django, name='form_django'),
    path('student_form/',student_form,name='student_form'),
    path('teacher_form/',teacher_form,name='teacher_form'),
    
    path('password_validation_project/',password_validation_project,name='password_validation_project')
]
