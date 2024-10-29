#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(200);
    for (int i = 0; i <= 100; i++)
    {
        v[i] = i;
    }
    for (auto n : v)
    {
        cout << n << endl;
    }
    return 0;
}