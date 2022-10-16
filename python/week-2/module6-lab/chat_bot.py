"""  chatbot.

steps:
    1. input/listen
    2. process/decide
    3. output/talk back

"""

greet_words = ['hi', 'hello', 'yo', 'hey']
bye_words = ['bye', 'tata', 'hasta la vista']
bad_words = ['bad', 'pocha', 'dog']


def listen():
    return input("Say something: ")


def decide(command):
    command = command.lower()
    brocken_word = command.split(" ")
    for word in brocken_word:
        if word in greet_words:
            talkback("Hi guy")
            break
        elif word in bye_words:
            talkback("bye bye. see you soon.")
            break
        elif word in bad_words:
            talkback("You are a bad guy. Behave yourself.")
            break


def talkback(response):
    print(response)


while True:
    command = listen()
    decide(command)
