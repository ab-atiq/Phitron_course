""" Problem:
    Download and change desktop wallpaper automatically
"""
import json
import requests
import PyWallpaper
# import json

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

# get the json
response = requests.get(api_url)
content = response.content.decode("UTF-8")

# convert string to json dictionary
dict_content = json.loads(content)

# get image url
img_url = dict_content['url']

# get image and download
req_image = requests.get(img_url)
print(req_image)

with open('open.jpg', 'wb') as image:
    image.write(req_image.content)

# same work as 25-26 line of code

# image = open('open.jgp','wb')
# image.write(req_image.content)

# set as wallpaper
PyWallpaper.change_wallpaper("H:\Phytron\python\week-2\module6-lab\open.jpg")
