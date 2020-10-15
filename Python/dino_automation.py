import pyautogui  # pip install pyautogui
from PIL import Image, ImageGrab  # pip install pillow
# from numpy import asarray
import time


def hit(key):
    pyautogui.keyDown(key)



def isCollide(data):
    # Draw the rectangle for birds
    for i in range(660, 700):
        for j in range(190,230):
            if data[i, j] < 100:
                hit("down")
                return

    for i in range(660, 730):
        for j in range(240, 290):
            if data[i, j] < 100:
                hit("up")
                return
    return


if __name__ == "__main__":
    print("Hey.. Dino game about to start in 3 seconds")
    time.sleep(2)
    hit('up')

    while True:
        image = ImageGrab.grab().convert('L')
        data = image.load()

        isCollide(data)

    #image.show()
    #isCollide(data)
    #im2=ImageGrab.grab(bbox=(300, 415,410, 563)).convert('L')
    #im2.show()
    #print(im2.getextrema())


        #isCollide(data)

        # print(asarray(image))

'''
        # Draw the rectangle for cactus
        for i in range(275, 325):
            for j in range(563, 650):
                data[i, j] = 0

        # Draw the rectangle for birds
        for i in range(250, 300):
            for j in range(410, 563):
                data[i, j] = 171

        image.show()
        break
      '''


