from django.urls import path
from . import views

urlpatterns = [
    path("student_crud_fbv/", views.student_crud_api_FBV),
    path("student_crud_cbv/", views.Student_CRUD_API_CBV.as_view()),
]
