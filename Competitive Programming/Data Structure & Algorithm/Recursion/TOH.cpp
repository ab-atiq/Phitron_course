#include <iostream>
using namespace std;

void TOH(int n, string src, string helper, string dest)
{
    if (n == 1)
    {
        cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
        return;
    }
    TOH(n - 1, src, dest, helper);
    cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
    TOH(n - 1, helper, src, dest);
}

int main()
{
    int disk;
    cin >> disk;
    TOH(disk, "S", "H", "D");
    return 0;
}