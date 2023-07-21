from django.urls import path
from .views import course, profile
urlpatterns = [
    path("course/",course),
    path("profile/",profile),
]
