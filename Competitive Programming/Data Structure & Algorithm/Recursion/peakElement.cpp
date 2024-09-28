// find peak of an array using divide and conquer
#include <bits/stdc++.h>

using namespace std;

int peak(const vector<int> &arr, int i)
{
	if (i == arr.size() - 1)
	{
		return -1;
	}
	if (i == 0)
	{
		return peak(arr, i + 1);
	}
	if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
	{
		return i;
	}
	else
	{
		return peak(arr, i + 1);
	}
}

int main()
{
	vector<int> arr = {1, 2, 3, 7, 1};
	cout << arr[peak(arr, 0)];
	return 0;
}