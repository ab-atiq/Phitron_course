#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Y, sum = 1;
    cin >> Y;
    if (Y == 1 || Y == 0)
        cout << 1 << endl;
    else
    {
        for (int i = 0; i < Y - 1; i++)
        {
            sum = pow(2, i);
        }
        // cout << sum << endl;
        int res = sum * pow(2, Y - 1);
        cout << res << endl;
    }

    return 0;
}
