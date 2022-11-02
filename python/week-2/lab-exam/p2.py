from time import sleep
import requests
import json


while True:
    response_API = requests.get(
        'https://api.openweathermap.org/data/2.5/weather?q=chittagong&appid=4b5f5c378962441c1c0063e2bb400c5c')
    data = response_API.text
    parse_json = json.loads(data)
    print(parse_json)
    sleep(1800)
