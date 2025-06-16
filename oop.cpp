#include <bits/stdc++.h>
using namespace std;
// give an abstract class
class Shape
{
public:
    virtual void draw() = 0;
};

// give a concrete class
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "drawing rectangle" << endl;
    }
};

// give a concrete class
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing circle" << endl;
    }
};

int main()
{
    Shape *s1 = new Rectangle();
    s1->draw();
    delete s1;
    Rectangle r;
    r.draw();
    return 0;
}