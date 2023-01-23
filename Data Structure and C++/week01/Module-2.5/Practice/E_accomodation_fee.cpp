// consecutive accommodation fee
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, x, y, firstSomeNight, lastSomeNight, totalFee;
    cin >> n >> k >> x >> y;
    if (n >= k)
    {
        firstSomeNight = k * x;
        lastSomeNight = (n - k) * y;
    }
    else
    {
        firstSomeNight = n * x;
        lastSomeNight = 0;
    }
    totalFee = firstSomeNight + lastSomeNight;
    cout << totalFee << endl;
    return 0;
}