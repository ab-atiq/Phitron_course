#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, t(1);
    for (scanf("%d", &tc); tc; ++t, --tc)
    {
        long long piaju, left;

        scanf("%lld%lld", &piaju, &left);

        if (left * 2 >= piaju)
        {
            printf("Case %d: impossible\n", t);
            continue;
        }
        printf("Case %d:", t);

        long long piajuEaten = piaju - left;
        // cout<<piajuEaten<<endl;

        vector<long long> possibleValueOfQ;

        // find all the divisors of piajuEaten
        for (long long i = 1; i * i <= piajuEaten; ++i)
            if (piajuEaten % i == 0)
            {
                possibleValueOfQ.push_back(i);

                if (piaju / i != i)
                    possibleValueOfQ.push_back(piajuEaten / i);
            }

        // sort the divisors to print the answer in ascending order
        sort(possibleValueOfQ.begin(), possibleValueOfQ.end());

        // print the divisors
        for (auto x : possibleValueOfQ)
            if (x > left)
                printf(" %lld", x);

        printf("\n");
    }

    return 0;
}