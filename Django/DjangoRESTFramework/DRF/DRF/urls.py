from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path("api/", include("first.urls")),
    path("gs/", include("GS_Serializer.urls")), # Greeky Shows Serializer Practice
    path("api/", include("CRUD_API.urls")), # CRUD API using Function and Class Base View
    path("fb_api/", include("FB_API.urls")), # Function Based API View
    path("generic_api/", include("GenericAPI_Mixins.urls")), # Generic API View and Mixins
    path("view_set/", include("ViewSet.urls")), # ViewSet application
]
