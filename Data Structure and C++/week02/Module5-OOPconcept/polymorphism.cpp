#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
    int add(int x, int y)
    {
        return x + y;
    }
    double add(double x, double y)
    {
        return x + y;
    }
    void add(char x, char y)
    {
        cout << x << "+" << y << endl;
    }
};

int main()
{
    Example ex;
    cout << ex.add(2, 3) << endl;
    cout << ex.add(2.5, 3.5) << endl;
    ex.add('a', 'b');
    return 0;
}