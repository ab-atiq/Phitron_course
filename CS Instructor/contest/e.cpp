#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate the sum of subarray goodness
long long sum_of_goodness(int n, const vector<int> &arr)
{
    long long total_goodness = 0;

    // Iterate through each element and calculate its contribution
    for (int i = 0; i < n; ++i)
    {
        long long left_length = i + 1;  // Number of subarrays starting at or before i
        long long right_length = n - i; // Number of subarrays ending at or after i
        long long contribution = (1LL * arr[i] * left_length % MOD * right_length) % MOD;
        total_goodness = (total_goodness + contribution) % MOD;
    }

    return total_goodness;
}

int main()
{
    int n;
    cin >> n; // Input size of array
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i]; // Input elements of array
    }

    // Output the result
    cout << sum_of_goodness(n, arr) << endl;
    return 0;
}
