from django.urls import path, include
from rest_framework.routers import DefaultRouter
from . import views

router = DefaultRouter()
router.register('student_viewsets_api', views.StudentViewSet, basename='student_viewsets_api')
router.register('student_model_viewsets_api', views.StudentModelViewSet, basename='student_model_viewsets_api')
router.register('student_read_only_model_viewsets_api', views.StudentReadOnlyModelViewSet, basename='student_read_only_model_viewsets_api')

urlpatterns = [
    path('', include(router.urls)),
]