import json

python_data = {"name": "John", "age": 30, "city": "New York"}
json_data = json.dumps(python_data)
print(json_data)

python_data_to_json = json.loads(json_data)
print(python_data_to_json)