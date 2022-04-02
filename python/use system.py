import os
import pyautogui
import time
import smtplib    ## Importation du module


os.system("dir")
pyautogui.hotkey('win', 'r')
pyautogui.typewrite('Hello')

im1 = pyautogui.screenshot('my_screenshot.png')
time.sleep(1)