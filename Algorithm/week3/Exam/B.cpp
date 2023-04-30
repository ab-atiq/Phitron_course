#include <bits/stdc++.h>
#define MaxNum 2000
using namespace std;

queue<pair<int, int>> q;
pair<int, int> from[MaxNum][MaxNum];
pair<int, int> A;
int paths[MaxNum][MaxNum];
int oo = INT_MAX;
int N, M;
bool chkMora = false;

void check(pair<int, int> src, pair<int, int> des);
void bfs();

int main()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        string inputStr;
        cin >> inputStr;
        for (int j = 1; j <= M; j++)
        {
            paths[i][j] = oo;
            if (inputStr[j - 1] == '#')
                paths[i][j] = 0;
            if (inputStr[j - 1] == 'M')
            {
                q.push(pair<int, int>(i, j));
                paths[i][j] = 0;
            }
            if (inputStr[j - 1] == 'A')
            {
                A.first = i;
                A.second = j;
            }
        }
    }
    bfs();
    chkMora = true;
    from[A.first][A.second] = pair<int, int>(0, 0);
    paths[A.first][A.second] = 0;
    q.push(A);
    bfs();
}
void check(pair<int, int> src, pair<int, int> des)
{
    int pl = paths[src.first][src.second];
    if (pl + 1 < paths[des.first][des.second])
    {
        paths[des.first][des.second] = pl + 1;
        q.push(des);
        from[des.first][des.second] = src;
    }
}
void bfs()
{
    while (!q.empty())
    {
        pair<int, int> L = q.front(), Nxt;
        q.pop();
        Nxt = L;
        Nxt.first++;
        check(L, Nxt);
        Nxt = L;
        Nxt.first--;
        check(L, Nxt);
        Nxt = L;
        Nxt.second++;
        check(L, Nxt);
        Nxt = L;
        Nxt.second--;
        check(L, Nxt);
        if (chkMora && (L.first == 1 || L.second == 1 || L.first == N || L.second == M))
        {
            cout << "YES" << endl;
            cout << paths[L.first][L.second] << endl;
            return;
        }
    }
}