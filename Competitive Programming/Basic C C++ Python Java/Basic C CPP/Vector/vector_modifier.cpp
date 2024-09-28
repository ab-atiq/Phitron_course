#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v2;
    // vector 2 use from here
    v2.assign(5, 10);

    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // push back
    v2.push_back(25);
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // pop back
    v2.pop_back();
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // insert beginning
    v2.insert(v2.begin(), 8);
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // erase beginning
    v2.erase(v2.begin());
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // emplace beginning
    v2.emplace(v2.begin(), 19);
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // emplace back beginning
    v2.emplace_back(29);
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // clear vector 2
    v2.clear();
    cout << "Size of vector 2 is: " << v2.size() << endl;

    return 0;
}

// https://www.geeksforgeeks.org/vector-in-cpp-stl/
