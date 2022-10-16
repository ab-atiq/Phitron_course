class Phone:
    color = "Golden"
    weight = "130gm"
    price = 15000

    # default constructor
    def __init__(self) -> None:
        print("People can call another.")

    # Phone method no parameter
    def Phone(self):
        print("ring ring ring")

    # SMS method with two parameter
    def send_sms(self, number, text):
        sms = f'sending: {text}\nto: {number}'
        return sms


phone = Phone()
phone.Phone()
ret_sms = phone.send_sms("01724362536", 'I missed to miss you')
print(ret_sms)
