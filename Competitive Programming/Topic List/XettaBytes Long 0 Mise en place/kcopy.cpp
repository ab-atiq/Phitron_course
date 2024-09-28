#include <bits/stdc++.h>
using namespace std;
int cas = 0;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cas << ": ";
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        /**Starting Binary Search**/
        int L = 0;
        int ans;
        int R = INT_MAX / 2;
        while (L < R)
        {
            int M = L + (R - L) / 2;
            int cnt = 0, sum = 0;
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > M)
                { // 1st condition of binary search
                    L = M + 1;
                    ok = false;
                    break;
                }
                /**Counting the number of containner we need**/

                sum += a[i]; // sum is how much we fill of a M size containner
                if (sum == M)
                {
                    sum = 0;
                    cnt++; // cnt is the number of containner
                }
                else if (sum > M)
                {
                    cnt++;
                    sum = a[i];
                }
            }
            if (!ok)
                continue; // if any of vessel is greater than M

            if (sum)
                cnt++;

            if (cnt > m)
            { // 2nd condition
                L = M + 1;
            }
            else
            { // 3rd Condition
                R = M;
            }
            ans = M;
            if (L == R)
                ans = L;
        }
        /**Ending the binary search part**/
        cout << ans << "\n";
    }
    return 0;
}