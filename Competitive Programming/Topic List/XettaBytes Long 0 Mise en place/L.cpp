#include <bits/stdc++.h>
using namespace std;

int f91(int n)
{
    if (n <= 100)
    {
        return f91(f91(n + 11));
    };
    // if (n >= 101)
    // {
    return n - 10;
    // };
};

int main()
{
    int num;
    scanf("%d", &num);
    while (num != 0)
    {
        int ret;
        ret = f91(num);
        cout << "f91(" << num << ") = " << ret << endl;
        scanf("%d", &num);
    }

    return 0;
}