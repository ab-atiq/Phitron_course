#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K, sum = 0;
    cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // sorting using STL sort() function
    sort(arr, arr + N);
    // sum of K numbers from last to first
    for (int i = N-1; 0 <= i && K > 0; i--, K--)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}