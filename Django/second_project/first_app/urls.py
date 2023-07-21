from django.urls import path
from .views import course, about, form_html, form_django, submitted_data_get
urlpatterns = [
    path('course/',course,name='course'),
    path('about/',about),
    path('form_html/',form_html, name='form_html'),
    path('submitted_data_get/',submitted_data_get, name='submitted_data_get'),
    path('form_django/',form_django, name='form_django'),
]
