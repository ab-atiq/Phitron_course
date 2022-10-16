#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout << "Sum is: " << sum << endl;
    
    int j=0, sum2 = 0;
    while (j < 10)
    {
        cout << j << " ";
        sum2 += j;
        j++;
    }
    cout <<"Sum is: "<< sum2 << endl;
    return 0;
}