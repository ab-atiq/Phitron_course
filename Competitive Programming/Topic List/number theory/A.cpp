#include <bits/stdc++.h>
using namespace std;

long int countDivisor(long int num)
{
    int s, count = 0;
    for (long long int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count += 2;
        }
        s = i;
        if (s * s == num)
        {
            count--;
        }
    }
    return count;
}

int main()
{
    long long int LB, UB, TC, countMax, ans;
    cin >> TC;
    for (int iter = 0; iter < TC; iter++)
    {

        cin >> LB >> UB;
        countMax = countDivisor(LB);
        ans = LB;
        for (long long int j = LB + 1; j <= UB; j++)
        {
            long long int k = countDivisor(j);
            if (k > countMax)
            {
                countMax = k;
                ans = j;
            }
        }

        cout << "Between " << LB << " and " << UB << ", " << ans << " has a maximum of " << countMax << " divisors." << endl;
    }
    return 0;
}