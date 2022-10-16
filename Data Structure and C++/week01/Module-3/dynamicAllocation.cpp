#include <bits/stdc++.h>
using namespace std;

int main()
{
    // malloc declare in c
    int *ptr = (int *)malloc(10 * sizeof(int)); // malloc declare garbage value
    int *ptr2 = (int *)calloc(10, sizeof(int)); // calloc declare 0 value all element
    // show default memory element
    for (int i = 0; i < 10; i++)
    {
        cout << ptr[i] << " " << ptr2[i] << endl;
    }
    // free(ptr2); // delete ptr2 from heap memory

    // create dynamic heap allocation using c++
    // int *ptr3 = new int; // simply create dynamic array. But it is not necessary create only one variable. we can declare one variable use (int ptr3;). Normally dynamic array use for multiple variable.
    // int *ptr3 = new int[10]; // here store 10 garbage value
    // int *ptr3 = new int[10]{0}; // all value will 0.

    int *ptr3 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // delete ptr3; // if delete before traverse, we will see garbage value or run time error.
    for (int i = 0; i < 10; i++)
    {
        cout << ptr3[i] << " ";
    }
    // delete from memory
    delete ptr3;
    return 0;
}