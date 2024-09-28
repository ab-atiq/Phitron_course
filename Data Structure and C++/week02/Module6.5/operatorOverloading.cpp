#include <bits/stdc++.h>
using namespace std;
class Example
{
public:
    int x;
    Example(int a)
    {
        x = a;
    }
    // first choice: two object value sum
    // Example operator+(Example obj) // operator+ means plus operator use. obj is parameter of Example class.
    // {
    //     // cout<<x<<" "<<obj.x<<endl;
    //     Example ans(0);
    //     ans.x = x + obj.x;
    //     return ans; // 'Example' type return type
    // }

    // second choice
    int operator+(Example obj)
    {
        return x + obj.x;
    }
};
int main()
{
    Example a(10), b(20), c(30);
    // first choice
    // Example ans = a + b;
    // cout << ans.x << endl;
    // Example ans2 = ans + c;
    // cout << ans2.x << endl;

    // second choice
    int retSum = a + b;
    cout << retSum << endl;
    Example ansObj(retSum);
    int retSum2 = ansObj + c;
    cout << retSum2 << endl;
    return 0;
}