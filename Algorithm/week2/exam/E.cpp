#include <bits/stdc++.h>
using namespace std;
string int_to_binary(int n)
{
    if (n == 0)
    {
        return "0";
    }
    else if (n == 1)
    {
        return "1";
    }
    else
    {
        return int_to_binary(n / 2) + to_string(n % 2);
    }
}

int main()
{
    int num;
    cout << "Enter decimal number: ";
    cin >> num;
    string retBinary = int_to_binary(num);
    cout << "Binary number is: " << retBinary << endl;
    return 0;
}
