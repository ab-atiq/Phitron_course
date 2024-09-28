#include <bits/stdc++.h>
using namespace std;
// create class
class Example
{
private:
    int id;
    int pass;

public:
    // int x, y, z;
    // // create constructor. class and constructor name must be same.
    // Example(int a, int b, int c)
    // {
    //     x = a;
    //     y = b;
    //     z = c;
    // }

    // setter and getter use
    // set password
    Example(int p)
    {
        pass = p;
    }
    void setter(int i, int p)
    {
        if (pass == p)
        {
            id = i;
        }
        else
        {
            cout << "Password didn't match in setter" << endl;
        }
    }
    int getter(int p)
    {
        if (pass == p)
        {
            return id;
        }
        else
        {
            cout << "Password didn't match in getter" << endl;
            return -1;
        }
    }
};
int main()
{
    // Example e(10, 20, 30); // create object and call constructor
    // cout << e.x << " " << e.y << " " << e.z << endl;

    Example e(12345); // initially set password
    e.setter(1905004, 12345); // change password using setter
    cout << e.getter(12345) << endl; // get the password

    return 0;
}