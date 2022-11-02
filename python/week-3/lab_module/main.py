""" 
# pip install pyqt5 
My camera application:
    author: Atiqur rahman

"""

import sys  # default in python
from PyQt5.QtWidgets import *
from PyQt5.QtGui import QPixmap, QImage, QIcon
from PyQt5.QtCore import QTimer
import cv2


class Window(QWidget):
    """ Main app window """

    def __init__(self):
        super().__init__()

        # variables for app window
        self.window_width = 640
        self.window_height = 400

        # image variables for app window
        self.img_width = 640
        self.img_height = 400

        # setup the window
        self.setWindowTitle("My camera app")
        self.setGeometry(100, 100, self.window_width, self.window_height)
        self.setFixedSize(self.window_width, self.window_height)

        # setup timer
        self.timer = QTimer()
        self.timer.timeout.connect(self.update)

        self.ui()

    def ui(self):
        """ Contains all UI things """
        # image label
        self.img_label = QLabel(self)
        self.img_label.setGeometry(0, 0, self.img_width, self.img_height)

        self.show()

    def update(self):
        """ update frames """
        pass

    def save_img(self):
        """ Save image from camera """
        pass

    def record(self):
        """ Record video """
        pass


# run
app = QApplication(sys.argv)
win = Window()
sys.exit(app.exec_())
