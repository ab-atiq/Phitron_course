"""  
Create a chat bot that will understand if you are bored, then it will call the Bored API and suggest some activities to you in reply. It should also have the ability to tell the current time.

Example:
>> Hey robot, this house is boring. Any idea what I can do?
Bot:  You can learn Javascript.
>> thank you. What's the time?
Bot: it's 9:30 pm sir.
"""
import requests
from datetime import datetime

def get_activity():
    response = requests.get("https://www.boredapi.com/api/activity") # this api not working
    if response.status_code == 200:
        data = response.json()
        return data.get('activity')
    else:
        return "Sorry, I couldn't fetch an activity right now."

def get_current_time():
    now = datetime.now()
    return now.strftime("%I:%M %p")

def chatbot_response(user_input):
    user_input = user_input.lower()

    if "bored" in user_input or "boring" in user_input:
        activity = get_activity()
        return f"You can {activity}."
    elif "time" in user_input:
        current_time = get_current_time()
        return f"It's {current_time}."
    else:
        return "I'm here to help! You can ask for an activity if you're bored or the current time."

def main():
    print("Chatbot: Hi there! I'm your friendly chatbot. How can I assist you today?")

    while True:
        user_input = input(">> ")
        if user_input.lower() in ["exit", "quit", "bye"]:
            print("Chatbot: Goodbye! Have a great day!")
            break
        response = chatbot_response(user_input)
        print(f"Chatbot: {response}")

if __name__ == "__main__":
    main()
