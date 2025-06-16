#include <iostream>
using namespace std;
bool CheckSortStrictlyIncrease(int arr[], int idx, int len)
{
    // if len-1 is not provide then last call will be redundant which may array out of bound error.
    if (idx == len - 1)
    {
        return true;
    }
    if (arr[idx] >= arr[idx + 1])
    {
        return false;
    }
    // if 14 line is not provide return then some case may ambiguous.
    return CheckSortStrictlyIncrease(arr, idx + 1, len);
}

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10] = {1, 2, 3, 4, 5, 6, 6, 8, 9, 10};
    bool chk = CheckSortStrictlyIncrease(arr, 0, 10);
    if (chk)
        cout << "This sorted array is strictly increasing." << endl;
    else
        cout << "Not strictly increasing." << endl;
    return 0;
}