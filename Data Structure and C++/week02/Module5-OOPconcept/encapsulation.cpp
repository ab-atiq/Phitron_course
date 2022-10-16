#include <bits/stdc++.h>
using namespace std;
// create class
class Student
{
public:             // access modifier or specifier
    char name[100]; // it is class member
    int roll;       // it is class member

protected:
    char address[100];
    int balance;

private:
    int password;
};

int main()
{
    Student atiq; // create object

    strcpy(atiq.name, "Atiqur Rahman");
    atiq.roll = 1905004;
    cout << "Name: " << atiq.name << endl
         << "Roll number: " << atiq.roll << endl;

    // atiq.balance = 100; // inaccessible

    return 0;
}