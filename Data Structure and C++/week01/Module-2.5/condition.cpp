#include <bits/stdc++.h>
using namespace std;
int main()
{
    // check which number is bigger or smaller.
    int a, b;
    cout<<"Enter a two number: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "A is biggest number" << endl;
    }
    else if (a < b)
    {
        cout << "B is biggest number" << endl;
    }
    else
    {
        cout << "Two number is equal"<<endl;
    }

    // check character is vowel or consonant.
    char c;
    cout<<"Enter a character: ";
    cin >> c;

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << c << " character is vowel"<< endl;
    }
    else
    {
        cout << "Character is consonant"<< endl;
    }

    // check digit name
    int n;
    cout<<"Enter a digit: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "One"<<endl;
        break;

    case 2:
        cout << "Two"<<endl;
        break;

    case 3:
        cout << "Three"<<endl;
        break;

    case 4:
        cout << "Four"<<endl;
        break;

    case 5:
        cout << "Five"<<endl;
        break;

    case 6:
        cout << "Six"<<endl;
        break;

    case 7:
        cout << "Seven"<<endl;
        break;

    case 8:
        cout << "Eight"<<endl;
        break;

    case 9:
        cout << "Nine"<<endl;
        break;

    default:
        cout << "Not digit"<<endl;
        break;
    }

    return 0;
}