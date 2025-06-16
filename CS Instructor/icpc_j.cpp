#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

ld higher = 20'000;

ld cal_tax(ld salary)
{
    ld low_tax = min((ld)12500, salary * 0.5) * 0.4;
    ld sl = min((ld)50000, salary);
    salary -= sl;
    return low_tax + (sl * 0.4) + (salary * 0.45);
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ld tax;
        cin >> tax;
        ld fixed_salary = 0;
        if (tax > 0)
        {
            fixed_salary += 12500;
        }

        fixed_salary += min((ld)37500, tax * 5);
        tax -= min((ld)7500, tax);

        fixed_salary += min((ld)50'000, tax * 2.5);
        tax -= min(higher, tax);

        if (tax > 0)
        {
            ld start = 0, end = 1e10;
            bool taken = false;
            while (abs(start - end) > 0.000'0001)
            {
                ld mid = (start + end) / 2;
                ld result = cal_tax(mid);
                if (abs(result - tax) <= 0.000'000'01)
                {
                    fixed_salary += mid;
                    taken = true;
                    break;
                }
                if (result < tax)
                {
                    start = mid;
                }
                else
                {
                    end = mid;
                }
            }
            if (!taken)
                fixed_salary += start;
        }
        printf("%0.10Lf\n", fixed_salary);
    }
    return 0;
}
