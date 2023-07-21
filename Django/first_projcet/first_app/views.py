from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def home(request):
    return HttpResponse('''
                        <h1>Hello, this is first application home page.</h1>
                        <a href="/">Project Home</a> <br/>
                        <a href="/about/">Project About</a> <br/>
                        <a href="/first_app/about/">First App About Page</a> <br/>
                        <a href="/second_app/course/">Second App Course Page</a> <br/>
                        <a href="/second_app/profile/">Second App profile Page</a> <br/>
                        ''')

def aboutFirstApp(request):
    return HttpResponse("<h1>Oh, this is first application about page.</h1>")