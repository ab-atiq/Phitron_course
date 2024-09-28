#include <bits/stdc++.h>
using namespace std;
class Parent
{

protected:
    int y;

private:
    int z;

public:
    int x;
    Parent(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
};

// class Child : private Parent // here private define - Parent class public member in Child class will private.
class Child : public Parent // here public define - Parent class public member in Child class will public.
{
public:
    int xx;
    // child + parent constructor use
    Child(int aa, int a, int b, int c) : Parent(a, b, c)
    {
        xx = aa;
    }
    void tellMe()
    {
        // y is protected, so only inherit class can access protected variable.
        cout << "Protected Value is: " << y << endl;
    }
};

int main()
{
    Parent pt(50, 60, 70);
    cout << pt.x << endl; // y is protected, z is private
    Child cd(100, 10, 20, 30);
    cout << cd.xx << endl; // cd.xx is public for instance of Child class.
    cout << cd.x << endl;  // we can not access cd.y and cd.z. because of, they are private and protected.
    cd.tellMe();
    return 0;
}