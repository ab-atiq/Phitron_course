// C++ program for input vector element, capacity, access modifier
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter vector size: ";
    cin >> n;
    vector<int> v;

    // input vector elements
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    
    // user can add element as much as they want
    //     int a;
    //     while(cin>>a)
    //     { 
    //         v.push_back(a);
    //     }

    // for (int i = 0; i < 5; i++)
    // {
    //     v[i] = i + 1; // it is not possible like array.
    // }

    // output vector elements using reference operator
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // another way to print vector element
    for (auto &i : v)
        cout << i << " ";
    cout << endl;

    // using begin() and end()
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;

    // vector size, capacity, max size,
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;
    v.resize(n - 3);
    cout << v.size() << endl;
    cout << v.empty() << endl;

    cout << "Before shrink_to_fit() v capacity: " << v.capacity() << endl;

    // shrink_to_fit() = requests the container to reduce its capacity to fit its size.
    v.shrink_to_fit();
    cout << "After shrink_to_fit() v capacity: " << v.capacity() << endl;
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;

    // vector access
    cout << "2 no index value: " << v[2] << endl;
    cout << "3 no index value: " << v.at(3) << endl;
    cout << "first index value: " << v.front() << endl;
    cout << "last index value: " << v.back() << endl;
    int *firstDataPointer = v.data();
    cout << "vector first pointer index value: " << *firstDataPointer << endl;

    return 0;
}
