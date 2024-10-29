#include <bits/stdc++.h>
#include <vector>
using namespace std;
void getIndex(vector<int> v, int K)
{
    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {

        // calculating the index
        // of K
        int index = it - v.begin();
        cout << index << endl;
    }
    else
    {
        // If the element is not
        // present in the vector
        cout << "-1" << endl;
    }
}
int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
    v.resize(2);

    int K = 54;
    getIndex(v, K);

    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << endl;

    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << endl;
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}