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
    ll evens = n / 2;
    ll odds = n - evens - 1;
    ll ans = (odds * (odds - 1)) / 2 + (evens * (evens - 1)) / 2;
    cout << ans << endl;
    return 0;
}
