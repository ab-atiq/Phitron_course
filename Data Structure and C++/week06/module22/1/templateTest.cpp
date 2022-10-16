#include <bits/stdc++.h>
using namespace std;

template <typename T>
T maxNum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    // functionName <dataType> (parameter)
    cout << maxNum<int>(2, 7) << endl;
    cout << maxNum<float>(2.5, 7.5) << endl;
    cout << maxNum<char>('a', 'z') << endl;
    return 0;
}