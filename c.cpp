#include <iostream>
using namespace std;

class Search
{
public:
    int linearSearch(int arr[], int len, int find)
    {
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == find)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    int arr[] = {10, 20, 40, 52, 11, 33};
    int len = sizeof(arr) / sizeof(arr[0]);
    int find = 58;
    Search s;
    int result = s.linearSearch(arr, len, find);
    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found in " << result << " index" << endl;
    return 0;
}