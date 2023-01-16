"""My cute API"""
"""CRUD operation using flask"""

from flask import Flask,request

database = {'atiq':"100100",'abul':"123456"}

# initial flask app
app = Flask(__name__)

@app.route('/',methods=['GET'])
def home():
    return "Welcome to my cute web API"

@app.route('/something',methods=['GET'])
def something():
    return "This is something page"

@app.route('/getdata',methods=['GET'])
def get_data():
    return database

# api/adddata?name=id
@app.route('/adddata',methods=['GET','PUT'])
def add_data():
    key,value=list(request.args.items())[0]
    database[key]=value
    return f"{key} added"

# api/deletedata?user=value
@app.route('/deletedata',methods=['GET','DELETE'])
def delete_data():
    _,value=list(request.args.items())[0]
    database.pop(value)
    return f"{value} deleted"

if __name__=="__main__":
    app.run()