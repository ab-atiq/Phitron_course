#include <iostream>
#include <vector>
using namespace std;
// main function
int main()
{
    vector<vector<int>> v;
    int row, column;
    cout << "Enter total row numbers: ";
    cin >> row;
    // taking input into 2D vector from user
    for (int i = 0; i < row; i++)
    {
        cout << "Row " << i + 1 << " Enter total column numbers: ";
        cin >> column;
        vector<int> c;
        cout << "Enter column elements: ";
        for (int j = 0; j < column; j++)
        {
            int value;
            cin >> value;
            c.push_back(value);
        }
        v.push_back(c);
    }
    cout << endl;
    // displaying 2D vector value
    row = 0;
    for (auto i : v)
    {
        cout << "Row " << ++row << " elements : ";
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
