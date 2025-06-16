// --------------------------------------//
//           A.B Atiqur Rahman           //
// --------------------------------------//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll cnt1 = 0, cntn1 = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            cnt1++;
        }
        else if (x == -1)
        {
            cntn1++;
        }
    }
    cout << (ll)ceil(abs(cnt1 - cntn1) / 2.0) << endl;
    return 0;
}
