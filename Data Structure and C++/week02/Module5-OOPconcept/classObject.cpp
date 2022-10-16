#include <bits/stdc++.h>
using namespace std;
// create class
class Student
{
public:             // access modifier or specifier
    char name[100]; // it is class member
    int roll;       // it is class member
};
int main()
{
    Student atiq; // create object
    // cin>>atiq.name;
    cin.getline(atiq.name, 100);
    // strcpy(atiq.name, "Atiqur Rahman");
    atiq.roll = 1905004;
    cout << "Name: " << atiq.name << endl
         << "Roll number: " << atiq.roll << endl;
    return 0;
}