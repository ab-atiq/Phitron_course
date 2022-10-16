#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Please, Enter array size: ";
    cin >> size;
    int arr[size];
    cout << "Enter array element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    char c;
    cout << "Do you want to search? (Y/N) : ";
    cin >> c;
    while (toupper(c) == 'Y')
    {
        int search_element, flag = 0;
        cout << "Enter element which you want to search: ";
        cin >> search_element;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == search_element)
            {
                cout << "Found element in index: " << i << " and position: " << i + 1 << endl;
                flag++;
                // break; // if all element are unique.
            }
        }
        if (flag == 0)
        {
            cout << "Not found" << endl;
        }
        // again search or not
        cout << "Do you want to search? (Y/N) : ";
        cin >> c;
    }
    return 0;
}