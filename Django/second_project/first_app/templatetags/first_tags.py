from django import template
from django.template.loader import get_template
register = template.Library()

def my_template(value, arg):
    if arg == 'change':
        value = 'Rahim Talukdar'
        return value
    if arg == 'title':
        return value.title()
    

def show_courses():
    course_lst = [{'id':1,'course':"Data Stucture updated",'teacher':"Mizanur Rahoman updated"},{'id':2,'course':"Algorithm updated",'teacher':"Ileas Pramanik updated"},{'id':3,'course':"Operating System updated",'teacher':"Shamsuzzaman Sabuj updated"}]
    return {'courses':course_lst}

courses_template = get_template('first_app/course.html')
register.filter('change_name',my_template)
register.inclusion_tag(courses_template)(show_courses)