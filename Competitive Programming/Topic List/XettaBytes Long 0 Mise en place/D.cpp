#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, u;
        cin >> n >> u;
        int arr[n+1] = {0};
        while (u--)
        {
            int l, r, val;
            cin >> l >> r >> val;

            // for (int i = l; i <= r; i++)
            // {
            //     arr[i] += val;
            // }

            arr[l] += val;
            arr[r + 1] -= val;
            // cout << "l: " << l << "r+1: " << r + 1 << endl
            //      << endl;
        }

        for (int i = 1; i < n; i++)
        {
            arr[i] += arr[i - 1];
        }

        int q;
        cin >> q;
        while (q--)
        {
            int idx;
            cin >> idx;
            cout << arr[idx] << endl;
        }
    }
    return 0;
}
