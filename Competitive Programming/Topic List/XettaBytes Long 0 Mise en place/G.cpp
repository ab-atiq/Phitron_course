#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string arr;
        cin >> arr;
        long top = 0, cnt = 0, tmpCnt = 0;
        for (long long i = 0; i < arr.size(); i++)
        {
            if (arr.at(i) == '<')
                top++;
            else
            {
                top--;
                if (top < 0)
                    break;
                tmpCnt++;
                if (top == 0)
                {
                    cnt = tmpCnt;
                }
            }
        }
        cout << cnt * 2 << endl;
    }
    return 0;
}