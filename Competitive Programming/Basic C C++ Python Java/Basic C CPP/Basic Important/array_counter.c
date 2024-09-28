#include <stdio.h>
int main()
{
    int arr[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 5, 4, 8, 9, 6, 7, 5, 4, 1, 5, 3, 5, 7, 5, 2, 3, 4};

    // counter method 1
    // though here present number 1-10
    for (int i = 1; i <= 10; i++)
    {
        int count = 0;
        // array contain 30 values
        for (int j = 0; j < 30; j++)
        {
            if (arr[j] == i)
            {
                count++;
            }
        }
        printf("%d value present in array %d times.\n", i, count);
    }

    // counter method 2
    // though here present 1-10 number. so, create a counter array size 11. Assign all counter array element 0.
    int counter[11]={0};
    for (int i = 0; i < 30; i++)
    {
        counter[arr[i]]++; // array er i no index er value er index increase in counter array.
    }
    // now print counter array elements
    for (int i = 1; i < 11; i++)
    {
        printf("%d value present in array %d times.\n", i, counter[i]);
    }
    return 0;
}
