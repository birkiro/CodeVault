"""Module providing functionality for text-to-speech"""
import pyttsx3
from PyPDF2 import PdfReader

OPEN_PATH = r"C:\git\github\CodeVault\Python\PlayGround\test.pdf"

with open(OPEN_PATH, 'rb') as myfile:
    pdfreader = PdfReader(myfile)
    speaker = pyttsx3.init()

    for page_num, page in enumerate(pdfreader.pages):
        text = page.extract_text()
        clean_text = text.strip().replace('\n', ' ')
        print(clean_text)

    SAVE_PATH = r"C:\git\github\CodeVault\Python\PlayGround\speachfromtext.mp3"
    speaker.save_to_file(clean_text, SAVE_PATH)
    speaker.runAndWait()

    speaker.stop() # \nEOF
