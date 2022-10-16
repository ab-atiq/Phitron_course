#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter number of days: ";
        cin >> n;
        int earn[n];
        // array input
        for (int i = 0; i < n; i++)
        {
            cin >> earn[i];
        }
        int spend[n];
        // array input
        for (int i = 0; i < n; i++)
        {
            cin >> spend[i];
        }
        int q;
        cout << "Enter query: ";
        cin >> q;
        while (q--)
        {
            int day, er = 0, spd = 0;
            cin >> day;
            for (int i = 0; i <= day; i++)
            {
                er += earn[i];
                spd += spend[i];
            }
            int chk = er - spd;
            if (chk >= 0)
            {
                cout << "Output: " << 1 << endl;
            }
            else
            {
                cout << "Output: " << 0 << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
