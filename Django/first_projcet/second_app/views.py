from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def course(request):
    return HttpResponse("<h1>This is course page<h1>")

def profile(request):
    return HttpResponse("<h1>Profile page<h1>")