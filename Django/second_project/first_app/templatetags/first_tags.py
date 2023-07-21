from django import template
from django.template.loader import get_template
register = template.Library()

def my_template(value,arg):
    if arg == 'change':
        value = 'Rahim Talukdar'
        return value
    if arg == 'title':
        return value.title()
    

def show_courses():
    course_lst = [{'id':1,'course':"Data Stucture",'teacher':"Mizanur Rahoman"},{'id':2,'course':"Algorithm",'teacher':"Ileas Pramanik"},{'id':3,'course':"Operating System",'teacher':"Shamsuzzaman Sabuj"}]
    return {'courses':course_lst}

courses_template = get_template('first_app/course.html')
register.filter('change_name',my_template)
register.inclusion_tag(courses_template)(show_courses)