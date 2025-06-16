// --------------------------------------//
//           A.B Atiqur Rahman           //
// --------------------------------------//
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q;
    cin >> q;
    map<ll, ll> freq;
    multiset<pair<ll, ll>> s;
    map<ll, set<ll>> freqMap;

    while (q--)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll x;
            cin >> x;
            if (freq.find(x) == freq.end())
            {
                freq[x] = 1;
                s.insert({1 * x, 1});
                freqMap[1].insert(x);
            }
            else
            {
                ll prevFreq = freq[x];
                freq[x]++;
                s.erase(s.find({x * prevFreq, prevFreq}));
                s.insert({(prevFreq + 1) * x, prevFreq + 1});
                freqMap[prevFreq].erase(x);
                freqMap[prevFreq + 1].insert(x);
            }
        }
        else
        {
            if (s.empty())
            {
                cout << "empty" << endl;
                continue;
            }
            ll mxFreq = (--s.end())->second;
            ll toErase = *(--freqMap[mxFreq].end());
            cout << toErase << endl;
            if (mxFreq == 1)
            {
                freq.erase(toErase);
                s.erase(s.find({mxFreq * toErase, mxFreq}));
                freqMap[mxFreq].erase(toErase);
            }
            else
            {
                freq[toErase]--;
                s.erase(s.find({mxFreq * toErase, mxFreq}));
                s.insert({(mxFreq - 1) * toErase, mxFreq - 1});
                freqMap[mxFreq].erase(toErase);
                freqMap[mxFreq - 1].insert(toErase);
            }
        }
    }
    return 0;
}