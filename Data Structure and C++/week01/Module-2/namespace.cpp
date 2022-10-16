#include <bits/stdc++.h>
using namespace std;

// using namespace one; // it will not work because of we declare namespace after declaration.
namespace one
{
    int x = 20;
    void fun()
    {
        cout << "I am function one!!!" << endl;
    }
}

namespace two
{
    int x = 50, y = 100;
    void fun()
    {
        cout << "I am function two!!!" << endl;
    }
}

using namespace one;
using namespace two;

int main()
{
    one::fun();
    cout << "Namespace two x value is: " << two::x << endl;
    cout << y << endl;

    return 0;
}