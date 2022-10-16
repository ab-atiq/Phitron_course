#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char arr[n], res[n / 2], ans[n / 2];
        cin >> arr;
        // cout << arr << endl;
        int count = 0;
        for (int j = 0; j < n; j = j + 2)
        {
            if ((arr[j] == 'R' && arr[j + 1] == 'B') || (arr[j] == 'B' && arr[j + 1] == 'R'))
            {
                res[count] = 'P';
                count++;
            }
            else if ((arr[j] == 'R' && arr[j + 1] == 'G') || (arr[j] == 'G' && arr[j + 1] == 'R'))
            {
                res[count] = 'Y';
                count++;
            }
            else if ((arr[j] == 'B' && arr[j + 1] == 'G') || (arr[j] == 'G' && arr[j + 1] == 'B'))
            {
                res[count] = 'C';
                count++;
            }
            else if (arr[j] == arr[j + 1])
            {
                continue;
            }
            else if ((arr[j] == 'R' || arr[j] == 'G' || arr[j] == 'B') && arr[j + 1] == '\0')
            {
                res[count] = arr[j];
                count++;
            }
        }
        int ansCnt = 0;
        for (int k = 0; k < count; k += 2)
        {
            // if (res[k] >= 'A' && res[k] <= 'Z' && res[k + 1] >= 'A' && res[k + 1] <= 'Z')
            // {

                if (res[k] == res[k + 1])
                    continue;
                else
                {
                    ans[ansCnt] = res[k];
                    ansCnt++;
                    ans[ansCnt] = res[k + 1];
                    ansCnt++;
                }
                // cout << res[k] << res[k + 1] << endl;
            }
        // }
        for (int m = 0; m < ansCnt; m++)
        {
            if (ans[m] >= 'A' && ans[m] <= 'Z')
                cout << ans[m];
        }
        cout << endl;
    }
    return 0;
}
