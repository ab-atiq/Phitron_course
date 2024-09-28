#include <iostream>
using namespace std;
bool CheckSortStriclyIncrease(int arr[], int idx, int len)
{
    // if len-1 is not provide then last call will be redundant which may array out of bound error.
    if (idx == len-1) 
    {
        return true;
    }
    if (arr[idx] >= arr[idx + 1])
    {
        return false;
    }
    // if 14 line is not provide return then some case may ambiguous.
    return CheckSortStriclyIncrease(arr, idx + 1, len);
}

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10] = {1, 2, 3, 4, 5, 6, 6, 8, 9, 10};
    bool chk = CheckSortStriclyIncrease(arr, 0, 10);
    if (chk)
        cout << "This sorted array is stricly increasing." << endl;
    else
        cout << "Not stricly increasing." << endl;
    return 0;
}