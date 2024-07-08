""" Go to Bored API (https://www.boredapi.com/) and read the documentation. Write a code that will suggest some activities every 30 minute and show as notification. 
Hint: In windows you can use win10toast or similar libraries to show notification on windows.
"""
import requests
import time
from win10toast import ToastNotifier

def get_activity():
    response = requests.get("https://www.boredapi.com/api/activity") # this api not working
    if response.status_code == 200:
        data = response.json()
        return data.get('activity')
    else:
        return "Could not fetch activity"

def show_notification(activity):
    toaster = ToastNotifier()
    toaster.show_toast("Activity Suggestion", activity, duration=10)

def main():
    while True:
        activity = get_activity()
        show_notification(activity)
        time.sleep(30)  # Wait for 30 seconds

if __name__ == "__main__":
    main()
