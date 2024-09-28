#include <bits/stdc++.h>
using namespace std;

int Arr[50000];

int main()
{
    int N, M, Q, i, j, A, B;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> Arr[i];
    cin >> Q;
    while (Q--)
    {
        scanf("%d", &M);
        A = -1;
        B = -1;
        for (j = 0; j < N; j++)
        {
            if (Arr[j] > M)
            {
                B = Arr[j];
                break;
            }
            if (Arr[j] < M)
                A = Arr[j];
        }
        if (A == -1)
            cout << "X ";
        else
            cout << A << " ";

        if (B == -1)
            cout << "X" << endl;
        else
            cout << B << endl;
    }
    return 0;
}