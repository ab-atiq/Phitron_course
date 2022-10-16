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
        char arr[n], res[n / 2];
        cin >> arr;
        cout << arr << endl;
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
            }
            else if ((arr[j] == 'R' || arr[j] == 'G' || arr[j] == 'B') && arr[j + 1] == '\0')
            {
                res[count] = arr[j];
                count++;
            }
        }
        for (int k = 0; k < count; k++)
        {
            cout << res[k];
        }
        cout << endl;
    }
    return 0;
}
