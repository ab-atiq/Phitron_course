#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, distance;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    // long distance and sort distance difference is the minimum distance.
    distance = arr[N - 1] - arr[0];
    cout << distance << endl;

    return 0;
}