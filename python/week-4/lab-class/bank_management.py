'''Manages Bank Account'''


class Account:
    accId = 1

    # input fixed as specific data type
    def __init__(self, name: str, age: int, nid_num: int, balance: int):
        self.name = name
        self.age = age
        self.nid_nim = nid_num
        self.balance = balance

        # create unique account id
        self.accountId = Account.accId
        Account.accId += 1

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        self.balance -= amount


acc1 = Account("Atiqur", 23, 159874, 500)
acc2 = Account("Abul", 32, 334234, 1000)
print(acc1.accountId)
print(acc2.accountId)
print("Account 1 balance: ", acc1.balance)
print("Account 2 balance: ", acc2.balance)

acc1.deposit(2000)
acc2.deposit(5000)
print("After deposit, account 1 new balance is: ", acc1.balance)
print("After deposit, account 2 new balance is: ", acc2.balance)

acc1.withdraw(1000)
acc2.withdraw(2000)
print("After withdraw, account 1 new balance is: ", acc1.balance)
print("After withdraw, account 2 new balance is: ", acc2.balance)
