# https://pypi.org/project/PyAutoGUI/
import pyautogui
import time
# pyautogui.alert('This is an alert box.')

time.sleep(5)
# pyautogui.write("Hello. My name is atiq")
# pyautogui.press('enter')

for i in range(5):
    pyautogui.write('I love you', interval=0.25)
    pyautogui.press('enter')