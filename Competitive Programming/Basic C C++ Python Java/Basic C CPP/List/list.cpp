#include <iostream>
#include <list>
using namespace std;

void showList(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l = {8, 9, 1, 2, 7, 3, 4, 5, 6, 10};
    showList(l);
    l.reverse(); // reverse full list
    showList(l);
    l.sort(); // sort all items
    showList(l);

    return 0;
}