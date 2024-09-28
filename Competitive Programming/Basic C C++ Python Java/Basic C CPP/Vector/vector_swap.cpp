// C++ program to swap two vector elements
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v2, v3;

    v2.push_back(11);
    v2.push_back(22);
    v3.push_back(33);
    v3.push_back(44);
  
    cout << "Before swap: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;

    // swap use in vector
    v2.swap(v3);

    cout << "After swap: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}
