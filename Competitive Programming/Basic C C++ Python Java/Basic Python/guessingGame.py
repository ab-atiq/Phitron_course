import random
from random import randint

n = int(input("Enter a number: "))
# guessNumber = random.randint(1, 6)
# guessNumber = random.random()*100
guessNumber = int(random.random()*100)
if n == guessNumber:
    print("you are won!")
else:
    print("you loss")
    print("Random number is: ", guessNumber)
