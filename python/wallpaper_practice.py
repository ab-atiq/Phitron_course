import json
import requests
import PyWallpaper

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"
res = requests.get(api_url)
content = res.content.decode("UTF-8")
dic_con = json.loads(content)
img_url = dic_con['url']
req_img = requests.get(img_url)
print(req_img)
img = open("wallpaper.jpg","wb")
img.write(req_img.content)
PyWallpaper.change_wallpaper("H:\Phytron\python\wallpaper.jpg")