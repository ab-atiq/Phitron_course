#include <bits/stdc++.h>
using namespace std;
void print_combinations(int n, vector<int> prefix = {})
{
    if (n == 0)
    {
        cout << "{ ";
        for (auto x : prefix)
        {
            cout << x << ", ";
        }
        cout << "} " << endl;
    }
    else
    {
        for (int i = 1; i <= min(n, prefix.empty() ? n : prefix.back()); i++)
        {
            prefix.push_back(i);
            print_combinations(n - i, prefix);
            prefix.pop_back();
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number which you want to combinations: ";
    cin >> n;
    print_combinations(n);
    return 0;
}
