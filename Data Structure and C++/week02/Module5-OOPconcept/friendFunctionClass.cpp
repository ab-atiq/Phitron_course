#include <bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int taka;

protected:
    int password;

public:
    Parent(int tk, int ps)
    {
        taka = tk;
        password = ps;
    }
    friend class AbburBondu;                  // friend class
    friend void tellSecret(Parent *ptrBondu); // friend function
};

// friend class
class AbburBondu
{
public:
    void tellSecret(Parent *ptrBondu)
    {
        cout << ptrBondu->taka << endl; // we can not access pointer using dot (ptrBondu.taka).
        cout << ptrBondu->password << endl;
    }
};

// friend function
void tellSecret(Parent *ptrBondu)
{
    cout << ptrBondu->taka << endl;
    cout << ptrBondu->password << endl;
}

int main()
{
    Parent pt(2000, 12345);
    AbburBondu bondu;
    bondu.tellSecret(&pt);
    // friend function call
    tellSecret(&pt);
    return 0;
}