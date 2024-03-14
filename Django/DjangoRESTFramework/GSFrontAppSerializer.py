import requests
import json
# URL = "http://127.0.0.1:8000/gs/students/"
URL = "http://127.0.0.1:8000/gs/students_json/"
r = requests.get(url=URL) # output is Response Object
json_data = r.json() # output is JSON Data
print(json_data)

URL2 = "http://127.0.0.1:8000/gs/student_create/"
new_data = {'id':48, 'name':"Atiq", 'roll':12, 'city':"Dhaka"}
json_new_data = json.dumps(new_data)
res = requests.post(url=URL2, data=json_new_data)
res_json = res.json()
print(res_json)