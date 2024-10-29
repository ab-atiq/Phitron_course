#include <iostream>
#include <set>
using namespace std;
// insert (x) – Inserts the element x in the multiset –> O(log N)
// clear () – Removes all the elements from the multiset –> O(N)
// erase(x) – Removes all the occurrences of x –> O(log N)
// count(K) - Total occurrence of x -> O(K + log(N)), where K is the total count of integers of the value passed.
// find(x) - find single item -> O(log(N)).
int main()
{
    multiset<int, greater<int>> ms = {10, 20, 30, 40, 50};
    ms.insert(10); // 10 will be added again to multiset unlike set.
    multiset<int, greater<int>>::iterator itr;
    for (itr = ms.begin(); itr != ms.end(); itr++)
        cout << *itr << " ";
    cout << endl;

    // copy all element from ms to ms1
    multiset<int> ms1(ms.begin(), ms.end());
    for (auto it : ms1)
    {
        cout << it << " ";
    }
    cout << endl;

    // remove all elements up to 30(means 30 will not delete)
    ms1.erase(ms1.begin(), ms1.find(30));
    ms1.erase(30);           // remove all elements with 30
    ms1.erase(ms1.find(50)); // remove 50
    for (multiset<int>::iterator it = ms1.begin(); it != ms1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // remove 50
    ms1.insert(50); // it will make 50 duplicate
    ms1.insert(50);
    int cnt = ms1.count(50); // count '50' number in multiset
    cout << "Total 50 present in multiset" << cnt << endl;

    int num = ms1.erase(50);
    cout << "Total '50' item removed: " << num << endl;

    return 0;
}