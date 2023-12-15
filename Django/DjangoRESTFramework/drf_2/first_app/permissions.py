from rest_framework import permissions

class AdminOrReadOnly(permissions.IsAdminUser):
    def has_permission(self, request, view):
        if request.method in permissions.SAFE_METHODS: # get request handle
            return True
        else: # put, delete, post request handle
            bool(request.user and request.user.is_staff)

class ReviewerOrReadOnly(permissions.BasePermission):
    def has_object_permission(self, request, view, obj):
        if request.method in permissions.SAFE_METHODS: # get request handle
            return True
        else:
            return obj.user == request.user # authenticated and that review user is same. then edit permission
        
        
        
