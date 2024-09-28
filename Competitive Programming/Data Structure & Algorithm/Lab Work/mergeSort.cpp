// *** Merge Sort ***

#include <iostream>

using namespace std;

void merge(int arr[], int p, int q, int r) {
  // Find sizes of two subarrays to be merged
  int n1 = q - p + 1;
  int n2 = r - q;

  /* Create temp arrays */
  int L[n1], M[n2];

  /*Copy data to temp arrays*/
  for (int i = 0; i < n1; ++i)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; ++j)
    M[j] = arr[q + 1 + j];


  /* Merge the temp arrays */

  // Initial indexes of first and second subarrays
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  /* Copy remaining elements of L[] if any */
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  /* Copy remaining elements of M[] if any */
  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    /* Find the middle point */
    int m = (l + r) / 2;

    /* Sort first and second halves */
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    /* Merge the sorted halves */
    merge(arr, l, m, r);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; ++i)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr[] = {10, 2, 9, 7, 8, 3, 5, 4, 6, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Unsorted Array: ";
  printArray(arr, n);

  mergeSort(arr, 0, n - 1);

  cout << "Sorted array in ascending order: ";
  printArray(arr, n);

  return 0;
}