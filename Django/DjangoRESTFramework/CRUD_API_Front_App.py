import requests
import json

# this URL is for function based API view
# URL = "http://127.0.0.1:8000/api/student_crud_fbv/"

# this URL is for class based API view
URL = "http://127.0.0.1:8000/api/student_crud_cbv/"

def get_data(id=None):
    data = {}
    if id is not None:
        data = {'id':id}
    print(data)
    json_data = json.dumps(data)
    res = requests.get(url=URL, data=json_data)
    data = res.json()
    print(data)

# get_data(2)
# get_data()

def post_data():
    # data validation when data we want to save in database. here, use three types of validations.
    data = {
        'name':'dahboob', # name should be start with 'M' or 'm'
        'roll': 400, # roll should be less than 200
        'city':'Bihar', # if name is Mahboob then city must be Kolkata
    }
    json_data = json.dumps(data)
    res = requests.post(url=URL, data=json_data)
    data = res.json()
    print(data)

post_data()

def update_data():
    # data = {
    #     'id':4,
    #     'name':'Ranchi',
    #     'roll': 5,
    #     'city':'Asansol'
    # } # all field data provide for update
    data = { 
        'id':5,
        'name':'Mahboob',
        'city':'Kolkata'
    } # one or more field data provide for update
    json_data = json.dumps(data)
    res = requests.put(url=URL, data=json_data)
    data = res.json()
    print(data)
    
# update_data()

def delete_data():
    data = {'id':3}
    json_data = json.dumps(data)
    res = requests.delete(url=URL, data=json_data)
    data = res.json()
    print(data)
    
# delete_data()