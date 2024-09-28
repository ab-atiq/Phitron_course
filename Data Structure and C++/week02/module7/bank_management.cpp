#include <bits/stdc++.h>
using namespace std;
class Account
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
    Account(string account_holder, string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand();
        // account_number = rand() % 100000000;
        this->balance = 0;
        // cout << "Name: " << account_holder << endl
        //      << "Address: " << address << endl
        //      << "Age: " << age << endl
        //      << "Password: " << password << endl;
        cout << "Your bank account number is: " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
            // return this->balance;
        }
    }
    void add_money(string pass, int money)
    {
        if (this->balance < 0)
        {
            cout << "invalid balance" << endl;
            return;
        }
        if (this->password == pass)
        {
            this->balance += money;
            cout << "Add money successfully" << endl;
        }
        else
        {
            cout << "Password didn't match." << endl;
        }
    }
    void deposit_money(string pass, int money)
    {
        if (money < 0)
        {
            cout << "invalid balance" << endl;
            return;
        }
        if (this->balance < money)
        {
            cout << "insufficient balance" << endl;
            return;
        }
        if (this->password == pass)
        {
            this->balance -= money;
            cout << "Deposit money successfully" << endl;
        }
        else
        {
            cout << "Password didn't match." << endl;
        }
    }

protected:
    int balance;

private:
    string password;

    friend class MyCash;
};

class MyCash
{
protected:
    int balance;

public:
    MyCash()
    {
        this->balance = 0;
    }
    void add_money_from_bank(Account *myAcc, int amount, string pass)
    {
        if (amount < 0)
        {
            cout << "invalid balance" << endl;
            return;
        }
        if (myAcc->balance < amount)
        {
            cout << "insufficient balance" << endl;
            return;
        }
        if (myAcc->password == pass)
        {
            this->balance += amount;
            myAcc->balance -= amount;
            cout << "Add Money From Bank Successfully!" << endl;
        }
        else
        {
            cout << "Password didn't match!" << endl;
        }
    }
    int show_balance()
    {
        return this->balance;
    }
};

Account *create_account()
{
    string account_holder, address, password;
    int age;
    cout << "Please give your name, address, age, password respectively: ";
    cin >> account_holder >> address >> age >> password;
    // int *a = new a[];
    Account *my_acc = new Account(account_holder, address, age, password);
    return my_acc;
}

void addMoney(Account *myAcc)
{
    // when you will add money first check password. if match then add money. otherwise show your password didn't match.
    string password;
    int money;
    cout << "Add money: ";
    cin >> password >> money;
    myAcc->add_money(password, money);
    cout << "Your new balance: " << myAcc->show_balance(password) << endl;
}

void depositMoney(Account *myAcc)
{
    // when you will add money first check password. if match then add money. otherwise show your password didn't match.
    string password;
    int money;
    cout << "Deposit money: ";
    cin >> password >> money;
    myAcc->deposit_money(password, money);
    cout << "Your new balance: " << myAcc->show_balance(password) << endl;
}

void addMoneyFromBank(MyCash *myCash, Account *myAcc)
{
    string password;
    int money;
    cout << "Add money from bank: ";
    cin >> password >> money;
    myCash->add_money_from_bank(myAcc, money, password);
    cout << "Your Bank account balance: " << myAcc->show_balance(password) << endl;
    cout << "Your Cash balance: " << myCash->show_balance() << endl;
}

int main()
{
    Account *myAccount = create_account();
    // if (myAccount->show_balance("abc") == -1) // default pass input for child
    // {
    //     cout << "Password didn't match: " << endl;
    // }
    // else
    // {
    //     cout << "Your band account is: " << myAccount->show_balance("abc") << endl;
    // }
    addMoney(myAccount);
    depositMoney(myAccount);

    MyCash *myCash = new MyCash();
    addMoneyFromBank(myCash, myAccount);
    return 0;
}