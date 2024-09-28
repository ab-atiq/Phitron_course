# pass / fail
mark = int(input("Enter your mark: "))
if 80 <= mark <= 100:
    print("WOW!!! You get A+ in examination.")
    print("congratulations, dear")
elif 80 > mark >= 70:
    print("WOW!!! You get A in examination.")
    print("congratulations, dear")
elif 70 > mark >= 60:
    print("WOW!!! You get A- in examination.")
    print("congratulations, dear")
elif 60 > mark >= 50:
    print("WOW!!! You get B in examination.")
    print("congratulations, dear")
elif 50 > mark >= 40:
    print("WOW!!! You get C in examination.")
    print("congratulations, dear")
elif 40 > mark >= 33:
    print("WOW!!! You get D in examination.")
    print("congratulations, dear")
elif 0 <= mark < 33:
    print("So sad!!! Fail in the examination.")
else:
    print("Please, input 1 to 100.")