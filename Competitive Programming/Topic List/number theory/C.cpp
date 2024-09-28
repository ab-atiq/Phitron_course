#include <bits/stdc++.h>
using namespace std;

#define MAX 15010
int prime_num[MAX] = {1};

int main()
{
    int n, a, k = 2;
    prime_num[1] = 2;
    while (k < MAX)
    {
        for (int i = 3;; i += 2)
        {
            int j, m = (int)sqrt(i) + 1;
            for (j = 2; j < m; j++)
            {
                if (i % j == 0)
                    break;
            }
            if (j >= m)
            {
                prime_num[k++] = i;
            }
            if (k >= MAX)
                break;
        }
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        cout << prime_num[a] << endl;
    }
    return 0;
}