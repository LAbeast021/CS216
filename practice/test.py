import pyautogui, time
time.sleep(5)
f = ["hello" , " jhihis", "sjgdjsgdjsd" , "sjdsjdgjsdg"]
for word in f :
    pyautogui.typewrite(word)
    pyautogui.press("enter")