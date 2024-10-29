#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s = {1, 10, 8, 3, 4, 5}; // automatically data will sorted ascending order
    s.insert(50);                     // O(log N)
    int res = s.erase(50);            // O(log N)
    cout << "Return erase: " << res << endl;
    set<int, greater<int>> rev_s = {3, 5, 1, 6, 2}; // We can use any comparator in place of greater<data_type> to give set a custom order sorting.
    set<char> setOfChar;
    setOfChar.insert('a');
    setOfChar.insert('b');
    for (int i : s) // for-each loop of set of integer
    {
        cout << i << endl;
    }
    for (auto &ch : setOfChar) // for-each loop of set of charater
    {
        cout << ch << endl;
    }
    cout << endl;
    set<int>::iterator it1;
    for (auto it = setOfChar.begin(); it != setOfChar.end(); it++) // for loop using iterator
    {
        cout << *it << endl;
    }
    return 0;
}