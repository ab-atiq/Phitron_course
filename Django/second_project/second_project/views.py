from django.shortcuts import render

def index(request):
    return render(request,'index.html',context={'ab':'/about','name':'I am Atiqur Rahman','mark':58,'lst':[23,53,55,553],'blog':"Lorem, ipsum dolor sit amet consectetur adipisicing elit. Cum aliquid saepe incidunt. Ipsam esse labore incidunt, ullam ea reprehenderit numquam ut ex illo atque, illum culpa dolorem. Repellat, modi omnis!"})

def home(request):
    return render(request,'./first_app/home.html',{'author':'Phitron','age':23,'mark':85})