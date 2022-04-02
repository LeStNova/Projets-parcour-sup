import pyautogui
import time


currentMouseX, currentMouseY = pyautogui.position()
screenWidth, screenHeight = pyautogui.size()

i=0
#pyautogui.moveTo(screenWidth / 8, screenHeight / 8)
time.sleep(5)


while i<=5 :
    pyautogui.click()
    print(i)
    time.sleep(7)


