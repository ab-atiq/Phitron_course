#include <bits/stdc++.h>
using namespace std;
int arr[20 * 100000 / 2 + 5];
int numbers;
int weight[25];
int sum;
int main()
{
    cin >> numbers;
    int sum = 0;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < numbers; i++)
    {
        cin >> weight[i];
        sum += weight[i];
    }
    sort(weight, weight + numbers);
    for (int i = 0; i < numbers; i++){
        for (int j = sum / 2; j >= weight[i]; j--){
            arr[j] = max(arr[j], arr[j - weight[i]] + weight[i]);
        }
    }
    cout << sum - 2 * arr[sum / 2] << endl;
}