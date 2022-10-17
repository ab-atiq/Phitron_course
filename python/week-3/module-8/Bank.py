class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.max_withdraw = 10000
        self.min_withdraw = 100

    def get_balance(self):
        return self.balance

    def withdraw(self, amount):
        if amount < self.min_withdraw:
            return f'You can not withdraw money. Please, give amount greater than {self.min_withdraw}'
        elif amount > self.max_withdraw:
            return f'You can not withdraw money. Please, give amount less than {self.max_withdraw}'
        elif amount > self.balance:
            return f'You can not withdraw money. Please, give amount less than {self.balance}'
        else:
            self.balance -= amount
            return f'Your withdraw is successfully complete. Please, take money {amount}'

    def deposit(self, amount):
        self.balance += amount
        return f'Your deposit amount {amount} is successfully complete.'


my_bank = Bank(8000)
reply = my_bank.withdraw(1100)
print(reply)
print(my_bank.get_balance())

reply = my_bank.deposit(20000)
print(reply)
print(my_bank.get_balance())
