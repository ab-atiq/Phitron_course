from django.urls import path, include
from rest_framework.routers import DefaultRouter

from .views import YourModelListCreateView, StudentView, StudentDetailView
from .views2 import StudentListCreateView, StudentRetrieveUpdateDestroyView, CourseListCreateView, CourseRetrieveUpdateDestroyView, StudentListViewSet

router = DefaultRouter()
router.register(r'student', StudentListViewSet)

urlpatterns = [
    path('yourmodel/', YourModelListCreateView.as_view(), name='yourmodel-list-create'),
    path("student/", StudentView.as_view()),
    path("student/<int:pk>/", StudentDetailView.as_view()),
    path("student_class/", StudentListCreateView.as_view()),
    path("student_class/<int:pk>/", StudentRetrieveUpdateDestroyView.as_view()),
    path("course/", CourseListCreateView.as_view()),
    path("course/<int:pk>/", CourseRetrieveUpdateDestroyView.as_view(), name='course_detail'),
    path('viewset/', include(router.urls)),
]
