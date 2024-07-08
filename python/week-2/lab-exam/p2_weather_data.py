"""  
Use web search to find some API to get weather data. Use that to get your region’s weather data every 30 minute.

Write a function named weather_data() and write your code inside this function.

"""

import time
import requests
import json
import schedule

# OpenWeatherMap API URL = 'https://api.openweathermap.org/data/2.5/weather?q=chittagong&appid=4b5f5c378962441c1c0063e2bb400c5c'

API_KEY = '4b5f5c378962441c1c0063e2bb400c5c'  # Replace with your OpenWeatherMap API key
CITY = 'chittagong'  # Replace with your city
BASE_URL = 'http://api.openweathermap.org/data/2.5/weather?' 

def get_weather_data():
    url = f"{BASE_URL}q={CITY}&appid={API_KEY}&units=metric"
    response = requests.get(url)
    if response.status_code == 200:
        # Extracting data in json format
        ''' given line "response.text" is a string, so we need to convert it to json format using json.loads() method.'''
        # data = json.loads(response.text)  # 2 step in one line
        data = response.json()    # convert string to json format in one line
        main = data['main']
        wind = data['wind']
        weather = data['weather'][0]
        print(f"City: {data['name']}")
        print(f"Temperature: {main['temp']}°C")
        print(f"Weather: {weather['description']}")
        print(f"Humidity: {main['humidity']}%")
        print(f"Wind Speed: {wind['speed']} m/s")
        print(f"Wind Direction: {wind['deg']}°")
    else:
        print("Error fetching weather data")

def weather_data():
    # schedule.every(30).minutes.do(get_weather_data)
    while True:
        # schedule.run_pending()
        get_weather_data()
        time.sleep(60)

if __name__ == "__main__":
    weather_data()
