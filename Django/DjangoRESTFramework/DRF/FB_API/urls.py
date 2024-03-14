from django.urls import path
from . import views

urlpatterns = [
    path('studentapi/', views.student_api, name='student_api'),
    path('studentapi/<int:pk>/', views.student_api, name='student_api'),
    # Class based API view urls
    path('studentapiclass/', views.StudentAPI.as_view(), name='student_api_class'),
    path('studentapiclass/<int:pk>/', views.StudentAPI.as_view(), name='student_api_class'),
]
