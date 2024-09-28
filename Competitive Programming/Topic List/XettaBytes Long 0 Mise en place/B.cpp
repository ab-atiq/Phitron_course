#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums, query;
    cin >> nums;
    int arrNums[nums];
    for (int i = 0; i < nums; i++)
    {
        cin >> arrNums[i];
    }
    cin >> query;
    while (query--)
    {
        int i, j, cumulative_sum = 0;
        cin >> i >> j;
        for (int m = i; m <= j; m++)
        {
            cumulative_sum += arrNums[m];
        }
        cout << cumulative_sum << endl;
    }
    return 0;
}