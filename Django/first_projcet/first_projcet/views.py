from django.http import HttpResponse
def home(request):
    return HttpResponse('''
                        <h1>Hello, this is my django project home page</h1>
                        <a href="/about/">Project About</a> <br/>
                        <a href="/first_app/">First App Home Page</a> <br/>
                        <a href="/first_app/about/">First App About Page</a> <br/>
                        <a href="/second_app/course/">Second App Course Page</a> <br/>
                        <a href="/second_app/profile/">Second App profile Page</a> <br/>
                        ''')

def about(request):
    return HttpResponse("<h3>This is Project About Page</h3>")